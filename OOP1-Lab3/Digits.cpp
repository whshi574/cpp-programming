//U1910049 Rastam Zokirov
//Lab assignment #4
//Program to input a number and then calculate sum of its digits.

#include <iostream>
#include<string>
#include<cctype>

using namespace std;

void DigitsSum() {

	cout << "Please enter a number that I can sum of their digit" << endl;
	string CusInput;
	int Sum = 0;
	bool Isvaild = 1;

	while (1) {
		cin >> CusInput;
		for (char c : CusInput) {
			if (isdigit(c)) {
				int num = static_cast<int>(c - '0');
				Sum = Sum + num;
			}
			else {
				cout << "The input is invalid, please enter again" << endl;
				Isvaild = 0;
				break;
			}
			Isvaild = 1;
		}
		if (Isvaild) {
			cout << "The sum of the digits is " << Sum << endl;
			break;
		}
	}
	
}

int main() {
	
	DigitsSum();
	return 0;
}