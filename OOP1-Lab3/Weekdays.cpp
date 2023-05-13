//U1910049 Rastam Zokirov
//Lab assignment #4
//Program to use switch statement. Display Monday to Sunday.

#include <iostream>
using namespace std;

void SwitchMontoSun() {
	int day;
	cout << "Please enter a number which is to choose monday to sunday" << endl;
	
	
	while (1) {
		
		if (!(cin >> day)) {
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			//cout << "It's fail state" << endl;
			continue;
		}

		if (day >= 1 && day <= 7) {
			switch (day) {
			case 1:
				cout << "It's Monday" << endl;
				break;
			case 2:
				cout << "It's Tuesday" << endl;
				break;
			case 3:
				cout << "It's Wensday" << endl;
				break;
			case 4:
				cout << "It's Thursday" << endl;
				break;
			case 5:
				cout << "It's Friday" << endl;
				break;
			case 6:
				cout << "It's Saturday" << endl;
				break;
			case 7:
				cout << "It's Sunday" << endl;
				break;
			default:
				cout << "Please enter a correct number,like 1,2,3...." << endl;
				break;
			}
		}
		else {
			cout << "Please enter a correct number,like 1,2,3...." << endl;
		}
	}
}

void TestCin() {
	int day;
	int day0;
	while (1) {
		if (!(cin >> day)) { //if the input is 2.3, it will enter the correct state first and then enter the fail state, 2 will cast correctly, .3 will enter the false state
			cout << day << endl;
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << "It's fail state" << endl;
		}
		else {
			cout << day << endl;
			cout << "It's correct state" << endl;
		}

		if (!(cin >> day0)) { //if the input is 2.3, it will enter the correct state first and then enter the fail state, 2 will cast correctly, .3 will enter the false state
			cout << day0 << endl;
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << "It's fail state" << endl;
		}
		else {
			cout << day0 << endl;
			cout << "It's correct state" << endl;
		}

		break;
	}
}

int main() {
	
	SwitchMontoSun();
	//TestCin();
	return 0;
}