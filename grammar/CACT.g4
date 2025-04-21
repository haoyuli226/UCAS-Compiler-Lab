grammar CACT;

@header {
    #include <vector>
}

/*****************************************************************
 *  Parser rules
 *****************************************************************/

compUnit
    : (decl | funcDef)+ EOF
    ;

/* ---------- 声明 ---------- */

decl
    : constDecl
    | varDecl
    ;

constDecl
    : CONST type constDef (',' constDef)* ';'
    ;

constDef
    : Ident dims? '=' initVal
    ;

varDecl
    : type varDef (',' varDef)* ';'
    ;

varDef
    : Ident dims? ('=' initVal)?
    ;

/* ---------- 类型 ---------- */

type
    : VOID   #VoidType
    | INT    #IntType
    | FLOAT  #FloatType
    | DOUBLE #DoubleType
    | BOOL   #BoolType
    ;

/* ---------- 维度 & 初始化 ---------- */

dims
    : '[' IntConst ']' ('[' IntConst ']')*
    ;

initVal
    : IntConst
    | FloatConst
    | DoubleConst
    | '{' (initVal (',' initVal)*)? '}'
    ;

/* ---------- 函数 ---------- */

funcDef
    : type Ident '(' paramList? ')' block
    ;

paramList
    : param (',' param)*
    ;

param
    : type Ident ('[' ']' dims?)?
    ;

/* ---------- 语句块 ---------- */

block
    : '{' blockItem* '}'
    ;

blockItem
    : decl
    | stmt
    ;

/* ---------- 语句 ---------- */

stmt
    : lVal '=' expr ';'                     #Assign
    | expr? ';'                             #ExprStmt
    | block                                 #BlockStmt
    | RETURN expr? ';'                      #ReturnStmt
    | IF '(' cond ')' stmt (ELSE stmt)?     #IfStmt
    | WHILE '(' cond ')' stmt               #WhileStmt
    | BREAK ';'                             #BreakStmt
    | CONTINUE ';'                          #ContinueStmt
    ;

/* ---------- 表达式 ---------- */

expr   : orExpr ;
cond   : orExpr ;

lVal
    : Ident ('[' expr ']')*
    ;

primary
    : '(' expr ')'
    | lVal
    | IntConst
    | DoubleConst
    | FloatConst
    | TRUE
    | FALSE
    ;

/* 函数调用与一元运算 */
unary
    : ('+' | '-' | '!') unary                     #UnaryOp
    | Ident '(' argList? ')'                      #FuncCall
    | primary                                     #Atom
    ;

argList
    : expr (',' expr)*
    ;

/* 优先级由低到高：or → and → eq → rel → add → mul → unary */
mulExpr
    : unary ( (MUL | DIV | MOD) unary )*
    ;

addExpr
    : mulExpr ( (ADD | SUB) mulExpr )*
    ;

relExpr
    : addExpr ( (LT | LE | GT | GE) addExpr )*
    ;

eqExpr
    : relExpr ( (EQ | NEQ) relExpr )*
    ;

andExpr
    : eqExpr (AND eqExpr)*
    ;

orExpr
    : andExpr (OR andExpr)*
    ;

/*****************************************************************
 *  Lexer rules – keywords first!
 *****************************************************************/

/* ---------- 关键字 ---------- */
INT      : 'int';
BOOL     : 'bool';
DOUBLE   : 'double';
FLOAT    : 'float';
VOID     : 'void';
CONST    : 'const';
IF       : 'if';
ELSE     : 'else';
WHILE    : 'while';
BREAK    : 'break';
CONTINUE : 'continue';
RETURN   : 'return';
TRUE     : 'true';
FALSE    : 'false';

/* ---------- 运算符 & 界符 ---------- */
ADD  : '+';
SUB  : '-';
MUL  : '*';
DIV  : '/';
MOD  : '%';
NOT  : '!';
EQ   : '==';
NEQ  : '!=';
GT   : '>';
LT   : '<';
GE   : '>=';
LE   : '<=';
AND  : '&&';
OR   : '||';

/* ---------- 标识符 & 常量 ---------- */
Ident
    : [a-zA-Z_] [a-zA-Z0-9_]*
    ;

IntConst
    : '0'
    | [1-9] [0-9]*                 // decimal
    | '0' [0-7]+                   // octal
    | ('0x'|'0X') [0-9a-fA-F]+     // hex
    ;

/* 浮点常量：兼容 1., .5, 3.14e+2f 等写法 */
FloatConst
    : ([0-9]+)? '.' [0-9]* ([eE] [+\-]? [0-9]+)? [fF]
    ;

DoubleConst
    : ([0-9]+)? '.' [0-9]* ([eE] [+\-]? [0-9]+)?
    ;

/*****************************************************************
 *  Skips / Channels
 *****************************************************************/

WS
    : [ \t\r\n]+ -> skip
    ;

LineComment
    : '//' ~[\r\n]* -> skip
    ;

BlockComment
    : '/*' .*? '*/' -> skip
    ;
