#include <iostream>
#include "generator.h"

using namespace std;


// метод печатает что угодно, у чего есть возможность запускать цикл for (auto x: )
//template <class T>
//void Print(T someList) {
//   for (auto &x: someList) cout<<" "<<x;
//   cout<<endl;
//}

int main() {
   std::cout<<"10!="<<Factorial(10)<<endl;

   //Generator g(5,3);
   //  Generator g;
   // g.GenerateAll();
   
   //std::vector<int> result = g.GetResult(5); // 5-я последователность
   
   //for (int x: result) cout<<" "<<x;  cout<<endl;

   //g.Print(result);

   return 0;
}