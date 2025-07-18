grammar CACT;

@header {
    #include "cact_types.h"    // 类型系统定义头文件
    #include "SymbolTable.h"   // 符号表管理头文件
    #include <vector>
    #include <string>
}

/****** 顶层结构 ******/
/**
 * compUnit: 编译单元入口
 * 说明：由多个全局声明(decl)或函数定义(funcDef)组成的程序
 */
compUnit 
    : (decl | funcDef)+
    ;


/**
 * decl: 声明语句
 * 说明：包含常量声明或变量声明
 */
decl 
    : constDecl 
    | varDecl
    ;

/****** 常量声明 ******/
/**
 * constDecl: 常量声明
 * 结构：'const' + 基础类型 + 常量定义列表(逗号分隔) + 分号
 * 示例：const int a = 1, b[2] = {1,2};
 */
constDecl 
    : 'const' bType constDef (',' constDef)* ';'
    ;

/**
 * bType: 基础数据类型
 * 局部变量：
 *   - basety: 存储当前解析的基础类型(INT/FLOAT/CHAR)
 *   - passTo: 传递类型信息给下级规则(如constDef的basety继承)
 */
bType 
    locals[
        cact_basety_t basety,
        std::vector<cact_basety_t*> passTo, 
    ]
    : 'int' 
    | 'float' 
    | 'char'
    ;

/**
 * arrayDims: 数组维度声明
 * 局部变量：
 *   - dims_ptr: 存储多维数组各维度大小的指针
 * 设计：通过(LeftBracket IntConst RightBracket)*匹配多个维度
 */
arrayDims
    locals[
        std::vector<uint32_t> *dims_ptr,
    ]
    : (LeftBracket IntConst RightBracket)*
    ;

/**
 * constDef: 常量定义
 * 局部变量：
 *   - basety: 从bType继承的基础类型
 *   - arraydims: 存储数组维度信息
 *   - name: 标识符名称
 *   - type: 组合类型（基础类型+维度）
 */
constDef 
    locals [
        cact_basety_t basety,
        std::vector<uint32_t> arraydims,
        std::string name,
        cact_type_t type,
    ]
    : IDENT arrayDims '=' constInitVal
    ;

/****** 常量初始化 ******/
/**
 * constInitVal: 常量初始化值
 * 局部变量：
 *   - basety: 继承的基类类型
 *   - dims_ptr: 指向当前维度的指针
 *   - dim_index: 当前维度层级（0=最内层）
 *   - top: 标记是否为最顶层初始化
 *   - value_list: 用于IR的初始化值序列
 * 设计：
 *   支持两种形式：1) 单一常量 2) 嵌套花括号列表
 *   示例：int a[2][2] = {{1,2}, {3,4}};
 */
constInitVal
    locals[
        //自顶向下继承
        cact_basety_t basety,
        //维度数组指针，值依次是从最外层到最内层的维度
        std::vector<uint32_t> *dims_ptr,
        //维度索引，最内层为0
        uint16_t dim_index,
        //表征是否最顶层，只有index为1，且为最顶层才允许以平铺列表初始化
        bool top,
        
        //IR
        //value_list为所有子元素拼接，空位置用#占位
        std::string value_list,
    ]
    : constExp 
    | '{'(constInitVal(',' constInitVal)*)?'}'  
    ;

/****** 变量声明 ******/
/**
 * varDecl: 变量声明
 * 结构：基础类型 + 变量定义列表 + 分号
 */
varDecl
    : bType varDef (',' varDef)*';'
    ;

/**
 * varDef: 变量定义
 * 局部变量同constDef，但含可选初始化
 */
varDef 
    locals[
        //由同级btype填充
        cact_basety_t basety,
        std::vector<uint32_t> arraydims,
        std::string name,
        cact_type_t type,
    ]
    : IDENT arrayDims ('=' constInitVal)?
    ;

/****** 函数定义 ******/
/**
 * funcDef: 函数定义
 * 局部变量：
 *   - fparam_list: 存储形参列表的容器
 * 设计：通过funcFParam?匹配0-N个参数
 */
