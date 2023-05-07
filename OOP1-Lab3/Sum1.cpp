//U1910049 Rastam Zokirov
//Lab assignment #4
//Program to display sum of series 1+1/2+1/3+1/4+... .

#include <iostream>
using namespace std;

int SumFromMtoN() {

	cout << "Please enter two number, we will sum them from small to big." << endl;

	int a, b, sum=0;
	cin >> a >> b;
	if (a = b) {
		return a;
	}

	if (a > b) {
		while (!(a = b)) {
			sum = sum + b;
			b++;
		}
	}

}

int main() {
	

	return 0;
}