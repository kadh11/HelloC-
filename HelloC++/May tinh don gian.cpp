#include<iostream>
using namespace std;
int main() {
	float a, b;
	cout << "nhap vao hai so thuc a, b: " << endl;
	cin >> a;
	cin >> b;
	int choice;
	cout << "===========Menu===========" << endl;
	cout << "1. a + b" << endl;
	cout << "2. a - b" << endl;
	cout << "3. a * b" << endl;
	cout << "4. a / b" << endl;
	cout << "INVALID OPTION" << endl;
	cin >> choice;
	switch (choice) {
	case 1:
		cout << a + b << endl;
		break;
	case 2: 
		cout << a - b << endl;
		break;
	case 3:
		cout << a * b << endl;
		break;
	case 4:
		cout << a / b << endl;
		break;
	default:
		cout << "invalid option" << endl;
		break;
	}
	cout << endl;
	return 0;
}


