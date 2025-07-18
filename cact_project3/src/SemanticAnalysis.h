#pragma once

#include "antlr4-runtime.h"          // ANTLR4 运行时库
#include "../grammar/CACTListener.h" // 语法树监听器接口
#include "SymbolTable.h"             // 符号表管理
#include "cact_types.h"              // CACT 类型系统定义

// 声明外部全局对象
extern SymbolTable  symbol_table;    // 全局符号表
extern TypeUtils    typeutils;       // 类型工具类

// 中间代码生成相关宏定义（条件编译）
#ifdef IR_GEN
#define TEMP_PREFIX         '%'      // 临时变量前缀
#define ADDR_INFIX          '>'      // 子数组偏移中缀
#define ITEM_INFIX          '<'      // 子元素偏移中缀
#define ARRAY_PLACEHOLDER   '$'      // 数组占位符
#define IMM_PREFIX          '#'      // 立即数前缀
#define LABEL_PREFIX        'L'      // 标签前缀
#define GLOBAL_PREFIX       '@'      // 全局变量前缀
#define LOCAL_PREFIX        '^'      // 局部变量前缀
#endif

/**
 * 语义分析器类
 * 功能：继承自语法树监听器，实现语义检查和中间代码生成
 */
class SemanticAnalysis: public CACTListener {
    public:
        scope_t *cur_scope;

        std::vector<int> node;

        #ifdef IR_GEN
        // 中间代码生成相关数据结构和方法
        std::vector <IR_code_t> IRC_array; // IR存储
        size_t label_cnt=0; // 标签序号

        size_t len_from_type(cact_type_t type){
            if(type.arrdims.size()==0){
                return 1;
            }
            else{
                size_t product = 1;
                for(int dim: type.arrdims){
                    product *= dim;
                }
                return product;
            }
        }

        std::vector<IR_temp_t> Gvar_array;
        std::string newGvar(cact_basety_t basety, bool is_const=false, size_t length=1){
            std::string gvar_name = GLOBAL_PREFIX + std::to_string(Gvar_array.size());
            Gvar_array.push_back((IR_temp_t){.basety=basety,.is_const=is_const,.length=length});
            return gvar_name;
        }

        std::vector<IR_temp_t> Lvar_array;
        std::string newLvar(cact_basety_t basety, bool is_const=false, size_t length=1){
            std::string lvar_name = LOCAL_PREFIX + std::to_string(Lvar_array.size());
            Lvar_array.push_back((IR_temp_t){.basety=basety,.is_const=is_const,.length=length});
            return lvar_name;
        }

        std::vector<IR_temp_t> Temp_array;
        std::string newTemp(cact_basety_t basety, bool is_const=false, size_t length=1){
            std::string temp_name = TEMP_PREFIX + std::to_string(Temp_array.size());
            Temp_array.push_back((IR_temp_t){.basety=basety,.is_const=is_const,.length=length});
            return temp_name;
        }

        std::string newLabel(){
            std::string label_name = LABEL_PREFIX + std::to_string(label_cnt);
            label_cnt++;
            return label_name;
        }

        // 添加IR
        void addIRC(IR_op_t IRop,cact_basety_t basety=BTY_UNKNOWN,std::string result="",std::string arg1="",std::string arg2=""){
            IRC_array.push_back((IR_code_t){IRop,basety,result,arg1,arg2});
        }

        //stmt进入和退出模板，用于处理进入添加in_label，退出跳至out_label
        template <typename T1>
        void enterStmt(T1 *ctx);
        template <typename T1>
        void exitStmt(T1 *ctx);

        // 测试用打印IRcode
        // 打印单个IR指令的函数
        void printIRCode(const IR_code_t& code) {
            std::cout << "OP: " << typeutils.IRop_to_str[code.IRop]
                    << " | Type: " << typeutils.basety_to_str[code.basety]
                    << " | Result: " << (code.result.empty() ? "NONE" : code.result)
                    << " | Arg1: " << (code.arg1.empty() ? "NONE" : code.arg1)
                    << " | Arg2: " << (code.arg2.empty() ? "NONE" : code.arg2)
                    << std::endl;
        }
        // 打印整个IR数组的函数
        void printAllIRCodes() {
            std::cout << "\n=== IR Code Dump (" << IRC_array.size() << " instructions) ===" << std::endl;
            for (size_t i = 0; i < IRC_array.size(); ++i) {
                std::cout << "[" << i << "] ";
                printIRCode(IRC_array[i]);
            }
            std::cout << "=== End of IR Dump ===\n" << std::endl;
        }
        #endif

