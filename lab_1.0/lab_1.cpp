#include iostream
#include vector
#include algorithm
using namespace std;

vector int temp;
vector int original;
vector vectorint result;
void initializeArray(int number, int startNum)
{
	int summ = 0;
	int var = startNum;
	int counter = -1;
	while (summ != number)
	{
		if (summ + var  number)
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
void decomp()
{
	while()
}
int main()
{
	int originalNumber;
	cin  originalNumber;
	initializeArray(originalNumber, 15);
	for (int i = 0; i  temp.size(); i++)
		cout  temp[i]   ;
	return 0;
}



