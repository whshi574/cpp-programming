// Practical Lab Assignment-7(Week 9)
// ID:U1910049 Name: Rustam Zokirov
// Program to convert into minutes

#include <iostream>
using namespace std;

bool GetMinutesFromTime(double hours, double minutes, double seconds) {

	if (hours < 0) {
		cout << "Your hours input is wrong" << endl;
		return false;
	}
	if (minutes < 0) {
		cout << "Your minutes input is wrong" << endl;
		return false;
	}
	if (seconds < 0) {
		cout << "Your seconds input is wrong" << endl;
		return false;
	}

	double ResultMinute = minutes + (hours*60) + (seconds/60);
	cout << "The result minute is " << ResultMinute<<endl;

	return true;
}

int main()
{
	double InputHours, InputMinutes, InputSeconds;
	bool bIsGetSuccess = 0;

	do {

		if (!(cin >> InputHours >> InputMinutes >> InputSeconds)) {
			// Input error occurred
			cin.clear(); // Clear the error state
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear the input buffer
			cout << "Please enter again , you enter the wrong value" << endl;
			continue;
		}

		bIsGetSuccess = GetMinutesFromTime(InputHours, InputMinutes, InputSeconds);
		

	} while (!bIsGetSuccess);

	return 0; // indicates that the program will ended successfully
}