        //添加内联函数声明
        void addBuiltinFunc(std::string func_name, int argc, cact_basety_t basety, cact_basety_t ret_type);

        //操作对象检查，非数组，并针对操作符检查类型
        //stmt_assign赋值同样需要满足上述判断
        void OperandCheck(cact_expr_ptr expr_ptr);

        //模板函数，提供公共逻辑
        template <typename T1,typename T2>
        void enterConst_Var_Decl(T1 *ctx,std::vector<T2*> def_list);

        template <typename T1>
        void enterConst_Var_Def(T1 *ctx);

        //is_const区分constDef和varDef添加到变量表的不同类型
        template <typename T1>
        void exitConst_Var_Def(T1 *ctx, bool is_const);

        template <typename T1,typename T2, typename T3, typename T4>
        void exitBinaryExp(T1 *ctx, T2 *aExp, T3 *op_ptr, T4 *bExp, bool is_boolexp);

        virtual void enterCompUnit(CACTParser::CompUnitContext *ctx) override;
        virtual void exitCompUnit(CACTParser::CompUnitContext *ctx) override;

        virtual void enterDecl(CACTParser::DeclContext *ctx) override;
        virtual void exitDecl(CACTParser::DeclContext *ctx) override;

        virtual void enterConstDecl(CACTParser::ConstDeclContext *ctx) override;
        virtual void exitConstDecl(CACTParser::ConstDeclContext *ctx) override;

        virtual void enterBType(CACTParser::BTypeContext *ctx) override;
        virtual void exitBType(CACTParser::BTypeContext *ctx) override;

        virtual void enterArrayDims(CACTParser::ArrayDimsContext *ctx) override;
        virtual void exitArrayDims(CACTParser::ArrayDimsContext *ctx) override;

        virtual void enterConstDef(CACTParser::ConstDefContext *ctx) override;
        virtual void exitConstDef(CACTParser::ConstDefContext *ctx) override;

        virtual void enterConstInitVal(CACTParser::ConstInitValContext *ctx) override;
        virtual void exitConstInitVal(CACTParser::ConstInitValContext *ctx) override;

        virtual void enterVarDecl(CACTParser::VarDeclContext *ctx) override;
        virtual void exitVarDecl(CACTParser::VarDeclContext *ctx) override;

        virtual void enterVarDef(CACTParser::VarDefContext *ctx) override;
        virtual void exitVarDef(CACTParser::VarDefContext *ctx) override;

        virtual void enterFuncDef(CACTParser::FuncDefContext *ctx) override;
        virtual void exitFuncDef(CACTParser::FuncDefContext *ctx) override;

        virtual void enterFuncType(CACTParser::FuncTypeContext *ctx) override;
        virtual void exitFuncType(CACTParser::FuncTypeContext *ctx) override;

        virtual void enterFuncFParam(CACTParser::FuncFParamContext *ctx) override;
        virtual void exitFuncFParam(CACTParser::FuncFParamContext *ctx) override;

        virtual void enterLab(CACTParser::LabContext *ctx) override;
        virtual void exitLab(CACTParser::LabContext *ctx) override;

        virtual void enterGo(CACTParser::GoContext *ctx) override;
        virtual void exitGo(CACTParser::GoContext *ctx) override;

        virtual void enterBlock(CACTParser::BlockContext *ctx) override;
        virtual void exitBlock(CACTParser::BlockContext *ctx) override;

        virtual void enterStmt_assign(CACTParser::Stmt_assignContext *ctx) override;
        virtual void exitStmt_assign(CACTParser::Stmt_assignContext *ctx) override;

        virtual void enterStmt_exp(CACTParser::Stmt_expContext *ctx) override;
        virtual void exitStmt_exp(CACTParser::Stmt_expContext *ctx) override;

