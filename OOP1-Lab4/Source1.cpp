// Lab assignment #5
// ID:U1910049; Name:Zokirov Rustam
// Control structure - Nested Loop

#include <iostream>
using namespace std;

void PrintStar() {
	cout << "You want to print n stars? please enter n number" << endl;
	int IntInput;
	cin >> IntInput;
	for (int i = 1; i <= IntInput; i++) {
		for (int j = 1; j <= IntInput; j++) {
			if (j <= (IntInput - i)) {
				cout << " ";
			}
			else {
				cout << "*";
			}
		}
		cout << endl;
	}
}

int main()
{
	
	while (1)
	{
		PrintStar();
	}
	return 0;
}