// chuyen len web chay duoc

// sai phan dau da nhap truc tiep

#include <iostream>

using namespace std;

typedef struct HocVien {
    string name;
    double h;
    int r;
    int c;

} HocVien;


int main()
{

    // 5 học viên xếp thành 3 hàng, 2 cột
    int R = 3;
    int C = 2;

    HocVien arr[5];
    // Cột 1
    arr[0].name = "Thao"; arr[0].h = 150; arr[0].r = 1; arr[0].c = 1;
    arr[2].name = "Nam";  arr[2].h = 180;  arr[2].r = 2;  arr[2].c = 1;
    arr[4].name = "Thu";  arr[4].h = 188;  arr[4].r = 3;  arr[4].c = 1;


    // Cột 2 
    arr[1].name = "Hop"; arr[1].h = 175; arr[1].r = 1; arr[1].c = 2;
    arr[3].name = "Wang"; arr[3].h = 1400; arr[3].r = 2; arr[3].c = 2;


    for (int i = 0; i < 5; i++) {
        cout << "Bạn " << arr[i].name << " đứng ở " << " hàng " << arr[i].r << " - cột " << arr[i].c << endl;
    }

    int X;
    cout << "Nhập vào số cột muốn kiểm tra xếp hàng: ";
    cin >> X;

    double hocVienCotX[R + 1] = { 0 };

    // Gán thông tin chiều cao của học viên thuộc cột X vào phần tử thuộc array hocVienCotX
    // Phần tử này có index = số hàng và value = chiều cao của học viên đó
    for (int i = 0; i < 5; i++) {
        if (arr[i].c == X) {
            hocVienCotX[arr[i].r] = arr[i].h;
        }
    }

    for (int i = 0; i < R + 1; i++) {
        cout << "Học viên đứng tại hàng " << i << " có chiều cao " << hocVienCotX[i] << endl;

    }

    // Kiểm tra xem có xếp từ bé đến lớn k
    bool isValid = true;
    for (int i = 1; i < R; i++) {
        if (hocVienCotX[i] > hocVienCotX[i + 1] && hocVienCotX[i + 1] != 0) {
            isValid = false;
            break;
        }
    }


    // Kết luận
    if (isValid) {
        cout << "Xếp hàng hợp lệ";
    }
    else {
        cout << " Nooooooooooooo";
    }

    return 0;
}