funcDef 
    locals[
        //由funcDef管理，funcFParam负责插入
        //用于函数声明以及添加到block作用域
        fparam_list_t fparam_list,
    ]
    : funcType IDENT'(' funcFParam? (',' funcFParam)* ')' block
    ;

/**
 * funcType: 函数返回类型
 * 局部变量：basety存储返回类型
 */
funcType 
    locals[
        cact_basety_t basety,
    ]
    : 'void' 
    | 'int'
    | 'float'
    | 'char'
    ;

/**
 * funcFParam: 函数形参
 * 局部变量：
 *   - fparam_list_ptr: 指向所属函数fparam_list的指针
 *   - order: 参数声明顺序索引
 */
funcFParam  
    locals[
        //指向fparam_list的指针，用于查找重复命名和插入
        fparam_list_t *fparam_list_ptr,
        //由父节点确定的次序
        int order,
    ]
    : bType IDENT (LeftBracket (IntConst)? RightBracket (LeftBracket IntConst RightBracket)*)?
    ;

lab
    locals[
        std::string in_label,
    ]
    :
    ;

go
    locals[
        std::string out_label,
    ]
    :
    ;


block 
    locals[
        cact_basety_t ret_type,
        //形参列表添加到block作用域
        fparam_list_t *fparam_list_ptr,
        //IR
        std::string break_label,
        std::string continue_label,
    ]
    : '{' (decl|stmt)* '}'
    ;

stmt 
    locals[
        cact_basety_t ret_type,
        //IR
        std::string in_label, // 入点
        std::string out_label, // 出点
        // 传递最终确定层级
        std::string break_label,
        std::string continue_label,
    ]
    : lVal '=' exp ';'                                          #stmt_assign 
    | (exp)? ';'                                                #stmt_exp
    | block                                                     #stmt_block
    | IF '('cond')' lab stmt (go lab ELSE stmt)? lab            #stmt_if
    | lab WHILE '('cond')' lab stmt go lab                      #stmt_while
    | (BREAK | CONTINUE | RETURN exp?) ';'                      #stmt_bcr
    ;

exp 
    locals[
        cact_expr_ptr self,
        // IR
        std::string result_name,
    ]
    : addExp
    ;

constExp 
    locals[
        cact_basety_t basety,
        //IR
        std::string valstr,
    ]
    : number  //使用的IDENT必须是常量
    ;

cond 
    locals[
        //IR
        std::string true_label,
        std::string false_label,
    ]
    : lOrExp
    ;

lVal 
    locals[
        cact_expr_ptr self,
        //用于赋值时检查是否为常量
        bool is_const,

        //IR ???
        // //区分应用场景：赋值ST 1，使用LD 0 
        // bool is_store,
        //使用">n"表示偏移n个元素
        std::string result_name,
    ]
    : IDENT (LeftBracket exp RightBracket)*
    ;

number
    locals[
        cact_expr_ptr self,
    ]
    : addOp? IntConst 
    | addOp? FloatConst
    | CharConst 
    ;

primaryExp 
    locals[
        cact_expr_ptr self,
        //IR
        //结果变量名，下同
        std::string result_name,
    ]
    : number
    | lVal 
    | '('exp')' 
    ;

unaryExp
    locals[
        cact_expr_ptr self,
        //IR
        std::string result_name,
    ]
    : primaryExp 
    | (unaryOp unaryExp) 
    | IDENT '(' (funcRParams)? ')'
    ;

unaryOp
    : '+'
    | '-'
    | '!'
    ;

funcRParams 
    : exp (',' exp)*
    ;

mulExp 
    locals[
        cact_expr_ptr self,
        //IR
        std::string result_name,
    ]
    : unaryExp
    | mulExp mulOp unaryExp
    ;

mulOp
    : '*'
    | '/'
    | '%'
    ;

