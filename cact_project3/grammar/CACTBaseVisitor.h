
    #include "cact_types.h"
    #include "SymbolTable.h"
    #include <vector>
    #include <string>


// Generated from ./CACT.g4 by ANTLR 4.13.1

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

  virtual std::any visitBType(CACTParser::BTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArrayDims(CACTParser::ArrayDimsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstDef(CACTParser::ConstDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstInitVal(CACTParser::ConstInitValContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVarDecl(CACTParser::VarDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVarDef(CACTParser::VarDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncDef(CACTParser::FuncDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncType(CACTParser::FuncTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncFParam(CACTParser::FuncFParamContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLab(CACTParser::LabContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGo(CACTParser::GoContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlock(CACTParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStmt_assign(CACTParser::Stmt_assignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStmt_exp(CACTParser::Stmt_expContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStmt_block(CACTParser::Stmt_blockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStmt_if(CACTParser::Stmt_ifContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStmt_while(CACTParser::Stmt_whileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStmt_bcr(CACTParser::Stmt_bcrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExp(CACTParser::ExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstExp(CACTParser::ConstExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCond(CACTParser::CondContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLVal(CACTParser::LValContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNumber(CACTParser::NumberContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrimaryExp(CACTParser::PrimaryExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnaryExp(CACTParser::UnaryExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnaryOp(CACTParser::UnaryOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFuncRParams(CACTParser::FuncRParamsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMulExp(CACTParser::MulExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMulOp(CACTParser::MulOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAddExp(CACTParser::AddExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAddOp(CACTParser::AddOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRelExp(CACTParser::RelExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRelOp(CACTParser::RelOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEqExp(CACTParser::EqExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEqOp(CACTParser::EqOpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLAndExp(CACTParser::LAndExpContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLOrExp(CACTParser::LOrExpContext *ctx) override {
    return visitChildren(ctx);
  }


};

