#include <iostream>
using namespace std;
int main() {
	int a, b, c;
	cout << "Nhap vao canh a: ";
	cin >> a;
	cout << "Nhap vao canh b: ";
	cin >> b;
	cout << "Nhap vao canh c: ";
	cin >> c;
	if (a < b + c and b < c + a and c < a + b) { // and = &
		cout << "a, b, c la 3 canh cua 1 tam giac" << endl;
		if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == b * b + a * a) { // or = ||
			cout << "va la 3 canh cua 1 tam giac vuong" << endl;
		}
		else {
			cout << "va khong la 3 canh cua 1 tam giac vuong" << endl;
		}
	}else{
		cout << "va khong la 3 canh cua 1 tam giac" << endl;
	}
	return 0;
}