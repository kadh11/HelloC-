/*
Vd12: viết chương trình C/C++ thực hiện các công việc sau:
a) Khai báo cấu trúc đại diện cho xe: tên nhãn hiệu (name), mã lực (power kiểu int), số ghế ngồi (seats kiểu int), số năm sử dụng (yr kiểu int)
b) Khai báo biến N kiểu nguyên, yêu cầu nhập vào từ bàn phím và từ đó tạo ra mảng N xe
c) Yêu cầu nhập vào một nhãn hiệu và kiểm tra xem có bao nhiêu xe thuộc nhãn hiệu đó.
	Gợi ý dùng hàm strcmp(const char *, const char *) để xem hai xâu có bằng nhau hay không? Nếu có thì hàm kia sẽ trả về 0
d) Thống kê xem bao nhiêu xe có số ghế nhiều nhất
e) Thống kê xem bao nhiêu xe có số năm sử dụng ít nhất
*/

#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
// a) Khai báo cấu trúc đại diện cho xe: tên nhãn hiệu (name), mã lực (power kiểu int), số ghế ngồi (seats kiểu int), số năm sử dụng (yr kiểu int)
typedef struct Car {
	char name[100];
	int power;
	int seats;
	int yr;
} Car;
// b) Khai báo biến N kiểu nguyên, yêu cầu nhập vào từ bàn phím và từ đó tạo ra mảng N xe
int main() {
	int N;
	cout << "Nhap vao so nguyen N: ";
	cin >> N;
	Car arr[N];
	for (int i = 0; i < N; i++)	{
		cout << "Nhap vao thong tin xe thu " << (i + 1) << ":";
		cout << "Nhan hieu cua xe: "; cin >> arr[i].name;
		cout << "Ma luc cua xe: "; cin >> arr[i].power;
		cout << "So ghe cua xe:"; cin >> arr[i].seats;
		cout << "Nam su dung cua xe:"; cin >> arr[i].yr;
	}
	// c) Yêu cầu nhập vào một nhãn hiệu và kiểm tra xem có bao nhiêu xe thuộc nhãn hiệu đó.
	Gợi ý dùng hàm strcmp(const char*, const char*) để xem hai xâu có bằng nhau hay không ? Nếu có thì hàm kia sẽ trả về 0
	char str[100];
	cout << "Ban muon tim kiem nhan hieu nao: "; cin >> str;
	int count = 0;
	for (int i = 0; i < N; i++)	{
		if (strcmp(arr[i].name, str) == 0) { //bang 0 khi 2 xau giong het nhau
			count++;
		}
	}
	cout << "So xe cua nhan hieu: " << str << " la: " << count << endl;
	// d) Thống kê xem bao nhiêu xe có số ghế nhiều nhất
	//Dau tien tim ra so ghe nhieu nhat la bao nhieu
	int maxS = 0;
	for (int i = 0; i < N; i++)	{
		if (maxS < arr[i].seats)    maxS = arr[i].seats;
	}
	count = 0;
	for (int i = 0; i < N; i++)	{
		if (maxS == arr[i].seats)	count++;
	}
	cout << "So xe co nhieu ghe nhat la:" << count << endl;
	// e) Thống kê xem bao nhiêu xe có số năm sử dụng ít nhất
	//Ve viec giai cau (e), SV co the tu lam
	int minY = 1000;
	for (int i = 0; i < N; i++)	{
		if (minY > arr[i].yr)    minY = arr[i].yr;
	}
	count = 0;
	for (int i = 0; i < N; i++)	{
		if (minY == arr[i].yr)	count++;
	}
	cout << "So xe co so nam su dung nhat la:" << count << endl;
	return 0;
}