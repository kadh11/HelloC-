#include <iostream>
using namespace std;
int main() {
	int number;
	cout << "Write a number ";
	cin >> number;
	if (number == 0) {
		cout << number << " is 0" << endl;
	}
	else {
		if (number > 0) {
			cout << number << " la so duong" << endl;
		}
		else {
			cout << number << " la so am" << endl;
		}
	}
	return 0;
}