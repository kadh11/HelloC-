#include <iostream>

using namespace std;

typedef struct Anyname
{
    char name[20];
    double h, w;
    int t, r, c;
} HocVien;

int main()
{
  /*  int N;
    cout << "Nhap vao gia tri cua N: ";
    cin >> N;
    HocVien arr[N];

    for (int i = 0; i < N; i++)
    {
        cout << "Nhap vao thong tin ten hoc vien thu " << i + 1 << " : ";
        cin >> arr[i].name;
        cout << "\tNhap vao thong tin chieu cao hoc vien thu " << i + 1 << " : ";
        cin >> arr[i].h;
        cout << "\tNhap vao thong tin can nang hoc vien thu " << i + 1 << " : ";
        cin >> arr[i].w;
        cout << "\tNhap vao thong tin tuoi hoc vien thu " << i + 1 << " : ";
        cin >> arr[i].t;
    }

    int R, C;
    cout << "Nhap vao so hang: ";
    cin >> R;
    cout << "Nhap vao so cot: ";
    cin >> C;

    for (int i = 0; i < N; i++)
    {
        cout << "Ban hoc vien " << arr[i].name << " se dung o vi tri:" << endl;
        cout << "\t Hang: "; cin >> arr[i].r;
        cout << "\t Cot: "; cin >> arr[i].c;
    }

    int x;
    cout << "Nhap vao so x: ";
    cin >> x;

    double maxH = 0;
    for (int i = 0; i < N; i++)
    {
        if (arr[i].c == x)
        {
            if (maxH < arr[i].h) maxH = arr[i].h;
        }
    }

    cout << "Ban cao nhat cot x la: " << maxH << endl;

    double newArr[R + 1]{ 0 };
    newArr[R + 1] = 10;
    for (int i = 0; i < N; i++)                      //Tạo array mới
    {
        if (arr[i].c == x) newArr[arr[i].r] = arr[i].h;
    }

    int isValid = 1;
    for (int i = 0; i < R; i++)
    {
        if (newArr[i] > newArr[i + 1] && newArr[i + 1] != 0)
        {
            isValid = 0;
            break;
        };
    }

    if (isValid == 1) cout << "Thoa man" << endl;
    else
    {
        cout << "Khong thoa man" << endl;
    }



    return 0;*/




}