addExp
    locals[
        cact_expr_ptr self,
        //IR
        std::string result_name,
    ]
    : mulExp
    | addExp addOp mulExp
    ;

addOp
    : '+'
    | '-'
    ;

relExp
    locals[
        cact_expr_ptr self,
        //IR
        std::string result_name,
        std::string true_label,
        std::string false_label,
        bool has_label,
    ]
    : addExp
    | relExp relOp addExp
    ;

relOp
    : '<='
    | '>='
    | '<'
    | '>'
    ;

eqExp
    locals[
        cact_expr_ptr self,
        //IR
        std::string result_name,
        std::string true_label,
        std::string false_label,
        bool has_label,
    ]
    : relExp
    |'('eqExp eqOp relExp')'
    | eqExp eqOp relExp
    ;

eqOp
    : '=='
    | '!='
    ;

lAndExp
    locals[
        cact_expr_ptr self,
        // IR
        std::string true_label,
        std::string false_label,
        std::string in_label,
    ]
    : eqExp
    | lAndExp AND lab eqExp
    ;

lOrExp
    locals[
        cact_expr_ptr self,
        //IR
        //IR
        std::string result_name,
        std::string true_label,
        std::string false_label,
    ]
    : lAndExp
    | lOrExp OR lab lAndExp
    ;

/****** lexer  ******/

/****** 词法规则 ******/
/* 标点符号 */
LeftBracket : '['       ;
RightBracket: ']'       ;
AND         : '&&'      ;
OR          : '||'      ;
IF          : 'if'      ;
ELSE        : 'else'    ;
WHILE       : 'while'   ;
BREAK       : 'break'   ;
CONTINUE    : 'continue';
RETURN      : 'return'  ;

/* 标识符与字面量 */
IDENT
    : [a-zA-Z_][a-zA-Z0-9_]*
    ;

IntConst
    : DecimalConst
    | OctalConst
    | HexadecConst
    ;

fragment DecimalConst
    : NonZeroDigit Digit*
    ;

fragment OctalConst
    : '0' OctalDigit*
    ;

fragment HexadecConst
    : HexadecPrefix HexadecDigit+
    ;

fragment NonZeroDigit
    : [1-9]
    ;

fragment Digit
    : [0-9]
    ;

fragment OctalDigit
    : [0-7]
    ;

fragment HexadecPrefix
    : '0x'
    | '0X'
    ;

fragment HexadecDigit
    : [0-9a-fA-F]
    ; 

FloatConst
    : DecimalFloatConst
    | HexadecFloatConst
    ;

fragment DecimalFloatConst
    : FractionalConst Exponent? FloatSuffix?
    | DigitSeq Exponent FloatSuffix?
    ; 

fragment HexadecFloatConst
    : HexadecPrefix HexadecFractionalConst BinaryExponent FloatSuffix?
    | HexadecPrefix HexadecDigitSeq BinaryExponent FloatSuffix? 
    ;

fragment FractionalConst
    : DigitSeq? '.' DigitSeq
    | DigitSeq '.'
    ; 

fragment Exponent
    : [eE] Sign? DigitSeq
    ; 

fragment Sign
    : [+-]
    ;

fragment DigitSeq
    : Digit+
    ;

fragment HexadecFractionalConst
    : HexadecDigitSeq? '.' HexadecDigitSeq
    | HexadecDigitSeq '.'
    ;

fragment BinaryExponent
    : [pP] Sign? DigitSeq
    ;

fragment HexadecDigitSeq
    : HexadecDigit+
    ;

fragment FloatSuffix
    : [fF]
    ;

CharConst
    : '\'' Character '\''
    ;

fragment Character
    : ~['\r\n]
    | '\\''n'
    ;

/* 空白与注释 */
WS 
    : [ \t\r\n]+ -> skip 
    ; 

NEWLINE
    : ('\r' '\n'? | '\n') -> skip
    ;

BLOCKCOMMENT
    : '/*' .*? '*/' -> skip
    ;

LINECOMMENT
    : '//' ~[\r\n]* -> skip
    ;

//test