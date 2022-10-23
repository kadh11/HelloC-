/*
Vd15: Viết mã nguồn C/C++ thực hiện các công việc sau:
a) Khai báo cấu trúc HocVien với các thông tin về tên, chiều cao (h kiểu double), cân nặng (w kiểu double), và tổ (t kiểu int), chỉ số hàng (r kiểu int), chỉ số cột (c kiểu int)
b) Yêu cầu người dùng nhập vào số N, đại diện cho số lượng học viên của lớp. Sau đó khởi tạo mảng arr[N]
c) Yêu cầu người dùng nhập vào thông tin của N học viên đó (trừ thông tin về r và c)
d) Mỗi lớp phải lên danh sách xếp hàng của lớp đó. Yêu cầu nhập vào số R, C đại diện cho số hàng và số cột của các bạn khi xếp hàng.
	Giả sử rằng người dùng luôn nhập được sao cho tích R*C là số bé nhất mà còn lớn hơn N
e) Hãy gán lại thông tin sao cho các bạn đều được xếp vào hàng và cột.
f) Nhập vào số x, kiểm tra xem trong số những bạn thuộc cột x thì bạn cao nhất là có chiều cao bao nhiêu
g) Nhập vào số x, kiểm tra xem trong số những bạn thuộc cột x, liệu các bạn có được xếp theo thứ tự chiều cao không (bạn thấp nhất sẽ có chỉ số hàng nhỏ nhất).
*/

// a Khai báo cấu trúc HocVien với các thông tin về tên, chiều cao (h kiểu double), cân nặng (w kiểu double), và tổ (t kiểu int), chỉ số hàng (r kiểu int), chỉ số cột (c kiểu int)

#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
// a) Khai báo cấu trúc HocVien với các thông tin về tên, chiều cao (h kiểu double), cân nặng (w kiểu double), và tổ (t kiểu int), chỉ số hàng (r kiểu int), chỉ số cột (c kiểu int)

typedef struct HocVien {
	char name[100];
	double h;
	double w;
	int t;
	int r;
	int c;
} HV;

// b Yêu cầu người dùng nhập vào số N, đại diện cho số lượng học viên của lớp. Sau đó khởi tạo mảng arr[N]

