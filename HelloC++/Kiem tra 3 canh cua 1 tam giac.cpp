#include<iostream>
using namespace std;
int main() {
	int a, b, c;
	cout << "Nhap vao canh a: ";
	cin >> a;
	cout << "Nhap vao canh b: ";
	cin >> b;
	cout << "Nhap vao canh c: ";
	cin >> c;
	if (a < b + c && b < a + c && c < a + b) {
		cout << "la 3 canh cua 1 tam giac" << endl;
	}
	else {
		cout << "Khong la 3 canh cua 1 tam giac" << endl;
	} return 0;
}