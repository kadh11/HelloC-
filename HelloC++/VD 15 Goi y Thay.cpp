// VD 15 Thay goi y

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

	for (int i = 0; i < N; i++)
	{
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

	if ((arr[i].r) > 1 && (arr[i].c > 1) && (arr[i].r) * (arr[i].c) < N)
	{
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
		//Ở đây ta đã biết số bạn trong một cột: tức giá trị R
		//Nói cách khác, trong một hàng dọc sẽ có tối đa R bạn
		//Khai báo 1 mảng lưu trữ danh sách các bạn của hàng dọc x.


	// g) Nhập vào số x, kiểm tra xem trong số những bạn thuộc cột x, liệu các bạn có được xếp theo thứ tự chiều cao không (bạn thấp nhất sẽ có chỉ số hàng nhỏ nhất).

		int X;
		cout << "Nhập vào số cột muốn kiểm tra xếp hàng: ";
		cin >> X;
		double hangX[R] = { 0 };
		for (int i = 0; i < N; i++)	{
			if (arr[i].c == x) {
				hangX[arr[i].r] = arr[i].h;
			}
		}
		int isValid = 1;
		for (int i = 0; i < R - 1; i++)	{
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


////câu f
//cout << ”Nhap vao cot muon tim kiem : ";
//int x;
//cin >> x;
//double maxH = 0;
//for (int i = 0; i < N; i++)
//{
//	if (arr[i].c == x)
//	{
//		if (maxH < arr[i].h)
//		{
//			maxH = arr[i].h;
//		}
//	}
//}
//cout << ”Trong cot “ << x << ” thi chieu cao cuc dai la : ” << maxH << endl;
////Ở đây ta đã biết số bạn trong một cột: tức giá trị R
////Nói cách khác, trong một hàng dọc sẽ có tối đa R bạn
////Khai báo 1 mảng lưu trữ danh sách các bạn của hàng dọc x.
//double hangX[R] = { 0 };
//for (int i = 0; i < N; i++)
//{
//	if (arr[i].c == x)
//	{
//		hangX[arr[i].r] = arr[i].h;
//		//Lưu giá trị arr[i].h vào trong mảng hangX, tại phần tử có chỉ số arr[i].r
//	}
//}
//int isValid = 1;//bằng 1 nghĩa là không bị vi phạm
//for (int i = 0; i < R - 1; i++)//trừ 1 vì ta chỉ xét đến i = R - 2
//{
//	if (hangX[i] > hangX[i + 1]
//		&& hangX[i + 1] != 0
//		)//rõ ràng mảng X chỉ có chỉ số lớn nhất là R - 1
//					//nên để (i+1) không vượt quá R -1 thì i phải cùng lắm là bằng R - 2
//	{
//		isValid = 0;
//		break; //lệnh break sẽ thoát khỏi vòng lặp
//	}
//}
////Vì sao lại phải điều kiện hangX[i+1] lại phải khác 0?
////VÌ ban đầu hangX đã được gán sao cho tất cả các phần tử đều bằng 0
////khi duyệt mảng arr, sẽ gán chiều cao của các bạn vào hangX
////Vấn đề là có thể có phần tử của hangX không được gán chiều cao. Nguyên nhân do 
////giá trị R*C có thể lớn hơn N - tức N có thể là số nguyên tố. Thật vậy nếu N = 17 thì R có 
////thể bằng 9 hoặc 6. Tức là vẫn sẽ có một hàng dọc mà không đủ số lượng bạn trong đó
//if (isValid == 0)
//{
//	cout << ”Cach sap xep hang doc “ << x << ” da vi pham yeu cau ve chieu cao"<<endl;
//}
//else {
//	cout << ”Sap xep da theo dung yeu cau chieu cao"<<endl;	
//}
