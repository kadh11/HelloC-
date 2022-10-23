#include<iostream>
using namespace std;
int main() {
	float a, b;
	cout << "Nhap vao he so a: ";
	cin >> a;
	cout << "Nhap vao he so b: ";
	cin >> b;
	if (a == 0 ) {
		if (b == 0) {
			cout << "Phuong trinh co vo so nghiem" << endl;
		}
		else {
			cout << "Phuong trinh vo nghiem: " << endl;
		}
		
	}else {
		float x = -b / a;
		cout << "Nghiem cua pt x= " << x << endl;
	} return 0;
}