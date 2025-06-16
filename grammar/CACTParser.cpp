
    #include <vector>


// Generated from CACT.g4 by ANTLR 4.13.1


#include "CACTVisitor.h"

#include "CACTParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct CACTParserStaticData final {
  CACTParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  CACTParserStaticData(const CACTParserStaticData&) = delete;
  CACTParserStaticData(CACTParserStaticData&&) = delete;
  CACTParserStaticData& operator=(const CACTParserStaticData&) = delete;
  CACTParserStaticData& operator=(CACTParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag cactParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
CACTParserStaticData *cactParserStaticData = nullptr;

void cactParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (cactParserStaticData != nullptr) {
    return;
  }
#else
  assert(cactParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<CACTParserStaticData>(
    std::vector<std::string>{
      "compUnit", "decl", "constDecl", "constDef", "varDecl", "varDef", 
      "type", "dims", "initVal", "funcDef", "paramList", "param", "block", 
      "blockItem", "stmt", "expr", "cond", "lVal", "primary", "unary", "argList", 
      "mulExpr", "addExpr", "relExpr", "eqExpr", "andExpr", "orExpr"
    },
    std::vector<std::string>{
      "", "','", "';'", "'='", "'['", "']'", "'{'", "'}'", "'('", "')'", 
      "'int'", "'bool'", "'double'", "'float'", "'void'", "'const'", "'if'", 
      "'else'", "'while'", "'break'", "'continue'", "'return'", "'true'", 
      "'false'", "'+'", "'-'", "'*'", "'/'", "'%'", "'!'", "'=='", "'!='", 
      "'>'", "'<'", "'>='", "'<='", "'&&'", "'||'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "INT", "BOOL", "DOUBLE", "FLOAT", 
      "VOID", "CONST", "IF", "ELSE", "WHILE", "BREAK", "CONTINUE", "RETURN", 
      "TRUE", "FALSE", "ADD", "SUB", "MUL", "DIV", "MOD", "NOT", "EQ", "NEQ", 
      "GT", "LT", "GE", "LE", "AND", "OR", "Ident", "IntConst", "FloatConst", 
      "DoubleConst", "WS", "LineComment", "BlockComment"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,44,308,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,1,0,1,0,4,0,57,8,
  	0,11,0,12,0,58,1,0,1,0,1,1,1,1,3,1,65,8,1,1,2,1,2,1,2,1,2,1,2,5,2,72,
  	8,2,10,2,12,2,75,9,2,1,2,1,2,1,3,1,3,3,3,81,8,3,1,3,1,3,1,3,1,4,1,4,1,
  	4,1,4,5,4,90,8,4,10,4,12,4,93,9,4,1,4,1,4,1,5,1,5,3,5,99,8,5,1,5,1,5,
  	3,5,103,8,5,1,6,1,6,1,6,1,6,1,6,3,6,110,8,6,1,7,1,7,1,7,1,7,1,7,1,7,5,
  	7,118,8,7,10,7,12,7,121,9,7,1,8,1,8,1,8,1,8,1,8,1,8,1,8,5,8,130,8,8,10,
  	8,12,8,133,9,8,3,8,135,8,8,1,8,3,8,138,8,8,1,9,1,9,1,9,1,9,3,9,144,8,
  	9,1,9,1,9,1,9,1,10,1,10,1,10,5,10,152,8,10,10,10,12,10,155,9,10,1,11,
  	1,11,1,11,1,11,1,11,3,11,162,8,11,3,11,164,8,11,1,12,1,12,5,12,168,8,
  	12,10,12,12,12,171,9,12,1,12,1,12,1,13,1,13,3,13,177,8,13,1,14,1,14,1,
  	14,1,14,1,14,1,14,3,14,185,8,14,1,14,1,14,1,14,1,14,3,14,191,8,14,1,14,
  	1,14,1,14,1,14,1,14,1,14,1,14,1,14,3,14,201,8,14,1,14,1,14,1,14,1,14,
  	1,14,1,14,1,14,1,14,1,14,1,14,3,14,213,8,14,1,15,1,15,1,16,1,16,1,17,
  	1,17,1,17,1,17,1,17,5,17,224,8,17,10,17,12,17,227,9,17,1,18,1,18,1,18,
  	1,18,1,18,1,18,1,18,1,18,1,18,1,18,3,18,239,8,18,1,19,1,19,1,19,1,19,
  	1,19,3,19,246,8,19,1,19,1,19,3,19,250,8,19,1,20,1,20,1,20,5,20,255,8,
  	20,10,20,12,20,258,9,20,1,21,1,21,1,21,5,21,263,8,21,10,21,12,21,266,
  	9,21,1,22,1,22,1,22,5,22,271,8,22,10,22,12,22,274,9,22,1,23,1,23,1,23,
  	5,23,279,8,23,10,23,12,23,282,9,23,1,24,1,24,1,24,5,24,287,8,24,10,24,
  	12,24,290,9,24,1,25,1,25,1,25,5,25,295,8,25,10,25,12,25,298,9,25,1,26,
  	1,26,1,26,5,26,303,8,26,10,26,12,26,306,9,26,1,26,0,0,27,0,2,4,6,8,10,
  	12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,52,0,5,2,
  	0,24,25,29,29,1,0,26,28,1,0,24,25,1,0,32,35,1,0,30,31,331,0,56,1,0,0,
  	0,2,64,1,0,0,0,4,66,1,0,0,0,6,78,1,0,0,0,8,85,1,0,0,0,10,96,1,0,0,0,12,
  	109,1,0,0,0,14,111,1,0,0,0,16,137,1,0,0,0,18,139,1,0,0,0,20,148,1,0,0,
  	0,22,156,1,0,0,0,24,165,1,0,0,0,26,176,1,0,0,0,28,212,1,0,0,0,30,214,
  	1,0,0,0,32,216,1,0,0,0,34,218,1,0,0,0,36,238,1,0,0,0,38,249,1,0,0,0,40,
  	251,1,0,0,0,42,259,1,0,0,0,44,267,1,0,0,0,46,275,1,0,0,0,48,283,1,0,0,
  	0,50,291,1,0,0,0,52,299,1,0,0,0,54,57,3,2,1,0,55,57,3,18,9,0,56,54,1,
  	0,0,0,56,55,1,0,0,0,57,58,1,0,0,0,58,56,1,0,0,0,58,59,1,0,0,0,59,60,1,
  	0,0,0,60,61,5,0,0,1,61,1,1,0,0,0,62,65,3,4,2,0,63,65,3,8,4,0,64,62,1,
  	0,0,0,64,63,1,0,0,0,65,3,1,0,0,0,66,67,5,15,0,0,67,68,3,12,6,0,68,73,
  	3,6,3,0,69,70,5,1,0,0,70,72,3,6,3,0,71,69,1,0,0,0,72,75,1,0,0,0,73,71,
  	1,0,0,0,73,74,1,0,0,0,74,76,1,0,0,0,75,73,1,0,0,0,76,77,5,2,0,0,77,5,
  	1,0,0,0,78,80,5,38,0,0,79,81,3,14,7,0,80,79,1,0,0,0,80,81,1,0,0,0,81,
  	82,1,0,0,0,82,83,5,3,0,0,83,84,3,16,8,0,84,7,1,0,0,0,85,86,3,12,6,0,86,
  	91,3,10,5,0,87,88,5,1,0,0,88,90,3,10,5,0,89,87,1,0,0,0,90,93,1,0,0,0,
  	91,89,1,0,0,0,91,92,1,0,0,0,92,94,1,0,0,0,93,91,1,0,0,0,94,95,5,2,0,0,
  	95,9,1,0,0,0,96,98,5,38,0,0,97,99,3,14,7,0,98,97,1,0,0,0,98,99,1,0,0,
  	0,99,102,1,0,0,0,100,101,5,3,0,0,101,103,3,16,8,0,102,100,1,0,0,0,102,
  	103,1,0,0,0,103,11,1,0,0,0,104,110,5,14,0,0,105,110,5,10,0,0,106,110,
  	5,13,0,0,107,110,5,12,0,0,108,110,5,11,0,0,109,104,1,0,0,0,109,105,1,
  	0,0,0,109,106,1,0,0,0,109,107,1,0,0,0,109,108,1,0,0,0,110,13,1,0,0,0,
  	111,112,5,4,0,0,112,113,5,39,0,0,113,119,5,5,0,0,114,115,5,4,0,0,115,
  	116,5,39,0,0,116,118,5,5,0,0,117,114,1,0,0,0,118,121,1,0,0,0,119,117,
  	1,0,0,0,119,120,1,0,0,0,120,15,1,0,0,0,121,119,1,0,0,0,122,138,5,39,0,
  	0,123,138,5,40,0,0,124,138,5,41,0,0,125,134,5,6,0,0,126,131,3,16,8,0,
  	127,128,5,1,0,0,128,130,3,16,8,0,129,127,1,0,0,0,130,133,1,0,0,0,131,
  	129,1,0,0,0,131,132,1,0,0,0,132,135,1,0,0,0,133,131,1,0,0,0,134,126,1,
  	0,0,0,134,135,1,0,0,0,135,136,1,0,0,0,136,138,5,7,0,0,137,122,1,0,0,0,
  	137,123,1,0,0,0,137,124,1,0,0,0,137,125,1,0,0,0,138,17,1,0,0,0,139,140,
  	3,12,6,0,140,141,5,38,0,0,141,143,5,8,0,0,142,144,3,20,10,0,143,142,1,
  	0,0,0,143,144,1,0,0,0,144,145,1,0,0,0,145,146,5,9,0,0,146,147,3,24,12,
  	0,147,19,1,0,0,0,148,153,3,22,11,0,149,150,5,1,0,0,150,152,3,22,11,0,
  	151,149,1,0,0,0,152,155,1,0,0,0,153,151,1,0,0,0,153,154,1,0,0,0,154,21,
  	1,0,0,0,155,153,1,0,0,0,156,157,3,12,6,0,157,163,5,38,0,0,158,159,5,4,
  	0,0,159,161,5,5,0,0,160,162,3,14,7,0,161,160,1,0,0,0,161,162,1,0,0,0,
  	162,164,1,0,0,0,163,158,1,0,0,0,163,164,1,0,0,0,164,23,1,0,0,0,165,169,
  	5,6,0,0,166,168,3,26,13,0,167,166,1,0,0,0,168,171,1,0,0,0,169,167,1,0,
  	0,0,169,170,1,0,0,0,170,172,1,0,0,0,171,169,1,0,0,0,172,173,5,7,0,0,173,
  	25,1,0,0,0,174,177,3,2,1,0,175,177,3,28,14,0,176,174,1,0,0,0,176,175,
  	1,0,0,0,177,27,1,0,0,0,178,179,3,34,17,0,179,180,5,3,0,0,180,181,3,30,
  	15,0,181,182,5,2,0,0,182,213,1,0,0,0,183,185,3,30,15,0,184,183,1,0,0,
  	0,184,185,1,0,0,0,185,186,1,0,0,0,186,213,5,2,0,0,187,213,3,24,12,0,188,
  	190,5,21,0,0,189,191,3,30,15,0,190,189,1,0,0,0,190,191,1,0,0,0,191,192,
  	1,0,0,0,192,213,5,2,0,0,193,194,5,16,0,0,194,195,5,8,0,0,195,196,3,32,
  	16,0,196,197,5,9,0,0,197,200,3,28,14,0,198,199,5,17,0,0,199,201,3,28,
  	14,0,200,198,1,0,0,0,200,201,1,0,0,0,201,213,1,0,0,0,202,203,5,18,0,0,
  	203,204,5,8,0,0,204,205,3,32,16,0,205,206,5,9,0,0,206,207,3,28,14,0,207,
  	213,1,0,0,0,208,209,5,19,0,0,209,213,5,2,0,0,210,211,5,20,0,0,211,213,
  	5,2,0,0,212,178,1,0,0,0,212,184,1,0,0,0,212,187,1,0,0,0,212,188,1,0,0,
  	0,212,193,1,0,0,0,212,202,1,0,0,0,212,208,1,0,0,0,212,210,1,0,0,0,213,
  	29,1,0,0,0,214,215,3,52,26,0,215,31,1,0,0,0,216,217,3,52,26,0,217,33,
  	1,0,0,0,218,225,5,38,0,0,219,220,5,4,0,0,220,221,3,30,15,0,221,222,5,
  	5,0,0,222,224,1,0,0,0,223,219,1,0,0,0,224,227,1,0,0,0,225,223,1,0,0,0,
  	225,226,1,0,0,0,226,35,1,0,0,0,227,225,1,0,0,0,228,229,5,8,0,0,229,230,
  	3,30,15,0,230,231,5,9,0,0,231,239,1,0,0,0,232,239,3,34,17,0,233,239,5,
  	39,0,0,234,239,5,41,0,0,235,239,5,40,0,0,236,239,5,22,0,0,237,239,5,23,
  	0,0,238,228,1,0,0,0,238,232,1,0,0,0,238,233,1,0,0,0,238,234,1,0,0,0,238,
  	235,1,0,0,0,238,236,1,0,0,0,238,237,1,0,0,0,239,37,1,0,0,0,240,241,7,
  	0,0,0,241,250,3,38,19,0,242,243,5,38,0,0,243,245,5,8,0,0,244,246,3,40,
  	20,0,245,244,1,0,0,0,245,246,1,0,0,0,246,247,1,0,0,0,247,250,5,9,0,0,
  	248,250,3,36,18,0,249,240,1,0,0,0,249,242,1,0,0,0,249,248,1,0,0,0,250,
  	39,1,0,0,0,251,256,3,30,15,0,252,253,5,1,0,0,253,255,3,30,15,0,254,252,
  	1,0,0,0,255,258,1,0,0,0,256,254,1,0,0,0,256,257,1,0,0,0,257,41,1,0,0,
  	0,258,256,1,0,0,0,259,264,3,38,19,0,260,261,7,1,0,0,261,263,3,38,19,0,
  	262,260,1,0,0,0,263,266,1,0,0,0,264,262,1,0,0,0,264,265,1,0,0,0,265,43,
  	1,0,0,0,266,264,1,0,0,0,267,272,3,42,21,0,268,269,7,2,0,0,269,271,3,42,
  	21,0,270,268,1,0,0,0,271,274,1,0,0,0,272,270,1,0,0,0,272,273,1,0,0,0,
  	273,45,1,0,0,0,274,272,1,0,0,0,275,280,3,44,22,0,276,277,7,3,0,0,277,
  	279,3,44,22,0,278,276,1,0,0,0,279,282,1,0,0,0,280,278,1,0,0,0,280,281,
  	1,0,0,0,281,47,1,0,0,0,282,280,1,0,0,0,283,288,3,46,23,0,284,285,7,4,
  	0,0,285,287,3,46,23,0,286,284,1,0,0,0,287,290,1,0,0,0,288,286,1,0,0,0,
  	288,289,1,0,0,0,289,49,1,0,0,0,290,288,1,0,0,0,291,296,3,48,24,0,292,
  	293,5,36,0,0,293,295,3,48,24,0,294,292,1,0,0,0,295,298,1,0,0,0,296,294,
  	1,0,0,0,296,297,1,0,0,0,297,51,1,0,0,0,298,296,1,0,0,0,299,304,3,50,25,
  	0,300,301,5,37,0,0,301,303,3,50,25,0,302,300,1,0,0,0,303,306,1,0,0,0,
  	304,302,1,0,0,0,304,305,1,0,0,0,305,53,1,0,0,0,306,304,1,0,0,0,34,56,
  	58,64,73,80,91,98,102,109,119,131,134,137,143,153,161,163,169,176,184,
  	190,200,212,225,238,245,249,256,264,272,280,288,296,304
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  cactParserStaticData = staticData.release();
}

}

CACTParser::CACTParser(TokenStream *input) : CACTParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

CACTParser::CACTParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  CACTParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *cactParserStaticData->atn, cactParserStaticData->decisionToDFA, cactParserStaticData->sharedContextCache, options);
}

