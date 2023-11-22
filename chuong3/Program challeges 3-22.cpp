#include <iostream>
#include <cmath> // Sử dụng hàm sin, cos và tan
#include <iomanip> // Sử dụng std::fixed và std::setprecision
using namespace std;

int main() {
    // Khai báo biến cho góc theo radians và các giá trị sin, cos và tan
    double goc_radians, sin_goc, cos_goc, tan_goc;

    // Yêu cầu người dùng nhập góc theo radians
    cout << "Nhập góc theo radians: ";
    cin >> goc_radians;

    // Tính giá trị sin, cos và tan của góc
    sin_goc = sin(goc_radians);
    cos_goc = cos(goc_radians);
    tan_goc = tan(goc_radians);

    // Hiển thị kết quả với định dạng cố định 4 chữ số thập phân
    cout << fixed << setprecision(4);

    // Hiển thị giá trị sin, cos và tan của góc
    cout << "sin(" << goc_radians << ") = " << sin_goc << endl;
    cout << "cos(" << goc_radians << ") = " << cos_goc << endl;
    cout << "tan(" << goc_radians << ") = " << tan_goc << endl;

    return 0;
}
