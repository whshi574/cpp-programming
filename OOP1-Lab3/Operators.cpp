//U1910049 Rastam Zokirov
//Lab assignment #4
//Program to display arithmetic operators using switch case.

#include <iostream>
using namespace std;

class Caculator {

private:
	double FirstNum;
	double SecondNum;
	char op;

public:
	void GetInput() {
		cout << "Please enter two number which you want to caculator" << endl;
		bool bFirstNumGetValueSuccess = 0;
		bool bSecondNumGetValueSuccess = 0;

		while (!(bFirstNumGetValueSuccess)) {
			cout << "The First Num: " << endl;
			if (!(cin >> FirstNum)) {
				cout << "You input is not correct, Please enter a number again" << endl;
				cin.clear();
				cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				bFirstNumGetValueSuccess = 0;
				continue;
			}
			cout << "OK, we get your First Num: " << FirstNum<<endl;
			bFirstNumGetValueSuccess = 1;
		}

		while (!(bSecondNumGetValueSuccess)) {
			cout << "The Second Num: " << endl;
			if (!(cin >> SecondNum)) {
				cout << "You input is not correct, Please enter a number again" << endl;
				cin.clear();
				cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				bSecondNumGetValueSuccess = 0;
				continue;
			}
			cout << "OK, we get your First Num: " << SecondNum << endl;
			bSecondNumGetValueSuccess = 1;
		}

		return;
	}

	void GetOperator() {
		cout << "Please enter the operator which you want" << endl;
		cout << "+	-	*	%" << endl;
		
		cin >> op;

		switch (op) {
		case '+':
			cout << "Perform the add operation" << endl;
			cout << "The result is " << FirstNum + SecondNum << endl;
			break;
		case '-':
			cout << "Perform the sub operation" << endl;
			cout << "The result is " << FirstNum - SecondNum << endl;
			break;
		case '*':
			cout << "Perform the multipy operation" << endl;
			cout << "The result is " << FirstNum * SecondNum << endl;
			break;
		case '%':
			cout << "Perform the division operation" << endl;
			cout << "The result is " << FirstNum/SecondNum << endl;
			break;
		default:
			cout << "Please enter a right operator" << endl;
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}

	}
};
int main() {
	
	Caculator inst;
	inst.GetInput();
	while (1) {
		inst.GetOperator();
	}
	
	return 0;
}