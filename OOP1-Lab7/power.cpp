#include <iostream>
#include <math.h>

using namespace std;

double GetPower(double BaseNum, int PowerNum) 
{
	if (PowerNum == 0)
	{
		return 1;
	} 
	else
	{
		PowerNum = PowerNum - 1;
		return BaseNum * GetPower(BaseNum, PowerNum);
	}
}

int main()
{
	double FirstInput;
	int SecondInput;

	cin >> FirstInput >> SecondInput;

	cout << "The Result is " << GetPower(FirstInput, SecondInput) << endl;

	return 0;
}