
    #include <vector>


// Generated from CACT.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "CACTVisitor.h"


/**
 * This class provides an empty implementation of CACTVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  CACTBaseVisitor : public CACTVisitor {
public:

  virtual std::any visitCompUnit(CACTParser::CompUnitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDecl(CACTParser::DeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstDecl(CACTParser::ConstDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstDef(CACTParser::ConstDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVarDecl(CACTParser::VarDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVarDef(CACTParser::VarDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVoidType(CACTParser::VoidTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntType(CACTParser::IntTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFloatType(CACTParser::FloatTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDoubleType(CACTParser::DoubleTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBoolType(CACTParser::BoolTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDims(CACTParser::DimsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInitVal(CACTParser::InitValContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncDef(CACTParser::FuncDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParamList(CACTParser::ParamListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParam(CACTParser::ParamContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlock(CACTParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlockItem(CACTParser::BlockItemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssign(CACTParser::AssignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExprStmt(CACTParser::ExprStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlockStmt(CACTParser::BlockStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReturnStmt(CACTParser::ReturnStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfStmt(CACTParser::IfStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhileStmt(CACTParser::WhileStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBreakStmt(CACTParser::BreakStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitContinueStmt(CACTParser::ContinueStmtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpr(CACTParser::ExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCond(CACTParser::CondContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLVal(CACTParser::LValContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrimary(CACTParser::PrimaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnaryOp(CACTParser::UnaryOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncCall(CACTParser::FuncCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAtom(CACTParser::AtomContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArgList(CACTParser::ArgListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMulExpr(CACTParser::MulExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAddExpr(CACTParser::AddExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRelExpr(CACTParser::RelExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEqExpr(CACTParser::EqExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAndExpr(CACTParser::AndExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOrExpr(CACTParser::OrExprContext *ctx) override {
    return visitChildren(ctx);
  }


};

