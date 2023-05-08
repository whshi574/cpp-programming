//U1910049 Rastam Zokirov
//Lab assignment #4
//Program to display sum of series 1+1/2+1/3+1/4+... .

#include <iostream>
using namespace std;

void SumFromMtoN() {

	cout << "Please enter two number, we will sum them from small to big." << endl;

	int a, b, sum=0;
	cin >> a >> b;
	if (a == b) {
		sum = a;
		cout << sum << endl;
		return;
	}

	if (a > b) {
		while (!(a == b)) {
			sum = sum + b;
			b++;
		}
		sum = sum + a;
	}
	else {
		while (!(a == b)) {
			sum = sum + a;
			a++;
		}
		sum = sum + b;
	}

	cout << sum << endl;

}

int main() {
	
	while (1) {
		SumFromMtoN();
	}
	

	return 0;
}