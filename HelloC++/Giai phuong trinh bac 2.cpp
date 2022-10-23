#include<iostream>
using namespace std;
int main() {
	float a, b, c;
	cout << "Nhap vao he so a: ";
	cin >> a;
	cout << "Nhap vao he so b: ";
	cin >> b;
	cout << "Nhap vao he so c: ";
	cin >> c;
	if (a == 0) {
		if (b == 0) {
			if (c == 0) {
				cout << "Phuong trinh co vo so nghiem" << endl;
			}
			else {
				cout << "Phuong trinh vo nghiem"<<endl;
			}
		}else {
			cout << "Nghiem cua phuong trinh la x= " << -c / b << endl;
		}
	}
	else {
		/*float delta = (b * b - (4 * a * c));*/
		/*float x1= (-b - sqrt(delta)) / (2*a);
		float x2 = (-b + sqrt(delta)) / (2 * a);
		float x = (-b + sqrt(delta)) / (2 * a);*/
		if ((b * b - (4 * a * c)) > 0) {
			cout << "Nghiem cua phuong trinh la x1= " << (-b - sqrt(b * b - (4 * a * c))) / (2 * a) << endl;
			cout << "Nghiem cua phuong trinh la x2= " << (-b + sqrt(b * b - (4 * a * c))) / (2 * a) << endl;
		}
		if ((b * b - (4 * a * c)) == 0) {
			cout << "Nghiem cua phuong trinh la x1=x2= " << (-b + sqrt(b * b - (4 * a * c))) / (2 * a) << endl;
		}
		if ((b * b - (4 * a * c)) < 0) {
			cout << "Phuong trinh vo nghiem" << endl;
		}
	}
	return 0;
}
