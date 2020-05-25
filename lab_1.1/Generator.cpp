#include "Generator.h"

int Factorial(int n)
{
	int f = 1;
	for (int b = 2; b <= n; b++)
	{
		f *= b;
	}
	return f;

}


void Generator::GenerateAll() {
   sampleResult.resize(3);
   sampleResult = std::vector<int> {1,2,3};
}

std::vector<int>& Generator::GetResult(int idx) {
   return sampleResult;
}