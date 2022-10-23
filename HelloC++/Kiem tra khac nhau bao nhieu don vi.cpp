#include<iostream>
using namespace std;
int a, b;
int main() {
	cout << "Nhap vao a: ";
	cin >> a;
	cout << "Nhap vao b: ";
	cin >> b;
	int dif = a - b; // ky hieu tru
	if (dif == 0) {
		cout << "a=b" << endl;
	}
	else {
		if (dif > 0) {
			cout << "a lon hon b la: " << dif << endl;
		}
		else {
			if (dif < 0) {
				cout << "a nho hon b la: " << abs(dif) << endl;
			}
		}
	} return 0;
}