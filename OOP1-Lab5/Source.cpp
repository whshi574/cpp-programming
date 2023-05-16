// Practical Lab Assignment-7(Week 9)
// ID:U1910049 Name: Rustam Zokirov
// Program to calculate area of a circle using functions

#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14159265358979323846;

void CalculateCircleArea() {
	cout << "Please give me a number to represent the R length of circle" << endl;
	double InputR;
	cin >> InputR;
	double CircleArea = InputR * InputR * PI;
	cout << "The Circle Area is " << CircleArea << endl;
	return;
}

int main()
{
	while (1)
	{
		CalculateCircleArea();
	}
	return 0;
}