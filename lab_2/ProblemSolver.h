#pragma once
#include <vector>
#include <string>

struct Item {
public:
    const int W;
    //const double P;
    //const std::string text;

    Item(std::string text, int w, double p);
};

class ProblemSolver {

private:
    int N;
public:
    std::vector<Item> items;
    void Solve();
    void ReadFile(std::string name);
    int GetN() { return N; }
    //std::vector<int>& GetResult(int index);
};

