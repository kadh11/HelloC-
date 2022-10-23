#include<iostream>
using namespace std;
int main() {
	int a, b, c;
	cout << "Nhap vao a: ";
	cin >> a;
	cout << "Nhap vao b: ";
	cin >> b;
	cout << "Nhap vao c: ";
	cin >> c;
	if (a == b and b == c) {
		cout << "Khong co so lon nhat" << endl;
	}
	else {
		int max = a;
		if (b > max) {
			max = b;
		}
		if (c > max) {
			max = c;
		}
		cout << "So lon nhat la: " << max << endl;
	}

}