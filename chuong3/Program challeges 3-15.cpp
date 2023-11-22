#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Hằng số cho giá trị đánh giá và thuế bất động sản
    const double ty_le_danh_gia = 0.6;
    const double ty_le_thue = 0.75;

    // Biến cho giá trị thực tế và thuế bất động sản
    double gia_tri_thuc_te, gia_tri_danh_gia, thue_bat_dong_san;

    // Yêu cầu người dùng nhập giá trị thực tế của bất động sản
    cout << "Nhập giá trị thực tế của bất động sản: $";
    cin >> gia_tri_thuc_te;

    // Tính giá trị đánh giá và thuế bất động sản
    gia_tri_danh_gia = gia_tri_thuc_te * ty_le_danh_gia;
    thue_bat_dong_san = (gia_tri_danh_gia / 100) * ty_le_thue;

    // Hiển thị giá trị đánh giá và thuế bất động sản
    cout << "Giá trị đánh giá của bất động sản: $" << fixed << setprecision(2) << gia_tri_danh_gia << endl;
    cout << "Thuế bất động sản: $" << fixed << setprecision(2) << thue_bat_dong_san << endl;

    return 0;
}

