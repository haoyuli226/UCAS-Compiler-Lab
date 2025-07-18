#include "SemanticAnalysis.h"

#ifdef IR_GEN

class Interpreter {
public:
    Interpreter(const std::vector<IR_code_t>& irc,
                const std::vector<IR_temp_t>& temp,
                const std::vector<IR_temp_t>& lvar,
                const std::vector<IR_temp_t>& gvar)
        : IRC_array(irc), 
          Temp_array(temp), 
          Lvar_array(lvar), 
          Gvar_array(gvar) 
    {}

    void run() {
        pc = 0;
        //先从上到下扫描一遍IR保存标签对应的地址
        while (pc < IRC_array.size()){
            const IR_code_t& ir = IRC_array[pc];
            switch (ir.IRop){
                case IR_FUNC_BEGIN:
                    labels[ir.result].begin = pc;
                    pc++;
                    break;
                case IR_FUNC_END:
                    labels[ir.result].end = pc;
                    pc++;
                    break;
                case IR_LABEL:
                    labels[ir.result].begin = pc;
                    pc++;
                    break;
                default:
                    pc++;
            }
        }

        pc = 0;
        int val;
        int length;
        int index;
        bool running = true;
        while (pc < IRC_array.size() && running) {
            const IR_code_t& ir = IRC_array[pc];
            std::string str1,str2;
            std::string name = ir.result;

            //std::cout << "[" << pc << "] " ;
            //printIRCode(ir);

            int pos = name.find('<');
            if(pos == std::string::npos){
                str1 = name;
                str2 = "";
                index = 0;
            }
            else{
                str1 = name.substr(0,pos);
                str2 = name.substr(pos+1);
                index = getValue(str2)/4;
            }

            switch (ir.IRop) {
                case IR_FUNC_BEGIN:
                    if(ir.result == "main"){
                        funcstack.push_back((func){ .param="", .ra=0, .funcname=ir.result, .returnval=""});
                        pc++;
                        break;
                    }
                    else if(funcstack.empty()){
                        pc = labels[ir.result].end + 1;
                        break;
                    }
                    else{
                        pc++;
                        break;
                    }
                case IR_RETURN: 
                    if(funcstack.back().funcname == "main"){
                        val = getValue(ir.result);
                        std::cout << "Return: " << val << "\n";
                        running = false;
                        break;
                    }
                    else{
                        val = getValue(ir.result);
                        setValue(funcstack.back().returnval,val,0);
                        pc++;
                        break;
                    }
                case IR_FUNC_END:
                    pc = funcstack.back().ra;
                    funcstack.pop_back();
                    break;
                case IR_G_ALLOC:
                    length = getLength(str1);
                    //std::cout << length <<"\n";
                    if(length==1){
                        val = getValue(ir.arg1);
                        setValue(str1,val,index);
                    }
                    else{//数组初始化情况
                        int i=0;
                        std::string str;
                        for(int index1=0;index1<length;index1++){
                            while(ir.arg1[i]!=','){
                                if(ir.arg1[i]!='#'){
                                    str+=ir.arg1[i];
                                }
                                i++;
                            }
                            if(str=="$"){
                                val = 0;
                                str = "";
                            }
                            else{
                                val = std::stoi(str,nullptr,0);
                                str = "";
                            }
                            setValue(str1,val,index1);
                            //std::cout << gvar_vals[str1][index1] <<"\n";
                            i++;
                        }
                    }
                    pc++;
                    break;
                case IR_L_ALLOC:
                    length = getLength(str1);
                    //std::cout << length <<"\n";
                    if(length==1){
                        val = getValue(ir.arg1);
                        setValue(str1,val,index);
                    }
                    else{//数组初始化情况
                        int i=0;
                        std::string str;
                        for(int index1=0;index1<length;index1++){
                            while(ir.arg1[i]!=','){
                                if(ir.arg1[i]!='#'){
                                    str+=ir.arg1[i];
                                }
                                i++;
                            }
                            if(str=="$"){
                                val = 0;
                                str = "";
                            }
                            else{
                                val = std::stoi(str,nullptr,0);
                                str = "";
                            }
                            setValue(str1,val,index1);
                            //std::cout << lvar_vals[ir.result][index1] <<"\n";
                            i++;
                        }
                    }
                    pc++;
                    break;
                case IR_ADD:
                    val = getValue(ir.arg1) + getValue(ir.arg2);
                    //std::cout << "add" << "\n";
                    //std::cout << getValue(ir.arg1) << "\n";
                    //std::cout << getValue(ir.arg2) << "\n";
                    //std::cout << val << "\n";
                    setValue(str1,val,index);
                    pc++;
                    break;
                case IR_ASSIGN:
                    val = getValue(ir.arg1);
                    //std::cout << ir.arg1 << "\n";
                    //std::cout << val << "\n";
                    setValue(str1,val,index);
                    pc++;
                    break;
                case IR_MUL:
                    val = getValue(ir.arg1) * getValue(ir.arg2);
                    //std::cout << "mul" << "\n";
                    //std::cout << getValue(ir.arg1) << "\n";
                    //std::cout << getValue(ir.arg2) << "\n";
                    //std::cout << val << "\n";
                    setValue(str1,val,index);
                    pc++;
                    break;
                case IR_SUB:
                    val = getValue(ir.arg1) - getValue(ir.arg2);
                    setValue(str1,val,index);
                    pc++;
                    break;
                case IR_DIV:
                    val = getValue(ir.arg1) / getValue(ir.arg2);
                    setValue(str1,val,index);
                    pc++;
                    break;
                case IR_MOD:
                    val = getValue(ir.arg1) % getValue(ir.arg2);
                    setValue(str1,val,index);
                    pc++;
                    break;
                case IR_AND:
                    val = getValue(ir.arg1) && getValue(ir.arg2);
                    setValue(str1,val,index);
                    pc++;
                    break;
                case IR_OR:
                    val = getValue(ir.arg1) || getValue(ir.arg2);
                    setValue(str1,val,index);
                    pc++;
                    break;
                case IR_NEG:
                    val = -getValue(ir.arg1);
                    setValue(str1,val,index);
                    pc++;
                    break;
                case IR_PARAM:
                    param = ir.result;
                    pc++;
                    break;
                case IR_CALL:
                    if(ir.result == "print_int"){
                        std::cout << getValue(param);
                        pc++;
                        break;
                    }
                    else if(ir.result == "get_int"){
                        std::cin >> val;
                        setValue(ir.arg1,val,0);
                        pc++;
                        break;
                    }
                    else if(ir.result == "print_char"){
                        if(param.substr(2,1) == "\\")
                            std::cout << "\n";
                        else
                            std::cout << param.substr(2,1);
                        pc++;
                        break;
                    }
                    else{
                        funcstack.push_back((func){.param=param, .ra=pc+1, .funcname=ir.result, .returnval=ir.arg1});
                        pc = labels[ir.result].begin + 1;
                        break;
                    }
                case IR_J:
                    pc = labels[ir.result].begin + 1;
                    break;
                case IR_BEQ:
                    if(getValue(ir.arg1) == getValue(ir.arg2)){
                        pc = labels[ir.result].begin + 1;
                        break;
                    }
                    else{
                        pc++;
                        break;
                    }
                case IR_BNE:
                    if(getValue(ir.arg1) != getValue(ir.arg2)){
                        pc = labels[ir.result].begin + 1;
                        break;
                    }
                    else{
                        pc++;
                        break;
                    }
                case IR_BLT:
                    if(getValue(ir.arg1) < getValue(ir.arg2)){
                        pc = labels[ir.result].begin + 1;
                        break;
                    }
                    else{
                        pc++;
                        break;
                    }
                case IR_BGT:
                    if(getValue(ir.arg1) > getValue(ir.arg2)){
                        pc = labels[ir.result].begin + 1;
                        break;
                    }
                    else{
                        pc++;
                        break;
                    }
                case IR_BLE:
                    if(getValue(ir.arg1) <= getValue(ir.arg2)){
                        pc = labels[ir.result].begin + 1;
                        break;
                    }
                    else{
                        pc++;
                        break;
                    }
                case IR_BGE:
                    if(getValue(ir.arg1) >= getValue(ir.arg2)){
                        pc = labels[ir.result].begin + 1;
                        break;
                    }
                    else{
                        pc++;
                        break;
                    }
                default:
                    pc++;
            }
        }
    }

private:
    std::vector<IR_code_t> IRC_array;
    std::vector<IR_temp_t> Temp_array;
    std::vector<IR_temp_t> Lvar_array;
    std::vector<IR_temp_t> Gvar_array;

