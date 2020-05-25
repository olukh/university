#include "ProblemSolver.h"
#include <fstream>

void ProblemSolver::ReadFile(std::string name) {
    // ifstream
    // f >> N 
    // f >>
    // for .... 
    // Item
    system("cmd");
    std::ifstream f("../../../"+name); // work folder like ASD\sample2\out\build\x64-Debug
    if (f.fail()) {
        throw std::exception("Sorry, can not open file");
    }
    f >> N;

}

Item::Item(std::string text, int w, double p): W(w)
{
}
