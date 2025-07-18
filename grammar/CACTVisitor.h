
    #include <vector>


// Generated from CACT.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "CACTParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by CACTParser.
 */
class  CACTVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by CACTParser.
   */
    virtual std::any visitCompUnit(CACTParser::CompUnitContext *context) = 0;

    virtual std::any visitDecl(CACTParser::DeclContext *context) = 0;

    virtual std::any visitConstDecl(CACTParser::ConstDeclContext *context) = 0;

    virtual std::any visitConstDef(CACTParser::ConstDefContext *context) = 0;

    virtual std::any visitVarDecl(CACTParser::VarDeclContext *context) = 0;

    virtual std::any visitVarDef(CACTParser::VarDefContext *context) = 0;

    virtual std::any visitVoidType(CACTParser::VoidTypeContext *context) = 0;

    virtual std::any visitIntType(CACTParser::IntTypeContext *context) = 0;

    virtual std::any visitFloatType(CACTParser::FloatTypeContext *context) = 0;

    virtual std::any visitDoubleType(CACTParser::DoubleTypeContext *context) = 0;

    virtual std::any visitBoolType(CACTParser::BoolTypeContext *context) = 0;

    virtual std::any visitDims(CACTParser::DimsContext *context) = 0;

    virtual std::any visitInitVal(CACTParser::InitValContext *context) = 0;

    virtual std::any visitFuncDef(CACTParser::FuncDefContext *context) = 0;

    virtual std::any visitParamList(CACTParser::ParamListContext *context) = 0;

    virtual std::any visitParam(CACTParser::ParamContext *context) = 0;

    virtual std::any visitBlock(CACTParser::BlockContext *context) = 0;

    virtual std::any visitBlockItem(CACTParser::BlockItemContext *context) = 0;

    virtual std::any visitAssign(CACTParser::AssignContext *context) = 0;

    virtual std::any visitExprStmt(CACTParser::ExprStmtContext *context) = 0;

    virtual std::any visitBlockStmt(CACTParser::BlockStmtContext *context) = 0;

    virtual std::any visitReturnStmt(CACTParser::ReturnStmtContext *context) = 0;

    virtual std::any visitIfStmt(CACTParser::IfStmtContext *context) = 0;

    virtual std::any visitWhileStmt(CACTParser::WhileStmtContext *context) = 0;

    virtual std::any visitBreakStmt(CACTParser::BreakStmtContext *context) = 0;

    virtual std::any visitContinueStmt(CACTParser::ContinueStmtContext *context) = 0;

    virtual std::any visitExpr(CACTParser::ExprContext *context) = 0;

    virtual std::any visitCond(CACTParser::CondContext *context) = 0;

    virtual std::any visitLVal(CACTParser::LValContext *context) = 0;

    virtual std::any visitPrimary(CACTParser::PrimaryContext *context) = 0;

    virtual std::any visitUnaryOp(CACTParser::UnaryOpContext *context) = 0;

    virtual std::any visitFuncCall(CACTParser::FuncCallContext *context) = 0;

    virtual std::any visitAtom(CACTParser::AtomContext *context) = 0;

    virtual std::any visitArgList(CACTParser::ArgListContext *context) = 0;

    virtual std::any visitMulExpr(CACTParser::MulExprContext *context) = 0;

    virtual std::any visitAddExpr(CACTParser::AddExprContext *context) = 0;

    virtual std::any visitRelExpr(CACTParser::RelExprContext *context) = 0;

    virtual std::any visitEqExpr(CACTParser::EqExprContext *context) = 0;

    virtual std::any visitAndExpr(CACTParser::AndExprContext *context) = 0;

    virtual std::any visitOrExpr(CACTParser::OrExprContext *context) = 0;


};