int main() {
	int N;
	cout << "Nhap vao so nguyen N: ";
	cin >> N;
	HV arr[N];

// c) Yêu cầu người dùng nhập vào thông tin của N học viên đó (trừ thông tin về r và c) thông tin về tên, chiều cao (h kiểu double), cân nặng (w kiểu double), và tổ (t kiểu int)

	for (int i = 0; i < N; i++)	{
		cout << "\nNhap vao thong tin hoc vien " << (i + 1) << ":";
		cout << "\nTen hoc vien: "; cin >> arr[i].name;
		cout << "\nChieu cao: "; cin >> arr[i].h;
		cout << "\nCan nang:"; cin >> arr[i].w;
		cout << "\nTo:"; cin >> arr[i].t;
	}

	/* d) Mỗi lớp phải lên danh sách xếp hàng của lớp đó.Yêu cầu nhập vào số R, C đại diện cho số hàng và số cột của các bạn khi xếp hàng.
		Giả sử rằng người dùng luôn nhập được sao cho tích R*C là số bé nhất mà còn lớn hơn N*/

	cout << "\n Nhap vao so hang so cot: ";
	cout << "\tHang: ";
	cin >> arr[i].r;
	cout << "\tCot: ";
	cin >> arr[i].c;

	// e) Hãy gán lại thông tin sao cho các bạn đều được xếp vào hàng và cột.
		// chỉ số hàng (r kiểu int), chỉ số cột (c kiểu int)

	if ((arr[i].r) > 1 && (arr[i].c > 1) && (arr[i].r) * (arr[i].c) < N) {
		cout << "\n Nhap vao so hang so cot: ";
		cout << "\tHang: ";
		cin >> arr[i].r;
		cout << "\tCot: ";
		cin >> arr[i].c;
	}
	else
		cout << "\nNhap lai so hang, so cot: ";

// f) Nhập vào số x, kiểm tra xem trong số những bạn thuộc cột x thì bạn cao nhất là có chiều cao bao nhiêu

	int x;
	cout << "Nhap vao cot muon kiem tra: ";
	cin >> x;
	double maxH = 0;
	for (int i = 0; i < N; i++) {
		if (arr[i].c == x)
		{
			if (maxH < arr[i].h) {
				{
					maxH = arr[i].h;
				}
			}
		}
		cout << "\nTrong cot: " << x << "Thi ban cao nhat la: " << maxH << endl;
	
// g) Nhập vào số x, kiểm tra xem trong số những bạn thuộc cột x, liệu các bạn có được xếp theo thứ tự chiều cao không (bạn thấp nhất sẽ có chỉ số hàng nhỏ nhất).

		int X;
		cout << "Nhập vào số cột muốn kiểm tra xếp hàng: ";
		cin >> X;
		double hangX[R] = { 0 };
		for (int i = 0; i < N; i++) {
			if (arr[i].c == x) {
				hangX[arr[i].r] = arr[i].h;
			}
		}
		int isValid = 1;
		for (int i = 0; i < R - 1; i++) {
			if (hangX[i] > hangX[i + 1] && hangX[i + 1] != 0) {
				isValid = 0;
				break;
			}
		}
		if (isValid == 0) {
			cout << "\nCach sap xep hang doc" << x << "Da vi pham ve chieu cao" << endl;
		}
		else
			cout << "\nSap xep da dung cac yeu cau chieu cao" << endl;
	}



























//// VD 13
///* Vd13: viết mã nguồn C / C++ thực hiện các công việc sau:
//a) Khai báo thông tin về cầu thủ : tên(name kiểu mảng char), tuổi(age kiểu int), số bàn thắng(g kiểu int), vị trí(pos kiểu mảng char), câu lạc bộ(clb kiểu mảng char)
//b) Nhập vào số N là số lượng các cầu thủ được gọi lên tập trung trong đội tuyển quốc gia.Từ đó tạo ra mảng arr có N phần tử là cầu thủ
//c) Yêu cầu nhập vào tên câu lạc bộ và kiểm tra xem có bao nhiêu cầu thủ thuộc câu lạc bộ đó
//d) In ra độ tuổi trung bình của các cầu thủ
//e) Trong các cầu thủ đó, bao nhiêu cầu thủ có thể đá ở đội U23, U19, U20 ? */
//
//#include<iostream>
//#include<stdlib.h>
//#include<string.h>
//using namespace std;
//
//// a) Khai báo thông tin về cầu thủ : tên(name kiểu mảng char), tuổi(age kiểu int), số bàn thắng(g kiểu int), vị trí(pos kiểu mảng char), câu lạc bộ(clb kiểu mảng char)
//
//typedef struct Player {
//	char name[100];
//	int age;
//	int g;
//	char pos[10];
//	char club[100];
//} Player;
//
//// b) Nhập vào số N là số lượng các cầu thủ được gọi lên tập trung trong đội tuyển quốc gia. Từ đó tạo ra mảng arr có N phần tử là cầu thủ
//
//int main() {
//	int N;
//	cout << "So cau thu duoc tap trung la: ";
//	cin >> N;
//	Player team[100]; // De 100 thi chuong trinh chay duoc tren Visual Studio/ De N thi chay duoc tren ưeb
//
//// c) Yêu cầu nhập vào tên câu lạc bộ và kiểm tra xem có bao nhiêu cầu thủ thuộc câu lạc bộ đó
//
//	for (int i = 0; i < N; i++) {
//		cout << "Ten cau thu" << (i + 1) << ":";
//		cin >> team[i].name;
//		cout << "\tTuoi cau thu: ";
//		cin >> team[i].age;
//		cout << "\tSo ban thang: ";
//		cin >> team[i].g;
//		cout << "Vi tri: ";
//		cin >> team[i].pos;
//		cout << "Cau lac bo: ";
//		cin >> team[i].club;
//	}
//	char clb[100];
//	cout << "Ban can tim kiem cau bo nao? ";
//	cin >> clb;
//	int count = 0;
//	for (int i = 0; i < N; i++) {
//		if (strcmp(team[i].club, clb) == 0) {
//			count++;
//		}
//	}
//	cout << "So cau thu cau lac bo " << clb << " la: " << count << endl;
//
//	// d) In ra độ tuổi trung bình của các cầu thủ
//	// e) Trong các cầu thủ đó, bao nhiêu cầu thủ có thể đá ở đội U23, U19, U20 ? */
//
//	float sum = 0;
//	int countU20 = 0;
//	int countU23 = 0;
//	int countU19 = 0;
//
//	for (int i = 0; i < N; i++) {
//		sum = sum + team[i].age;
//		if (team[i].age < 23) countU23++;
//		if (team[i].age < 20) countU20++;
//		if (team[i].age < 19) countU19++;
//	}
//	cout << "Do tuoi trung binh la: " << sum / N << endl;
//	cout << "So cau thu thuoc nhom U23 la: " << countU23 << endl;
//	cout << "So cau thu thuoc nhom U20 la: " << countU20 << endl;
//	cout << "So cau thu thuoc nhom U19 la: " << countU19 << endl;
//	return 0;
//}


///*
//Vd12: viết chương trình C/C++ thực hiện các công việc sau:
//a) Khai báo cấu trúc đại diện cho xe: tên nhãn hiệu (name), mã lực (power kiểu int), số ghế ngồi (seats kiểu int), số năm sử dụng (yr kiểu int)
//b) Khai báo biến N kiểu nguyên, yêu cầu nhập vào từ bàn phím và từ đó tạo ra mảng N xe
//c) Yêu cầu nhập vào một nhãn hiệu và kiểm tra xem có bao nhiêu xe thuộc nhãn hiệu đó.
//	Gợi ý dùng hàm strcmp(const char *, const char *) để xem hai xâu có bằng nhau hay không? Nếu có thì hàm kia sẽ trả về 0
//d) Thống kê xem bao nhiêu xe có số ghế nhiều nhất
//e) Thống kê xem bao nhiêu xe có số năm sử dụng ít nhất
//*/
//
//#include<iostream>
//#include<stdlib.h>
//#include<string.h>
//using namespace std;
//
//// a) Khai báo cấu trúc đại diện cho xe: tên nhãn hiệu (name), mã lực (power kiểu int), số ghế ngồi (seats kiểu int), số năm sử dụng (yr kiểu int)
//
//typedef struct Car {
//	char name[100];
//	int power;
//	int seats;
//	int yr;
//} Car;
//
//// b) Khai báo biến N kiểu nguyên, yêu cầu nhập vào từ bàn phím và từ đó tạo ra mảng N xe
//
//int main() {
//	int N;
//	cout << "Nhap vao so nguyen N: ";
//	cin >> N;
//	Car arr[100];
//	for (int i = 0; i < N; i++) {
//		cout << "Nhap vao thong tin xe thu " << (i + 1) << ":";
//		cout << "Nhan hieu cua xe: "; cin >> arr[i].name;
//		cout << "Ma luc cua xe: "; cin >> arr[i].power;
//		cout << "So ghe cua xe:"; cin >> arr[i].seats;
//		cout << "Nam su dung cua xe:"; cin >> arr[i].yr;
//	}
//	// c) Yêu cầu nhập vào một nhãn hiệu và kiểm tra xem có bao nhiêu xe thuộc nhãn hiệu đó.
//	// Gợi ý dùng hàm strcmp(const char*, const char*) để xem hai xâu có bằng nhau hay không ? Nếu có thì hàm kia sẽ trả về 0
//
//	char str[100];
//	cout << "Ban muon tim kiem nhan hieu nao: "; cin >> str;
//	int count = 0;
//	for (int i = 0; i < N; i++) {
//		if (strcmp(arr[i].name, str) == 0) { //bang 0 khi 2 xau giong het nhau
//			count++;
//		}
//	}
//	cout << "So xe cua nhan hieu: " << str << " la: " << count << endl;
//
//	// d) Thống kê xem bao nhiêu xe có số ghế nhiều nhất
//	//Dau tien tim ra so ghe nhieu nhat la bao nhieu
//
//	int maxS = 0;
//	for (int i = 0; i < N; i++) {
//		if (maxS < arr[i].seats)    maxS = arr[i].seats;
//	}
//	count = 0;
//	for (int i = 0; i < N; i++) {
//		if (maxS == arr[i].seats)	count++;
//	}
//	cout << "So xe co nhieu ghe nhat la:" << count << endl;
//
//	// e) Thống kê xem bao nhiêu xe có số năm sử dụng ít nhất
//	//Ve viec giai cau (e), SV co the tu lam
//
//	int minY = 1000;
//	for (int i = 0; i < N; i++) {
//		if (minY > arr[i].yr)    minY = arr[i].yr;
//	}
//	count = 0;
//	for (int i = 0; i < N; i++) {
//		if (minY == arr[i].yr)	count++;
//	}
//	cout << "So xe co so nam su dung nhat la:" << count << endl;
//	return 0;
//}

