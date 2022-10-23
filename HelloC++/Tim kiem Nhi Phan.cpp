//#include <iostream>
//#include <math.h>
//using namespace std;
//int N;
//string decToBin(int n) {// So thap phan: Decimal; so nhi phan Binary
//    string ans = "";
//    while (n > 0) {
//        ans = char(n % 2 + '0') + ans;
//        n /= 2;
//    }
//    while (ans.length() < N)
//        ans = "0" + ans;
//    return ans;
//}
//int main() {
//    cin >> N;
//    int N_2 = pow(2, N);
//    for (int i = 0; i < N_2; i++)
//        cout << decToBin(i) << endl;
//}

#include<iostream>
#include<math.h>
using namespace std;
int N; // La mang chua chuoi nhi phan
string detobi(int n) {
	string ans = "";
	while (n > 0) {
		ans = char(n % 2 + '0') + ans;
		n /= 2;
	}
	while (ans.length() < N)
		ans = "0" + ans;
	return ans;
}
int main() {
	cin >> N;
	int N_2 = pow(2, N);
	for (int i = 0; i < N_2; i++)
		cout << detobi(i) << endl;
}