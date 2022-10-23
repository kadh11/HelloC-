#include<iostream>
using namespace std;
int main() {
	int a, b, c;
	cout << "Nhap vao so a: ";
	cin >> a;
	cout << "Nhap vao so b: ";
	cin >> b;
	cout << "Nhap vao so c: ";
	cin >> c;
	if (a == b && b == c) {
		cout << "khong co so nho nhat" << endl;
	}
	else {
		int min = a;
		if (b < min) {
			min = b;
		}
		if (c < min) {
			min = c;
		}
		cout << "so nho nhat la: " << min << endl;
	} return 0;
}