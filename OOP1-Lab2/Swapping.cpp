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

    std::string str = "123";
    try {
        double d = std::stod(str);
        std::cout << "The string is a floating-point number." <<d<< std::endl;
    }
    catch (const std::exception& e) {
        try {
            int i = std::stoi(str);
            if (str.find('.') == std::string::npos) {
                std::cout << "The string is an integer." << std::endl;
            }
            else {
                std::cout << "The string is not a number." << std::endl;
            }
        }
        catch (const std::exception& e) {
            std::cout << "The string is not a number." << std::endl;
        }
    }
}

int main()
{

	SwapWithoutVarInRandom();

	return 0;
}