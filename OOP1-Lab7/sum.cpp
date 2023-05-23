#include <iostream>

using namespace std;

int NatNumSum(int NowIntNum) {

	if (NowIntNum == 0)
	{
		return 0;
	}
	else {
		return NatNumSum(NowIntNum - 1) + NowIntNum;
	}
}

int main()
{
	int NowIntNum;

	cin >> NowIntNum;

	cout << "The result is " << NatNumSum(NowIntNum);
	return 0;
}