
    #include <vector>


// Generated from CACT.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  CACTLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, INT = 10, BOOL = 11, DOUBLE = 12, FLOAT = 13, VOID = 14, 
    CONST = 15, IF = 16, ELSE = 17, WHILE = 18, BREAK = 19, CONTINUE = 20, 
    RETURN = 21, TRUE = 22, FALSE = 23, ADD = 24, SUB = 25, MUL = 26, DIV = 27, 
    MOD = 28, NOT = 29, EQ = 30, NEQ = 31, GT = 32, LT = 33, GE = 34, LE = 35, 
    AND = 36, OR = 37, Ident = 38, IntConst = 39, FloatConst = 40, DoubleConst = 41, 
    WS = 42, LineComment = 43, BlockComment = 44
  };

  explicit CACTLexer(antlr4::CharStream *input);

  ~CACTLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

