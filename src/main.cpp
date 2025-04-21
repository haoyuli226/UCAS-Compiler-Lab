#include <iostream>
#include <fstream>

#include "antlr4-runtime.h"
#include "tree/ErrorNode.h"

#include "CACTLexer.h"
#include "CACTParser.h"
#include "CACTBaseVisitor.h"

using namespace antlr4;

class Analysis : public CACTBaseVisitor {  
public:
    std::any visitCompUnit(CACTParser::CompUnitContext *context) override {
        std::cout << "enter rule [CompUnit]!" << std::endl;
        return visitChildren(context);
    }

    std::any visitErrorNode(tree::ErrorNode *node) override {
        std::cout << "visit error node!" << std::endl;
        return nullptr;
    }
};

int main(int argc, const char* argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: ./compiler <filename.cact>" << std::endl;
        return 1;
    }

    std::ifstream stream(argv[1]);
    if (!stream.is_open()) {
        std::cerr << "Failed to open file: " << argv[1] << std::endl;
        return 1;
    }

    ANTLRInputStream input;
    input.load(stream);  

    CACTLexer lexer(&input);
    CommonTokenStream tokens(&lexer);
    CACTParser parser(&tokens);

    Analysis visitor;
    visitor.visit(parser.compUnit());

    return 0;
}