    std::unordered_map<std::string, std::vector<int>> gvar_vals;
    std::unordered_map<std::string, std::vector<int>> lvar_vals;
    std::unordered_map<std::string, std::vector<int>> temp_vals;

    typedef struct{
        int begin;
        int end;
    }lab;

    std::unordered_map<std::string, lab> labels;
    std::string param;

    typedef struct{
        std::string param;
        int ra;
        std::string funcname;
        std::string returnval;
    }func;
    std::vector<func> funcstack;

    size_t pc = 0;

    int getValue(std::string name){
        int pos = name.find('<');
        std::string str1,str2;
        if(pos == std::string::npos){
            str1 = name;
            str2 = "";
        }
        else{
            str1 = name.substr(0,pos);
            str2 = name.substr(pos+1);
        }
        if (name[0] == '@' && str2 == "") 
            return gvar_vals[name][0];
        else if(name[0] == '@')
            return gvar_vals[str1][getValue(str2)/4];

        if (name[0] == '%' && str2 == "") 
            return temp_vals[name][0];
        else if(name[0] == '%')
            return temp_vals[str1][getValue(str2)/4];  

        if (name[0] == '^' && str2 == ""){
            if(lvar_vals[name].empty())
                return getValue(funcstack.back().param);
            return lvar_vals[name][0];
        } 
        else if(name[0] == '^')
            return lvar_vals[str1][getValue(str2)/4];

        if (name[0] == '#') return std::stoi(name.substr(1),nullptr,0);
        return 0;
    }

