#include<iostream>
using namespace std;
int main() {
	float diem;
	cout << "Nhap vao diem mon hoc: ";
	cin >> diem;
	if (diem >= 9) {
		cout << "Ban duoc diem A";
	}
	else {
		if (diem >= 7) {
			cout << "Ban duoc diem B";
		}
		else {
			if (diem >= 5) {
				cout << "Ban duoc diem C";
			}
			else {
				if (diem >= 4) {
					cout << "Ban duoc diem D";
				}
				else {
					cout << "Ban truot";
				}
			}
		}
	}

	return 0;
}