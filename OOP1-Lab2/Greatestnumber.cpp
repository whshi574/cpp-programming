// U1910049
// Lab assignment #3
// Program to find greatest in 3 numbers
// Program to find greatest in n numbers, the user offer requirement amount, and get the greatest number

#include <iostream>
#include <string>
#include <vector>
#include <algorithm> // °üº¬ max_element() º¯Êý
using namespace std;

void FindGreatestNumInThreeNum() {

	cout << "Enter the 3 numbres: ";
	float a, b, c;
	cin >> a >> b >> c;
	if (a >= b && a >= c)
		cout << "The greatest number is " << a << ";" << endl;
	if (b >= a && b >= c)
		cout << "The greatest number is " << b << ";" << endl;
	if (c >= a && c >= b)
		cout << "The greatest number is " << c << ";" << endl;
	else if (a == b == c)
		cout << "All numbers are equal." << endl;

}

void FindGreatestNumInRandomNum() {

	cout << "Please enter number what you like, when you want to stop enter the number just enter QUIT or quit, we will return the greatest value" << endl;

	vector<double> Numlist;
	string S_Num;
	double D_Num;

	do {
		cin >> S_Num;

		try {

			D_Num = stod(S_Num);

		}
		catch (const std::invalid_argument& ia) {

			if (S_Num == "QUIT" || S_Num == "quit") {

				auto MaxValue = max_element(Numlist.begin(), Numlist.end());//what is Iterator?

				cout << "The Greatest Value is " <<*MaxValue<< endl;//What is a dereference?
				return;
			}

			cout << "Your input is invalid, please enter again or send quit" << endl;

			continue;
		}
		catch (const std::out_of_range& oor) {

			std::cerr << "Out of range: " << oor.what() << endl <<"Your input is invalid, please enter again or send quit" << endl;
			continue;
		}

		Numlist.push_back(D_Num);

	} while (1);

}


int main()
{
	FindGreatestNumInRandomNum();

	return 0;
}