    void setValue(std::string name, int val, int index) {
        if (name[0] == '@' && gvar_vals[name].size()<=index){
            gvar_vals[name].push_back(val);
        }
        else if(name[0] == '@'){
            gvar_vals[name][index]=val;
        }

        if (name[0] == '%' && temp_vals[name].size()<=index){
            temp_vals[name].push_back(val);
        }
        else if(name[0] == '%'){
            temp_vals[name][index]=val;
        }

        if (name[0] == '^' && lvar_vals[name].size()<=index){
            lvar_vals[name].push_back(val);
        }
        else if(name[0] == '^'){
            lvar_vals[name][index]=val;
        }
    }
    int getLength(std::string name){
        if (name[0] == '@') return Gvar_array[std::stoi(name.substr(1)),nullptr,0].length;
        if (name[0] == '%') return Temp_array[std::stoi(name.substr(1)),nullptr,0].length;
        if (name[0] == '^') return Lvar_array[std::stoi(name.substr(1)),nullptr,0].length;
    }

    void printIRCode(const IR_code_t& code) {
        std::cout << "OP: " << typeutils.IRop_to_str[code.IRop]
                << " | Type: " << typeutils.basety_to_str[code.basety]
                << " | Result: " << (code.result.empty() ? "NONE" : code.result)
                << " | Arg1: " << (code.arg1.empty() ? "NONE" : code.arg1)
                << " | Arg2: " << (code.arg2.empty() ? "NONE" : code.arg2)
                << std::endl;
    }
};

#endif