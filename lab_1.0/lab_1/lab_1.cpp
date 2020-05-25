#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector <int> temp;
vector <int> original1;
vector <int> original2;
vector <vector<int>> result;
void initializeArray(int number, int startNum)
{
	temp.clear();
	int summ = 0;
	int var = startNum;
	int counter = -1;
	while (summ != number)
	{
		if (summ + var > number)
		{
			temp[counter] += number - summ;
			break;
		}
		temp.push_back(var);
		summ += var;
		counter++;
		var++;
	}

}
void NRdecompose(int number)
{
	result.clear();
	result.push_back(original1);
	int i;
	while (original1[0] != number)
	{
		i = original1.size() - 1;
		if (original1[i - 1] + 1 < original1[i] - 1)
		{
			original1[i - 1]++;
			original1[i]--;
			initializeArray(original1[i], original1[i - 1] + 1);
			original1.pop_back();
			original1.reserve(original1.size() + temp.size());
			original1.insert(original1.end(), temp.begin(), temp.end());
		}
		else if (original1[i - 1] + 1 >= original1[i] - 1)
		{
			original1[i - 1] += original1[i];
			original1.pop_back();
		} 
		result.push_back(original1);
	}
}
void Rdecompose(int origin)
{
	result.push_back(original2);  
	int i = original2.size() - 1;
	if (original2[0] == origin)
		return;
	if (original2[i - 1] + 1 < original2[i] - 1)
	{
		original2[i - 1]++;
		original2[i]--;
		initializeArray(original2[i], original2[i - 1] + 1);
		original2.pop_back();
		original2.reserve(original2.size() + temp.size());
		original2.insert(original2.end(), temp.begin(), temp.end());
	}
	else if (original2[i - 1] + 1 >= original2[i] - 1)
	{
		original2[i - 1] += original2[i];
		original2.pop_back();
	}
	Rdecompose(origin);
}
int main()
{
	setlocale(LC_ALL, "russian");
	temp.clear();
	int originalNumber;
	cin >> originalNumber;
	initializeArray(originalNumber, 1) ;
	original1 = temp;
	original2 = temp;
	Rdecompose(originalNumber);
	cout << "Результат работы рекурсивного алгоритма" <<endl;
	for (int i = 0; i < result.size(); i++) {
		for (int k = 0; k < result[i].size(); k++) {
			cout << result[i][k] << " ";
		}
		cout << endl;
	}
	NRdecompose(originalNumber);
	cout << "Результат работы нерекурсивного алгоритма" << endl;
	for (int i = 0; i < result.size(); i++) {
		for (int k = 0; k < result[i].size(); k++) {
			cout << result[i][k] << " ";
		}
		cout << endl;
	}


	return 0;
}



