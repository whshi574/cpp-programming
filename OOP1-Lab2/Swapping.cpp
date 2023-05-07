// Program to show swap of two no's without using third variable
#include <iostream>
#include <string>
using namespace std;

void SwapWithoutVarInFloat() {

	float a, b;
	cout << "Enter first number: ";
	cin >> a;
	cout << "Enter second number: ";
	cin >> b;
	a = a + b;
	b = a - b;
	a = a - b;
	cout << "We have swapped your numbers, result in below." << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

}

void SwapWithoutVarInRandom() {

	string a, b;
	int I_a;
	int I_b;
	double S_a;
	double S_b;

	string c = "12.23";
	//cin >> a >> b;

	try {

		I_a = stoi(c);

	}
	catch(invalid_argument& ia) {

		cout << "invalid_argument" << endl;
		
	}
	catch (const out_of_range& oor) {

		cout << "out_of_range" << endl;
		
	}

	cout << I_a << endl;
}

int main()
{

	SwapWithoutVarInRandom();

	return 0;
}