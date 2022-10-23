// VD 14
/* Vd14: viết mã nguồn C / C++ thực hiện công việc sau :
a) Khai báo cấu trúc Point có hai trường x, y đại diện cho toạ độ với kiểu dữ liệu double
b) Yêu cầu nhập vào số N rồi tạo ra mảng có N phần tử
c) Yêu cầu nhập vào N điểm khác nhau
d) Yêu cầu nhập vào một bán kính R.Kiểm tra xem có bao nhiêu điểm nằm trong đường tròn tâm là gốc toạ độ, bán kính R
e) Kiểm tra xem trọng tâm của N điểm kia là ở đâu, và xem có bao nhiêu điểm nằm trong đường tròn tâm là gốc toạ độ, bán kính là đoạn dài từ gốc đó đến trọng tâm.
*/
#include <iostream>
#include<math.h>
//#include<cstring> // la gi
using namespace std;
// a) Khai báo cấu trúc Point có hai trường x, y đại diện cho toạ độ với kiểu dữ liệu double
typedef struct P {
	double x;
	double y;
} Point;
//b) Yêu cầu nhập vào số N rồi tạo ra mảng có N phần tử
int main() {
	int N;
	cout<<"\nNhap vao so point : ";
	cin >> N;
	Point arr[N]; // De chay duoc tren Visual studio de arr[100]/ de arr[N] van chay duoc tren mang online
	// c) Yêu cầu nhập vào N điểm khác nhau
	for (int i = 1; i < N; i++) {
		cout << "\nNhap x: ";
		cin >> arr[i].x;
		cout << "\nNhap y: ";
		cin >> arr[i].y;
	}
	// d) Yêu cầu nhập vào một bán kính R.Kiểm tra xem có bao nhiêu điểm nằm trong đường tròn tâm là gốc toạ độ, bán kính R
	double R;
	cout << "\nNhap ban kinh R: ";
	cin >> R;
	int count = 0;
	for (int i = 0; i < N; i++) {
		if ((arr[i].x) * (arr[i].x) + (arr[i].y) * (arr[i].y) <= R*R)
		{count++;}
	}
	cout << "\nDap an la: " << count << endl;
	// e) Kiểm tra xem trọng tâm của N điểm kia là ở đâu, và xem có bao nhiêu điểm nằm trong đường tròn tâm là gốc toạ độ, bán kính là đoạn dài từ gốc đó đến trọng tâm.
	double trongtam_x = 0;
	double trongtam_y = 0;
	for (int i = 0; i < N; i++) {
		trongtam_x = trongtam_x + arr[i].x;
		trongtam_y = trongtam_y + arr[i].y;
	}
	trongtam_x = trongtam_x / N;
	trongtam_y = trongtam_y / N;
	cout << "\nTrong tam la: " << trongtam_x << "," << trongtam_y << endl;
	int count_1 = 0;
	for (int i = 0; i < N; i++) {
		if ((arr[i].x) * (arr[i].x) + (arr[i].y) * (arr[i].y) <= trongtam_x * trongtam_x + trongtam_y * trongtam_y)
		{count_1++;}
	}
	cout << "\nSo diem nam trong duong tron co tam la goc toa do va ban kinh la doan thang tu goc den trong tam N diem: " << count_1 << endl;
	return 0;
}