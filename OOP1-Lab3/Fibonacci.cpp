//U1910049 Rastam Zokirov
//Lab assignment #4
//Program to print Fibonacci series up to 100.
//1,1,2,3,5,8,13...

#include <iostream>
using namespace std;

void FibonacciTo100() {
	int i = 1;
	int FibSum = 0;
	int FibPrev, FibPrevPrev;

	while (!(FibSum>100)) {

		if ((i == 1)||(i == 2)) {
			FibSum = 1;
			FibPrev = 1;
			FibPrevPrev = 1;

			
		}
		else {
			FibSum = FibPrev + FibPrevPrev;
		}

		if (FibSum > 100) {
			break;
		}

		cout << "Now Fibonacci Number is"<< FibSum << endl;

		FibPrevPrev = FibPrev;
		FibPrev = FibSum;
		i++;
	}
}
int main() {
	FibonacciTo100();
	
	return 0;
}