CACTParser::~CACTParser() {
  delete _interpreter;
}

const atn::ATN& CACTParser::getATN() const {
  return *cactParserStaticData->atn;
}

std::string CACTParser::getGrammarFileName() const {
  return "CACT.g4";
}

const std::vector<std::string>& CACTParser::getRuleNames() const {
  return cactParserStaticData->ruleNames;
}

const dfa::Vocabulary& CACTParser::getVocabulary() const {
  return cactParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView CACTParser::getSerializedATN() const {
  return cactParserStaticData->serializedATN;
}


//----------------- CompUnitContext ------------------------------------------------------------------

CACTParser::CompUnitContext::CompUnitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CACTParser::CompUnitContext::EOF() {
  return getToken(CACTParser::EOF, 0);
}

std::vector<CACTParser::DeclContext *> CACTParser::CompUnitContext::decl() {
  return getRuleContexts<CACTParser::DeclContext>();
}

CACTParser::DeclContext* CACTParser::CompUnitContext::decl(size_t i) {
  return getRuleContext<CACTParser::DeclContext>(i);
}

std::vector<CACTParser::FuncDefContext *> CACTParser::CompUnitContext::funcDef() {
  return getRuleContexts<CACTParser::FuncDefContext>();
}

CACTParser::FuncDefContext* CACTParser::CompUnitContext::funcDef(size_t i) {
  return getRuleContext<CACTParser::FuncDefContext>(i);
}


size_t CACTParser::CompUnitContext::getRuleIndex() const {
  return CACTParser::RuleCompUnit;
}


std::any CACTParser::CompUnitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitCompUnit(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::CompUnitContext* CACTParser::compUnit() {
  CompUnitContext *_localctx = _tracker.createInstance<CompUnitContext>(_ctx, getState());
  enterRule(_localctx, 0, CACTParser::RuleCompUnit);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(56); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(56);
      _errHandler->sync(this);
      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
      case 1: {
        setState(54);
        decl();
        break;
      }

      case 2: {
        setState(55);
        funcDef();
        break;
      }

      default:
        break;
      }
      setState(58); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 64512) != 0));
    setState(60);
    match(CACTParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclContext ------------------------------------------------------------------

CACTParser::DeclContext::DeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CACTParser::ConstDeclContext* CACTParser::DeclContext::constDecl() {
  return getRuleContext<CACTParser::ConstDeclContext>(0);
}

CACTParser::VarDeclContext* CACTParser::DeclContext::varDecl() {
  return getRuleContext<CACTParser::VarDeclContext>(0);
}


size_t CACTParser::DeclContext::getRuleIndex() const {
  return CACTParser::RuleDecl;
}


std::any CACTParser::DeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitDecl(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::DeclContext* CACTParser::decl() {
  DeclContext *_localctx = _tracker.createInstance<DeclContext>(_ctx, getState());
  enterRule(_localctx, 2, CACTParser::RuleDecl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(64);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CACTParser::CONST: {
        enterOuterAlt(_localctx, 1);
        setState(62);
        constDecl();
        break;
      }

      case CACTParser::INT:
      case CACTParser::BOOL:
      case CACTParser::DOUBLE:
      case CACTParser::FLOAT:
      case CACTParser::VOID: {
        enterOuterAlt(_localctx, 2);
        setState(63);
        varDecl();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstDeclContext ------------------------------------------------------------------

CACTParser::ConstDeclContext::ConstDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CACTParser::ConstDeclContext::CONST() {
  return getToken(CACTParser::CONST, 0);
}

CACTParser::TypeContext* CACTParser::ConstDeclContext::type() {
  return getRuleContext<CACTParser::TypeContext>(0);
}

std::vector<CACTParser::ConstDefContext *> CACTParser::ConstDeclContext::constDef() {
  return getRuleContexts<CACTParser::ConstDefContext>();
}

CACTParser::ConstDefContext* CACTParser::ConstDeclContext::constDef(size_t i) {
  return getRuleContext<CACTParser::ConstDefContext>(i);
}


size_t CACTParser::ConstDeclContext::getRuleIndex() const {
  return CACTParser::RuleConstDecl;
}


std::any CACTParser::ConstDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitConstDecl(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::ConstDeclContext* CACTParser::constDecl() {
  ConstDeclContext *_localctx = _tracker.createInstance<ConstDeclContext>(_ctx, getState());
  enterRule(_localctx, 4, CACTParser::RuleConstDecl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(66);
    match(CACTParser::CONST);
    setState(67);
    type();
    setState(68);
    constDef();
    setState(73);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CACTParser::T__0) {
      setState(69);
      match(CACTParser::T__0);
      setState(70);
      constDef();
      setState(75);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(76);
    match(CACTParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstDefContext ------------------------------------------------------------------

CACTParser::ConstDefContext::ConstDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CACTParser::ConstDefContext::Ident() {
  return getToken(CACTParser::Ident, 0);
}

CACTParser::InitValContext* CACTParser::ConstDefContext::initVal() {
  return getRuleContext<CACTParser::InitValContext>(0);
}

CACTParser::DimsContext* CACTParser::ConstDefContext::dims() {
  return getRuleContext<CACTParser::DimsContext>(0);
}


size_t CACTParser::ConstDefContext::getRuleIndex() const {
  return CACTParser::RuleConstDef;
}


std::any CACTParser::ConstDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitConstDef(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::ConstDefContext* CACTParser::constDef() {
  ConstDefContext *_localctx = _tracker.createInstance<ConstDefContext>(_ctx, getState());
  enterRule(_localctx, 6, CACTParser::RuleConstDef);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(78);
    match(CACTParser::Ident);
    setState(80);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CACTParser::T__3) {
      setState(79);
      dims();
    }
    setState(82);
    match(CACTParser::T__2);
    setState(83);
    initVal();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarDeclContext ------------------------------------------------------------------

CACTParser::VarDeclContext::VarDeclContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CACTParser::TypeContext* CACTParser::VarDeclContext::type() {
  return getRuleContext<CACTParser::TypeContext>(0);
}

std::vector<CACTParser::VarDefContext *> CACTParser::VarDeclContext::varDef() {
  return getRuleContexts<CACTParser::VarDefContext>();
}

CACTParser::VarDefContext* CACTParser::VarDeclContext::varDef(size_t i) {
  return getRuleContext<CACTParser::VarDefContext>(i);
}


size_t CACTParser::VarDeclContext::getRuleIndex() const {
  return CACTParser::RuleVarDecl;
}


std::any CACTParser::VarDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitVarDecl(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::VarDeclContext* CACTParser::varDecl() {
  VarDeclContext *_localctx = _tracker.createInstance<VarDeclContext>(_ctx, getState());
  enterRule(_localctx, 8, CACTParser::RuleVarDecl);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(85);
    type();
    setState(86);
    varDef();
    setState(91);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CACTParser::T__0) {
      setState(87);
      match(CACTParser::T__0);
      setState(88);
      varDef();
      setState(93);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(94);
    match(CACTParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarDefContext ------------------------------------------------------------------

CACTParser::VarDefContext::VarDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CACTParser::VarDefContext::Ident() {
  return getToken(CACTParser::Ident, 0);
}

CACTParser::DimsContext* CACTParser::VarDefContext::dims() {
  return getRuleContext<CACTParser::DimsContext>(0);
}

CACTParser::InitValContext* CACTParser::VarDefContext::initVal() {
  return getRuleContext<CACTParser::InitValContext>(0);
}


size_t CACTParser::VarDefContext::getRuleIndex() const {
  return CACTParser::RuleVarDef;
}


std::any CACTParser::VarDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitVarDef(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::VarDefContext* CACTParser::varDef() {
  VarDefContext *_localctx = _tracker.createInstance<VarDefContext>(_ctx, getState());
  enterRule(_localctx, 10, CACTParser::RuleVarDef);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(96);
    match(CACTParser::Ident);
    setState(98);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CACTParser::T__3) {
      setState(97);
      dims();
    }
    setState(102);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CACTParser::T__2) {
      setState(100);
      match(CACTParser::T__2);
      setState(101);
      initVal();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

CACTParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CACTParser::TypeContext::getRuleIndex() const {
  return CACTParser::RuleType;
}

void CACTParser::TypeContext::copyFrom(TypeContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- VoidTypeContext ------------------------------------------------------------------

tree::TerminalNode* CACTParser::VoidTypeContext::VOID() {
  return getToken(CACTParser::VOID, 0);
}

CACTParser::VoidTypeContext::VoidTypeContext(TypeContext *ctx) { copyFrom(ctx); }


std::any CACTParser::VoidTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitVoidType(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BoolTypeContext ------------------------------------------------------------------

tree::TerminalNode* CACTParser::BoolTypeContext::BOOL() {
  return getToken(CACTParser::BOOL, 0);
}

CACTParser::BoolTypeContext::BoolTypeContext(TypeContext *ctx) { copyFrom(ctx); }


std::any CACTParser::BoolTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitBoolType(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DoubleTypeContext ------------------------------------------------------------------

tree::TerminalNode* CACTParser::DoubleTypeContext::DOUBLE() {
  return getToken(CACTParser::DOUBLE, 0);
}

CACTParser::DoubleTypeContext::DoubleTypeContext(TypeContext *ctx) { copyFrom(ctx); }


std::any CACTParser::DoubleTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitDoubleType(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IntTypeContext ------------------------------------------------------------------

tree::TerminalNode* CACTParser::IntTypeContext::INT() {
  return getToken(CACTParser::INT, 0);
}

CACTParser::IntTypeContext::IntTypeContext(TypeContext *ctx) { copyFrom(ctx); }


std::any CACTParser::IntTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitIntType(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FloatTypeContext ------------------------------------------------------------------

tree::TerminalNode* CACTParser::FloatTypeContext::FLOAT() {
  return getToken(CACTParser::FLOAT, 0);
}

CACTParser::FloatTypeContext::FloatTypeContext(TypeContext *ctx) { copyFrom(ctx); }


std::any CACTParser::FloatTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitFloatType(this);
  else
    return visitor->visitChildren(this);
}
CACTParser::TypeContext* CACTParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 12, CACTParser::RuleType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(109);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CACTParser::VOID: {
        _localctx = _tracker.createInstance<CACTParser::VoidTypeContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(104);
        match(CACTParser::VOID);
        break;
      }

      case CACTParser::INT: {
        _localctx = _tracker.createInstance<CACTParser::IntTypeContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(105);
        match(CACTParser::INT);
        break;
      }

      case CACTParser::FLOAT: {
        _localctx = _tracker.createInstance<CACTParser::FloatTypeContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(106);
        match(CACTParser::FLOAT);
        break;
      }

      case CACTParser::DOUBLE: {
        _localctx = _tracker.createInstance<CACTParser::DoubleTypeContext>(_localctx);
        enterOuterAlt(_localctx, 4);
        setState(107);
        match(CACTParser::DOUBLE);
        break;
      }

      case CACTParser::BOOL: {
        _localctx = _tracker.createInstance<CACTParser::BoolTypeContext>(_localctx);
        enterOuterAlt(_localctx, 5);
        setState(108);
        match(CACTParser::BOOL);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DimsContext ------------------------------------------------------------------

CACTParser::DimsContext::DimsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> CACTParser::DimsContext::IntConst() {
  return getTokens(CACTParser::IntConst);
}

tree::TerminalNode* CACTParser::DimsContext::IntConst(size_t i) {
  return getToken(CACTParser::IntConst, i);
}


size_t CACTParser::DimsContext::getRuleIndex() const {
  return CACTParser::RuleDims;
}


std::any CACTParser::DimsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitDims(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::DimsContext* CACTParser::dims() {
  DimsContext *_localctx = _tracker.createInstance<DimsContext>(_ctx, getState());
  enterRule(_localctx, 14, CACTParser::RuleDims);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(111);
    match(CACTParser::T__3);
    setState(112);
    match(CACTParser::IntConst);
    setState(113);
    match(CACTParser::T__4);
    setState(119);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CACTParser::T__3) {
      setState(114);
      match(CACTParser::T__3);
      setState(115);
      match(CACTParser::IntConst);
      setState(116);
      match(CACTParser::T__4);
      setState(121);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitValContext ------------------------------------------------------------------

CACTParser::InitValContext::InitValContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CACTParser::InitValContext::IntConst() {
  return getToken(CACTParser::IntConst, 0);
}

tree::TerminalNode* CACTParser::InitValContext::FloatConst() {
  return getToken(CACTParser::FloatConst, 0);
}

tree::TerminalNode* CACTParser::InitValContext::DoubleConst() {
  return getToken(CACTParser::DoubleConst, 0);
}

std::vector<CACTParser::InitValContext *> CACTParser::InitValContext::initVal() {
  return getRuleContexts<CACTParser::InitValContext>();
}

CACTParser::InitValContext* CACTParser::InitValContext::initVal(size_t i) {
  return getRuleContext<CACTParser::InitValContext>(i);
}


size_t CACTParser::InitValContext::getRuleIndex() const {
  return CACTParser::RuleInitVal;
}


std::any CACTParser::InitValContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitInitVal(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::InitValContext* CACTParser::initVal() {
  InitValContext *_localctx = _tracker.createInstance<InitValContext>(_ctx, getState());
  enterRule(_localctx, 16, CACTParser::RuleInitVal);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(137);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CACTParser::IntConst: {
        enterOuterAlt(_localctx, 1);
        setState(122);
        match(CACTParser::IntConst);
        break;
      }

      case CACTParser::FloatConst: {
        enterOuterAlt(_localctx, 2);
        setState(123);
        match(CACTParser::FloatConst);
        break;
      }

      case CACTParser::DoubleConst: {
        enterOuterAlt(_localctx, 3);
        setState(124);
        match(CACTParser::DoubleConst);
        break;
      }

      case CACTParser::T__5: {
        enterOuterAlt(_localctx, 4);
        setState(125);
        match(CACTParser::T__5);
        setState(134);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 3848290697280) != 0)) {
          setState(126);
          initVal();
          setState(131);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == CACTParser::T__0) {
            setState(127);
            match(CACTParser::T__0);
            setState(128);
            initVal();
            setState(133);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
        }
        setState(136);
        match(CACTParser::T__6);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncDefContext ------------------------------------------------------------------

CACTParser::FuncDefContext::FuncDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CACTParser::TypeContext* CACTParser::FuncDefContext::type() {
  return getRuleContext<CACTParser::TypeContext>(0);
}

tree::TerminalNode* CACTParser::FuncDefContext::Ident() {
  return getToken(CACTParser::Ident, 0);
}

CACTParser::BlockContext* CACTParser::FuncDefContext::block() {
  return getRuleContext<CACTParser::BlockContext>(0);
}

CACTParser::ParamListContext* CACTParser::FuncDefContext::paramList() {
  return getRuleContext<CACTParser::ParamListContext>(0);
}


size_t CACTParser::FuncDefContext::getRuleIndex() const {
  return CACTParser::RuleFuncDef;
}


std::any CACTParser::FuncDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitFuncDef(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::FuncDefContext* CACTParser::funcDef() {
  FuncDefContext *_localctx = _tracker.createInstance<FuncDefContext>(_ctx, getState());
  enterRule(_localctx, 18, CACTParser::RuleFuncDef);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(139);
    type();
    setState(140);
    match(CACTParser::Ident);
    setState(141);
    match(CACTParser::T__7);
    setState(143);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 31744) != 0)) {
      setState(142);
      paramList();
    }
    setState(145);
    match(CACTParser::T__8);
    setState(146);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamListContext ------------------------------------------------------------------

CACTParser::ParamListContext::ParamListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CACTParser::ParamContext *> CACTParser::ParamListContext::param() {
  return getRuleContexts<CACTParser::ParamContext>();
}

CACTParser::ParamContext* CACTParser::ParamListContext::param(size_t i) {
  return getRuleContext<CACTParser::ParamContext>(i);
}


size_t CACTParser::ParamListContext::getRuleIndex() const {
  return CACTParser::RuleParamList;
}


std::any CACTParser::ParamListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitParamList(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::ParamListContext* CACTParser::paramList() {
  ParamListContext *_localctx = _tracker.createInstance<ParamListContext>(_ctx, getState());
  enterRule(_localctx, 20, CACTParser::RuleParamList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(148);
    param();
    setState(153);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CACTParser::T__0) {
      setState(149);
      match(CACTParser::T__0);
      setState(150);
      param();
      setState(155);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamContext ------------------------------------------------------------------

CACTParser::ParamContext::ParamContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CACTParser::TypeContext* CACTParser::ParamContext::type() {
  return getRuleContext<CACTParser::TypeContext>(0);
}

tree::TerminalNode* CACTParser::ParamContext::Ident() {
  return getToken(CACTParser::Ident, 0);
}

CACTParser::DimsContext* CACTParser::ParamContext::dims() {
  return getRuleContext<CACTParser::DimsContext>(0);
}


size_t CACTParser::ParamContext::getRuleIndex() const {
  return CACTParser::RuleParam;
}


std::any CACTParser::ParamContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitParam(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::ParamContext* CACTParser::param() {
  ParamContext *_localctx = _tracker.createInstance<ParamContext>(_ctx, getState());
  enterRule(_localctx, 22, CACTParser::RuleParam);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(156);
    type();
    setState(157);
    match(CACTParser::Ident);
    setState(163);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == CACTParser::T__3) {
      setState(158);
      match(CACTParser::T__3);
      setState(159);
      match(CACTParser::T__4);
      setState(161);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == CACTParser::T__3) {
        setState(160);
        dims();
      }
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

CACTParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CACTParser::BlockItemContext *> CACTParser::BlockContext::blockItem() {
  return getRuleContexts<CACTParser::BlockItemContext>();
}

CACTParser::BlockItemContext* CACTParser::BlockContext::blockItem(size_t i) {
  return getRuleContext<CACTParser::BlockItemContext>(i);
}


size_t CACTParser::BlockContext::getRuleIndex() const {
  return CACTParser::RuleBlock;
}


std::any CACTParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::BlockContext* CACTParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 24, CACTParser::RuleBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(165);
    match(CACTParser::T__5);
    setState(169);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 4123772452164) != 0)) {
      setState(166);
      blockItem();
      setState(171);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(172);
    match(CACTParser::T__6);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockItemContext ------------------------------------------------------------------

CACTParser::BlockItemContext::BlockItemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CACTParser::DeclContext* CACTParser::BlockItemContext::decl() {
  return getRuleContext<CACTParser::DeclContext>(0);
}

CACTParser::StmtContext* CACTParser::BlockItemContext::stmt() {
  return getRuleContext<CACTParser::StmtContext>(0);
}


size_t CACTParser::BlockItemContext::getRuleIndex() const {
  return CACTParser::RuleBlockItem;
}


std::any CACTParser::BlockItemContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitBlockItem(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::BlockItemContext* CACTParser::blockItem() {
  BlockItemContext *_localctx = _tracker.createInstance<BlockItemContext>(_ctx, getState());
  enterRule(_localctx, 26, CACTParser::RuleBlockItem);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(176);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CACTParser::INT:
      case CACTParser::BOOL:
      case CACTParser::DOUBLE:
      case CACTParser::FLOAT:
      case CACTParser::VOID:
      case CACTParser::CONST: {
        enterOuterAlt(_localctx, 1);
        setState(174);
        decl();
        break;
      }

      case CACTParser::T__1:
      case CACTParser::T__5:
      case CACTParser::T__7:
      case CACTParser::IF:
      case CACTParser::WHILE:
      case CACTParser::BREAK:
      case CACTParser::CONTINUE:
      case CACTParser::RETURN:
      case CACTParser::TRUE:
      case CACTParser::FALSE:
      case CACTParser::ADD:
      case CACTParser::SUB:
      case CACTParser::NOT:
      case CACTParser::Ident:
      case CACTParser::IntConst:
      case CACTParser::FloatConst:
      case CACTParser::DoubleConst: {
        enterOuterAlt(_localctx, 2);
        setState(175);
        stmt();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StmtContext ------------------------------------------------------------------

CACTParser::StmtContext::StmtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CACTParser::StmtContext::getRuleIndex() const {
  return CACTParser::RuleStmt;
}

void CACTParser::StmtContext::copyFrom(StmtContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ContinueStmtContext ------------------------------------------------------------------

tree::TerminalNode* CACTParser::ContinueStmtContext::CONTINUE() {
  return getToken(CACTParser::CONTINUE, 0);
}

CACTParser::ContinueStmtContext::ContinueStmtContext(StmtContext *ctx) { copyFrom(ctx); }


std::any CACTParser::ContinueStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitContinueStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IfStmtContext ------------------------------------------------------------------

tree::TerminalNode* CACTParser::IfStmtContext::IF() {
  return getToken(CACTParser::IF, 0);
}

CACTParser::CondContext* CACTParser::IfStmtContext::cond() {
  return getRuleContext<CACTParser::CondContext>(0);
}

std::vector<CACTParser::StmtContext *> CACTParser::IfStmtContext::stmt() {
  return getRuleContexts<CACTParser::StmtContext>();
}

CACTParser::StmtContext* CACTParser::IfStmtContext::stmt(size_t i) {
  return getRuleContext<CACTParser::StmtContext>(i);
}

tree::TerminalNode* CACTParser::IfStmtContext::ELSE() {
  return getToken(CACTParser::ELSE, 0);
}

CACTParser::IfStmtContext::IfStmtContext(StmtContext *ctx) { copyFrom(ctx); }


std::any CACTParser::IfStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitIfStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprStmtContext ------------------------------------------------------------------

CACTParser::ExprContext* CACTParser::ExprStmtContext::expr() {
  return getRuleContext<CACTParser::ExprContext>(0);
}

CACTParser::ExprStmtContext::ExprStmtContext(StmtContext *ctx) { copyFrom(ctx); }


std::any CACTParser::ExprStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitExprStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- WhileStmtContext ------------------------------------------------------------------

tree::TerminalNode* CACTParser::WhileStmtContext::WHILE() {
  return getToken(CACTParser::WHILE, 0);
}

CACTParser::CondContext* CACTParser::WhileStmtContext::cond() {
  return getRuleContext<CACTParser::CondContext>(0);
}

CACTParser::StmtContext* CACTParser::WhileStmtContext::stmt() {
  return getRuleContext<CACTParser::StmtContext>(0);
}

CACTParser::WhileStmtContext::WhileStmtContext(StmtContext *ctx) { copyFrom(ctx); }


std::any CACTParser::WhileStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitWhileStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BreakStmtContext ------------------------------------------------------------------

tree::TerminalNode* CACTParser::BreakStmtContext::BREAK() {
  return getToken(CACTParser::BREAK, 0);
}

CACTParser::BreakStmtContext::BreakStmtContext(StmtContext *ctx) { copyFrom(ctx); }


std::any CACTParser::BreakStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitBreakStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- BlockStmtContext ------------------------------------------------------------------

CACTParser::BlockContext* CACTParser::BlockStmtContext::block() {
  return getRuleContext<CACTParser::BlockContext>(0);
}

CACTParser::BlockStmtContext::BlockStmtContext(StmtContext *ctx) { copyFrom(ctx); }


std::any CACTParser::BlockStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitBlockStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AssignContext ------------------------------------------------------------------

CACTParser::LValContext* CACTParser::AssignContext::lVal() {
  return getRuleContext<CACTParser::LValContext>(0);
}

CACTParser::ExprContext* CACTParser::AssignContext::expr() {
  return getRuleContext<CACTParser::ExprContext>(0);
}

CACTParser::AssignContext::AssignContext(StmtContext *ctx) { copyFrom(ctx); }


std::any CACTParser::AssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitAssign(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ReturnStmtContext ------------------------------------------------------------------

tree::TerminalNode* CACTParser::ReturnStmtContext::RETURN() {
  return getToken(CACTParser::RETURN, 0);
}

CACTParser::ExprContext* CACTParser::ReturnStmtContext::expr() {
  return getRuleContext<CACTParser::ExprContext>(0);
}

CACTParser::ReturnStmtContext::ReturnStmtContext(StmtContext *ctx) { copyFrom(ctx); }


std::any CACTParser::ReturnStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitReturnStmt(this);
  else
    return visitor->visitChildren(this);
}
CACTParser::StmtContext* CACTParser::stmt() {
  StmtContext *_localctx = _tracker.createInstance<StmtContext>(_ctx, getState());
  enterRule(_localctx, 28, CACTParser::RuleStmt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(212);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<CACTParser::AssignContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(178);
      lVal();
      setState(179);
      match(CACTParser::T__2);
      setState(180);
      expr();
      setState(181);
      match(CACTParser::T__1);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<CACTParser::ExprStmtContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(184);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 4123768389888) != 0)) {
        setState(183);
        expr();
      }
      setState(186);
      match(CACTParser::T__1);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<CACTParser::BlockStmtContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(187);
      block();
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<CACTParser::ReturnStmtContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(188);
      match(CACTParser::RETURN);
      setState(190);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 4123768389888) != 0)) {
        setState(189);
        expr();
      }
      setState(192);
      match(CACTParser::T__1);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<CACTParser::IfStmtContext>(_localctx);
      enterOuterAlt(_localctx, 5);
      setState(193);
      match(CACTParser::IF);
      setState(194);
      match(CACTParser::T__7);
      setState(195);
      cond();
      setState(196);
      match(CACTParser::T__8);
      setState(197);
      stmt();
      setState(200);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
      case 1: {
        setState(198);
        match(CACTParser::ELSE);
        setState(199);
        stmt();
        break;
      }

      default:
        break;
      }
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<CACTParser::WhileStmtContext>(_localctx);
      enterOuterAlt(_localctx, 6);
      setState(202);
      match(CACTParser::WHILE);
      setState(203);
      match(CACTParser::T__7);
      setState(204);
      cond();
      setState(205);
      match(CACTParser::T__8);
      setState(206);
      stmt();
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<CACTParser::BreakStmtContext>(_localctx);
      enterOuterAlt(_localctx, 7);
      setState(208);
      match(CACTParser::BREAK);
      setState(209);
      match(CACTParser::T__1);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<CACTParser::ContinueStmtContext>(_localctx);
      enterOuterAlt(_localctx, 8);
      setState(210);
      match(CACTParser::CONTINUE);
      setState(211);
      match(CACTParser::T__1);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

CACTParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CACTParser::OrExprContext* CACTParser::ExprContext::orExpr() {
  return getRuleContext<CACTParser::OrExprContext>(0);
}


size_t CACTParser::ExprContext::getRuleIndex() const {
  return CACTParser::RuleExpr;
}


std::any CACTParser::ExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitExpr(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::ExprContext* CACTParser::expr() {
  ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, getState());
  enterRule(_localctx, 30, CACTParser::RuleExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(214);
    orExpr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CondContext ------------------------------------------------------------------

CACTParser::CondContext::CondContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CACTParser::OrExprContext* CACTParser::CondContext::orExpr() {
  return getRuleContext<CACTParser::OrExprContext>(0);
}


size_t CACTParser::CondContext::getRuleIndex() const {
  return CACTParser::RuleCond;
}


std::any CACTParser::CondContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitCond(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::CondContext* CACTParser::cond() {
  CondContext *_localctx = _tracker.createInstance<CondContext>(_ctx, getState());
  enterRule(_localctx, 32, CACTParser::RuleCond);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(216);
    orExpr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LValContext ------------------------------------------------------------------

CACTParser::LValContext::LValContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* CACTParser::LValContext::Ident() {
  return getToken(CACTParser::Ident, 0);
}

std::vector<CACTParser::ExprContext *> CACTParser::LValContext::expr() {
  return getRuleContexts<CACTParser::ExprContext>();
}

CACTParser::ExprContext* CACTParser::LValContext::expr(size_t i) {
  return getRuleContext<CACTParser::ExprContext>(i);
}


size_t CACTParser::LValContext::getRuleIndex() const {
  return CACTParser::RuleLVal;
}


std::any CACTParser::LValContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitLVal(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::LValContext* CACTParser::lVal() {
  LValContext *_localctx = _tracker.createInstance<LValContext>(_ctx, getState());
  enterRule(_localctx, 34, CACTParser::RuleLVal);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(218);
    match(CACTParser::Ident);
    setState(225);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CACTParser::T__3) {
      setState(219);
      match(CACTParser::T__3);
      setState(220);
      expr();
      setState(221);
      match(CACTParser::T__4);
      setState(227);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryContext ------------------------------------------------------------------

CACTParser::PrimaryContext::PrimaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CACTParser::ExprContext* CACTParser::PrimaryContext::expr() {
  return getRuleContext<CACTParser::ExprContext>(0);
}

CACTParser::LValContext* CACTParser::PrimaryContext::lVal() {
  return getRuleContext<CACTParser::LValContext>(0);
}

tree::TerminalNode* CACTParser::PrimaryContext::IntConst() {
  return getToken(CACTParser::IntConst, 0);
}

tree::TerminalNode* CACTParser::PrimaryContext::DoubleConst() {
  return getToken(CACTParser::DoubleConst, 0);
}

tree::TerminalNode* CACTParser::PrimaryContext::FloatConst() {
  return getToken(CACTParser::FloatConst, 0);
}

tree::TerminalNode* CACTParser::PrimaryContext::TRUE() {
  return getToken(CACTParser::TRUE, 0);
}

tree::TerminalNode* CACTParser::PrimaryContext::FALSE() {
  return getToken(CACTParser::FALSE, 0);
}


size_t CACTParser::PrimaryContext::getRuleIndex() const {
  return CACTParser::RulePrimary;
}


std::any CACTParser::PrimaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitPrimary(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::PrimaryContext* CACTParser::primary() {
  PrimaryContext *_localctx = _tracker.createInstance<PrimaryContext>(_ctx, getState());
  enterRule(_localctx, 36, CACTParser::RulePrimary);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(238);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CACTParser::T__7: {
        enterOuterAlt(_localctx, 1);
        setState(228);
        match(CACTParser::T__7);
        setState(229);
        expr();
        setState(230);
        match(CACTParser::T__8);
        break;
      }

      case CACTParser::Ident: {
        enterOuterAlt(_localctx, 2);
        setState(232);
        lVal();
        break;
      }

      case CACTParser::IntConst: {
        enterOuterAlt(_localctx, 3);
        setState(233);
        match(CACTParser::IntConst);
        break;
      }

      case CACTParser::DoubleConst: {
        enterOuterAlt(_localctx, 4);
        setState(234);
        match(CACTParser::DoubleConst);
        break;
      }

      case CACTParser::FloatConst: {
        enterOuterAlt(_localctx, 5);
        setState(235);
        match(CACTParser::FloatConst);
        break;
      }

      case CACTParser::TRUE: {
        enterOuterAlt(_localctx, 6);
        setState(236);
        match(CACTParser::TRUE);
        break;
      }

      case CACTParser::FALSE: {
        enterOuterAlt(_localctx, 7);
        setState(237);
        match(CACTParser::FALSE);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryContext ------------------------------------------------------------------

CACTParser::UnaryContext::UnaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CACTParser::UnaryContext::getRuleIndex() const {
  return CACTParser::RuleUnary;
}

void CACTParser::UnaryContext::copyFrom(UnaryContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- FuncCallContext ------------------------------------------------------------------

tree::TerminalNode* CACTParser::FuncCallContext::Ident() {
  return getToken(CACTParser::Ident, 0);
}

CACTParser::ArgListContext* CACTParser::FuncCallContext::argList() {
  return getRuleContext<CACTParser::ArgListContext>(0);
}

CACTParser::FuncCallContext::FuncCallContext(UnaryContext *ctx) { copyFrom(ctx); }


std::any CACTParser::FuncCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitFuncCall(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UnaryOpContext ------------------------------------------------------------------

CACTParser::UnaryContext* CACTParser::UnaryOpContext::unary() {
  return getRuleContext<CACTParser::UnaryContext>(0);
}

tree::TerminalNode* CACTParser::UnaryOpContext::ADD() {
  return getToken(CACTParser::ADD, 0);
}

tree::TerminalNode* CACTParser::UnaryOpContext::SUB() {
  return getToken(CACTParser::SUB, 0);
}

tree::TerminalNode* CACTParser::UnaryOpContext::NOT() {
  return getToken(CACTParser::NOT, 0);
}

CACTParser::UnaryOpContext::UnaryOpContext(UnaryContext *ctx) { copyFrom(ctx); }


std::any CACTParser::UnaryOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitUnaryOp(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AtomContext ------------------------------------------------------------------

CACTParser::PrimaryContext* CACTParser::AtomContext::primary() {
  return getRuleContext<CACTParser::PrimaryContext>(0);
}

CACTParser::AtomContext::AtomContext(UnaryContext *ctx) { copyFrom(ctx); }


std::any CACTParser::AtomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitAtom(this);
  else
    return visitor->visitChildren(this);
}
CACTParser::UnaryContext* CACTParser::unary() {
  UnaryContext *_localctx = _tracker.createInstance<UnaryContext>(_ctx, getState());
  enterRule(_localctx, 38, CACTParser::RuleUnary);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(249);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<CACTParser::UnaryOpContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(240);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 587202560) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(241);
      unary();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<CACTParser::FuncCallContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(242);
      match(CACTParser::Ident);
      setState(243);
      match(CACTParser::T__7);
      setState(245);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 4123768389888) != 0)) {
        setState(244);
        argList();
      }
      setState(247);
      match(CACTParser::T__8);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<CACTParser::AtomContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(248);
      primary();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgListContext ------------------------------------------------------------------

CACTParser::ArgListContext::ArgListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CACTParser::ExprContext *> CACTParser::ArgListContext::expr() {
  return getRuleContexts<CACTParser::ExprContext>();
}

CACTParser::ExprContext* CACTParser::ArgListContext::expr(size_t i) {
  return getRuleContext<CACTParser::ExprContext>(i);
}


size_t CACTParser::ArgListContext::getRuleIndex() const {
  return CACTParser::RuleArgList;
}


std::any CACTParser::ArgListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitArgList(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::ArgListContext* CACTParser::argList() {
  ArgListContext *_localctx = _tracker.createInstance<ArgListContext>(_ctx, getState());
  enterRule(_localctx, 40, CACTParser::RuleArgList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(251);
    expr();
    setState(256);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CACTParser::T__0) {
      setState(252);
      match(CACTParser::T__0);
      setState(253);
      expr();
      setState(258);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MulExprContext ------------------------------------------------------------------

CACTParser::MulExprContext::MulExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CACTParser::UnaryContext *> CACTParser::MulExprContext::unary() {
  return getRuleContexts<CACTParser::UnaryContext>();
}

CACTParser::UnaryContext* CACTParser::MulExprContext::unary(size_t i) {
  return getRuleContext<CACTParser::UnaryContext>(i);
}

std::vector<tree::TerminalNode *> CACTParser::MulExprContext::MUL() {
  return getTokens(CACTParser::MUL);
}

tree::TerminalNode* CACTParser::MulExprContext::MUL(size_t i) {
  return getToken(CACTParser::MUL, i);
}

std::vector<tree::TerminalNode *> CACTParser::MulExprContext::DIV() {
  return getTokens(CACTParser::DIV);
}

tree::TerminalNode* CACTParser::MulExprContext::DIV(size_t i) {
  return getToken(CACTParser::DIV, i);
}

std::vector<tree::TerminalNode *> CACTParser::MulExprContext::MOD() {
  return getTokens(CACTParser::MOD);
}

tree::TerminalNode* CACTParser::MulExprContext::MOD(size_t i) {
  return getToken(CACTParser::MOD, i);
}


size_t CACTParser::MulExprContext::getRuleIndex() const {
  return CACTParser::RuleMulExpr;
}


std::any CACTParser::MulExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitMulExpr(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::MulExprContext* CACTParser::mulExpr() {
  MulExprContext *_localctx = _tracker.createInstance<MulExprContext>(_ctx, getState());
  enterRule(_localctx, 42, CACTParser::RuleMulExpr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(259);
    unary();
    setState(264);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 469762048) != 0)) {
      setState(260);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 469762048) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(261);
      unary();
      setState(266);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AddExprContext ------------------------------------------------------------------

CACTParser::AddExprContext::AddExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CACTParser::MulExprContext *> CACTParser::AddExprContext::mulExpr() {
  return getRuleContexts<CACTParser::MulExprContext>();
}

CACTParser::MulExprContext* CACTParser::AddExprContext::mulExpr(size_t i) {
  return getRuleContext<CACTParser::MulExprContext>(i);
}

std::vector<tree::TerminalNode *> CACTParser::AddExprContext::ADD() {
  return getTokens(CACTParser::ADD);
}

tree::TerminalNode* CACTParser::AddExprContext::ADD(size_t i) {
  return getToken(CACTParser::ADD, i);
}

std::vector<tree::TerminalNode *> CACTParser::AddExprContext::SUB() {
  return getTokens(CACTParser::SUB);
}

tree::TerminalNode* CACTParser::AddExprContext::SUB(size_t i) {
  return getToken(CACTParser::SUB, i);
}


size_t CACTParser::AddExprContext::getRuleIndex() const {
  return CACTParser::RuleAddExpr;
}


std::any CACTParser::AddExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitAddExpr(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::AddExprContext* CACTParser::addExpr() {
  AddExprContext *_localctx = _tracker.createInstance<AddExprContext>(_ctx, getState());
  enterRule(_localctx, 44, CACTParser::RuleAddExpr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(267);
    mulExpr();
    setState(272);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CACTParser::ADD

    || _la == CACTParser::SUB) {
      setState(268);
      _la = _input->LA(1);
      if (!(_la == CACTParser::ADD

      || _la == CACTParser::SUB)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(269);
      mulExpr();
      setState(274);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RelExprContext ------------------------------------------------------------------

CACTParser::RelExprContext::RelExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CACTParser::AddExprContext *> CACTParser::RelExprContext::addExpr() {
  return getRuleContexts<CACTParser::AddExprContext>();
}

CACTParser::AddExprContext* CACTParser::RelExprContext::addExpr(size_t i) {
  return getRuleContext<CACTParser::AddExprContext>(i);
}

std::vector<tree::TerminalNode *> CACTParser::RelExprContext::LT() {
  return getTokens(CACTParser::LT);
}

tree::TerminalNode* CACTParser::RelExprContext::LT(size_t i) {
  return getToken(CACTParser::LT, i);
}

std::vector<tree::TerminalNode *> CACTParser::RelExprContext::LE() {
  return getTokens(CACTParser::LE);
}

tree::TerminalNode* CACTParser::RelExprContext::LE(size_t i) {
  return getToken(CACTParser::LE, i);
}

std::vector<tree::TerminalNode *> CACTParser::RelExprContext::GT() {
  return getTokens(CACTParser::GT);
}

tree::TerminalNode* CACTParser::RelExprContext::GT(size_t i) {
  return getToken(CACTParser::GT, i);
}

std::vector<tree::TerminalNode *> CACTParser::RelExprContext::GE() {
  return getTokens(CACTParser::GE);
}

tree::TerminalNode* CACTParser::RelExprContext::GE(size_t i) {
  return getToken(CACTParser::GE, i);
}


size_t CACTParser::RelExprContext::getRuleIndex() const {
  return CACTParser::RuleRelExpr;
}


std::any CACTParser::RelExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitRelExpr(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::RelExprContext* CACTParser::relExpr() {
  RelExprContext *_localctx = _tracker.createInstance<RelExprContext>(_ctx, getState());
  enterRule(_localctx, 46, CACTParser::RuleRelExpr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(275);
    addExpr();
    setState(280);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 64424509440) != 0)) {
      setState(276);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 64424509440) != 0))) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(277);
      addExpr();
      setState(282);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EqExprContext ------------------------------------------------------------------

CACTParser::EqExprContext::EqExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CACTParser::RelExprContext *> CACTParser::EqExprContext::relExpr() {
  return getRuleContexts<CACTParser::RelExprContext>();
}

CACTParser::RelExprContext* CACTParser::EqExprContext::relExpr(size_t i) {
  return getRuleContext<CACTParser::RelExprContext>(i);
}

std::vector<tree::TerminalNode *> CACTParser::EqExprContext::EQ() {
  return getTokens(CACTParser::EQ);
}

tree::TerminalNode* CACTParser::EqExprContext::EQ(size_t i) {
  return getToken(CACTParser::EQ, i);
}

std::vector<tree::TerminalNode *> CACTParser::EqExprContext::NEQ() {
  return getTokens(CACTParser::NEQ);
}

tree::TerminalNode* CACTParser::EqExprContext::NEQ(size_t i) {
  return getToken(CACTParser::NEQ, i);
}


size_t CACTParser::EqExprContext::getRuleIndex() const {
  return CACTParser::RuleEqExpr;
}


std::any CACTParser::EqExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitEqExpr(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::EqExprContext* CACTParser::eqExpr() {
  EqExprContext *_localctx = _tracker.createInstance<EqExprContext>(_ctx, getState());
  enterRule(_localctx, 48, CACTParser::RuleEqExpr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(283);
    relExpr();
    setState(288);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CACTParser::EQ

    || _la == CACTParser::NEQ) {
      setState(284);
      _la = _input->LA(1);
      if (!(_la == CACTParser::EQ

      || _la == CACTParser::NEQ)) {
      _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(285);
      relExpr();
      setState(290);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AndExprContext ------------------------------------------------------------------

CACTParser::AndExprContext::AndExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CACTParser::EqExprContext *> CACTParser::AndExprContext::eqExpr() {
  return getRuleContexts<CACTParser::EqExprContext>();
}

CACTParser::EqExprContext* CACTParser::AndExprContext::eqExpr(size_t i) {
  return getRuleContext<CACTParser::EqExprContext>(i);
}

std::vector<tree::TerminalNode *> CACTParser::AndExprContext::AND() {
  return getTokens(CACTParser::AND);
}

tree::TerminalNode* CACTParser::AndExprContext::AND(size_t i) {
  return getToken(CACTParser::AND, i);
}


size_t CACTParser::AndExprContext::getRuleIndex() const {
  return CACTParser::RuleAndExpr;
}


std::any CACTParser::AndExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitAndExpr(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::AndExprContext* CACTParser::andExpr() {
  AndExprContext *_localctx = _tracker.createInstance<AndExprContext>(_ctx, getState());
  enterRule(_localctx, 50, CACTParser::RuleAndExpr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(291);
    eqExpr();
    setState(296);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CACTParser::AND) {
      setState(292);
      match(CACTParser::AND);
      setState(293);
      eqExpr();
      setState(298);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OrExprContext ------------------------------------------------------------------

CACTParser::OrExprContext::OrExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<CACTParser::AndExprContext *> CACTParser::OrExprContext::andExpr() {
  return getRuleContexts<CACTParser::AndExprContext>();
}

CACTParser::AndExprContext* CACTParser::OrExprContext::andExpr(size_t i) {
  return getRuleContext<CACTParser::AndExprContext>(i);
}

std::vector<tree::TerminalNode *> CACTParser::OrExprContext::OR() {
  return getTokens(CACTParser::OR);
}

tree::TerminalNode* CACTParser::OrExprContext::OR(size_t i) {
  return getToken(CACTParser::OR, i);
}


size_t CACTParser::OrExprContext::getRuleIndex() const {
  return CACTParser::RuleOrExpr;
}


std::any CACTParser::OrExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CACTVisitor*>(visitor))
    return parserVisitor->visitOrExpr(this);
  else
    return visitor->visitChildren(this);
}

CACTParser::OrExprContext* CACTParser::orExpr() {
  OrExprContext *_localctx = _tracker.createInstance<OrExprContext>(_ctx, getState());
  enterRule(_localctx, 52, CACTParser::RuleOrExpr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(299);
    andExpr();
    setState(304);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == CACTParser::OR) {
      setState(300);
      match(CACTParser::OR);
      setState(301);
      andExpr();
      setState(306);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void CACTParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  cactParserInitialize();
#else
  ::antlr4::internal::call_once(cactParserOnceFlag, cactParserInitialize);
#endif
}