        virtual void enterStmt_block(CACTParser::Stmt_blockContext *ctx) override;
        virtual void exitStmt_block(CACTParser::Stmt_blockContext *ctx) override;

        virtual void enterStmt_if(CACTParser::Stmt_ifContext *ctx) override;
        virtual void exitStmt_if(CACTParser::Stmt_ifContext *ctx) override;

        virtual void enterStmt_while(CACTParser::Stmt_whileContext *ctx) override;
        virtual void exitStmt_while(CACTParser::Stmt_whileContext *ctx) override;

        virtual void enterStmt_bcr(CACTParser::Stmt_bcrContext *ctx) override;
        virtual void exitStmt_bcr(CACTParser::Stmt_bcrContext *ctx) override;

        virtual void enterExp(CACTParser::ExpContext *ctx) override;
        virtual void exitExp(CACTParser::ExpContext *ctx) override;

        virtual void enterConstExp(CACTParser::ConstExpContext *ctx) override;
        virtual void exitConstExp(CACTParser::ConstExpContext *ctx) override;

        virtual void enterCond(CACTParser::CondContext *ctx) override;
        virtual void exitCond(CACTParser::CondContext *ctx) override;

        virtual void enterLVal(CACTParser::LValContext *ctx) override;
        virtual void exitLVal(CACTParser::LValContext *ctx) override;

        virtual void enterNumber(CACTParser::NumberContext *ctx) override;
        virtual void exitNumber(CACTParser::NumberContext *ctx) override;

        virtual void enterPrimaryExp(CACTParser::PrimaryExpContext *ctx) override;
        virtual void exitPrimaryExp(CACTParser::PrimaryExpContext *ctx) override;

        virtual void enterUnaryExp(CACTParser::UnaryExpContext *ctx) override;
        virtual void exitUnaryExp(CACTParser::UnaryExpContext *ctx) override;

        virtual void enterUnaryOp(CACTParser::UnaryOpContext *ctx) override;
        virtual void exitUnaryOp(CACTParser::UnaryOpContext *ctx) override;

        virtual void enterFuncRParams(CACTParser::FuncRParamsContext *ctx) override;
        virtual void exitFuncRParams(CACTParser::FuncRParamsContext *ctx) override;

        virtual void enterMulExp(CACTParser::MulExpContext *ctx) override;
        virtual void exitMulExp(CACTParser::MulExpContext *ctx) override;

        virtual void enterMulOp(CACTParser::MulOpContext *ctx) override;
        virtual void exitMulOp(CACTParser::MulOpContext *ctx) override;

        virtual void enterAddExp(CACTParser::AddExpContext *ctx) override;
        virtual void exitAddExp(CACTParser::AddExpContext *ctx) override;

        virtual void enterAddOp(CACTParser::AddOpContext *ctx) override;
        virtual void exitAddOp(CACTParser::AddOpContext *ctx) override;

        virtual void enterRelExp(CACTParser::RelExpContext *ctx) override;
        virtual void exitRelExp(CACTParser::RelExpContext *ctx) override;

        virtual void enterRelOp(CACTParser::RelOpContext *ctx) override;
        virtual void exitRelOp(CACTParser::RelOpContext *ctx) override;

        virtual void enterEqExp(CACTParser::EqExpContext *ctx) override;
        virtual void exitEqExp(CACTParser::EqExpContext *ctx) override;

        virtual void enterEqOp(CACTParser::EqOpContext *ctx) override;
        virtual void exitEqOp(CACTParser::EqOpContext *ctx) override;

        virtual void enterLAndExp(CACTParser::LAndExpContext *ctx) override;
        virtual void exitLAndExp(CACTParser::LAndExpContext *ctx) override;

        virtual void enterLOrExp(CACTParser::LOrExpContext *ctx) override;
        virtual void exitLOrExp(CACTParser::LOrExpContext *ctx) override;

        virtual void visitTerminal(antlr4::tree::TerminalNode *node) override;
        virtual void visitErrorNode(antlr4::tree::ErrorNode *node) override;
        virtual void enterEveryRule(antlr4::ParserRuleContext *ctx) override;
        virtual void exitEveryRule(antlr4::ParserRuleContext *ctx) override;

};