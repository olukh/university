#include "ProblemSolver.h"
#include <fstream>
using namespace std;


// ����� �������� ��� ������, � ���� ���� ����������� ��������� ���� for (auto x: )
//template <class T>
//void Print(T someList) {
//   for (auto &x: someList) cout<<" "<<x;
//   cout<<endl;
//}

int main() {
    ProblemSolver s;
    s.ReadFile("input.txt");


   //Generator g(5,3);
   //  Generator g;
   // g.GenerateAll();
   
   //std::vector<int> result = g.GetResult(5); // 5-� �����������������
   
   //for (int x: result) cout<<" "<<x;  cout<<endl;

   //g.Print(result);

   return 0;
}