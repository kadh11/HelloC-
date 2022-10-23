// VD 13
/* Vd13: viết mã nguồn C / C++ thực hiện các công việc sau:
a) Khai báo thông tin về cầu thủ : tên(name kiểu mảng char), tuổi(age kiểu int), số bàn thắng(g kiểu int), vị trí(pos kiểu mảng char), câu lạc bộ(clb kiểu mảng char)
b) Nhập vào số N là số lượng các cầu thủ được gọi lên tập trung trong đội tuyển quốc gia.Từ đó tạo ra mảng arr có N phần tử là cầu thủ
c) Yêu cầu nhập vào tên câu lạc bộ và kiểm tra xem có bao nhiêu cầu thủ thuộc câu lạc bộ đó
d) In ra độ tuổi trung bình của các cầu thủ
e) Trong các cầu thủ đó, bao nhiêu cầu thủ có thể đá ở đội U23, U19, U20 ? */

#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
// a) Khai báo thông tin về cầu thủ : tên(name kiểu mảng char), tuổi(age kiểu int), số bàn thắng(g kiểu int), vị trí(pos kiểu mảng char), câu lạc bộ(clb kiểu mảng char)
typedef struct Player {
	char name[100];
	int age;
	int g;
	char pos[10];
	char club[100];
} Player;

// b) Nhập vào số N là số lượng các cầu thủ được gọi lên tập trung trong đội tuyển quốc gia. Từ đó tạo ra mảng arr có N phần tử là cầu thủ
int main () {
	int N;
	cout << "So cau thu duoc tap trung la: ";
	cin >> N;
	Player team[100]; //

// c) Yêu cầu nhập vào tên câu lạc bộ và kiểm tra xem có bao nhiêu cầu thủ thuộc câu lạc bộ đó
	for (int i = 0; i < N; i++)	{
		cout << "Ten cau thu" << (i + 1) << ":";
		cin >> team[i].name;
		cout << "\tTuoi cau thu: ";
		cin >> team[i].age;
		cout << "\tSo ban thang: ";
		cin >> team[i].g;
		cout << "Vi tri: ";
		cin >> team[i].pos;
		cout << "Cau lac bo: ";
		cin >> team[i].club;
	}
	char clb[100];
	cout << "Ban can tim kiem cau bo nao? ";
	cin >> clb;
	int count = 0;
	for (int i = 0; i < N; i++) {
		if (strcmp(team[i].club, clb) == 0) {
			count++;
		}
	}
	cout << "So cau thu cau lac bo " << clb << " la: " << count << endl;



	float sum = 0;
	int countU20 = 0;
	int countU23 = 0;
	int countU19 = 0;
	
	for (int i = 0; i < N; i++) {
		sum = sum + team[i].age;
		if (team[i].age < 23) countU23++;
		if (team[i].age < 20) countU20++;
		if (team[i].age < 19) countU19++;
	}
	cout << "Do tuoi trung binh la: " << sum / N << endl;
	cout << "So cau thu thuoc nhom U23 la: " << countU23 << endl;
	cout << "So cau thu thuoc nhom U20 la: " << countU20 << endl;
	cout << "So cau thu thuoc nhom U19 la: " << countU19 << endl;

	// d) In ra độ tuổi trung bình của các cầu thủ
	// e) Trong các cầu thủ đó, bao nhiêu cầu thủ có thể đá ở đội U23, U19, U20?

	return 0;
}
