#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    // Khai báo biến cho tháng, năm và tổng số tiền thu
    string thang;
    int nam;
    double tong_thu;

    // Hằng số thuế
    const double ty_le_thue_bang = 0.04;
    const double ty_le_thue_quan = 0.02;
    const double ty_le_thue_tong = 0.06;

    // Yêu cầu người dùng nhập thông tin
    cout << "Nhập tháng: ";
    getline(cin, thang);
    cout << "Nhập năm: ";
    cin >> nam;
    cout << "Nhập tổng số tiền thu (tổng số tiền thu + thuế): $";
    cin >> tong_thu;

    // Tính toán số tiền bán hàng
    double doanh_so = tong_thu / (1 + ty_le_thue_tong);

    // Tính toán thuế quận và thuế bang
    double thue_ban_hang_quan = doanh_so * ty_le_thue_quan;
    double thue_ban_hang_bang = doanh_so * ty_le_thue_bang;

    // Hiển thị báo cáo
    cout << "\nTháng: " << thang << endl;
    cout << "--------------------" << endl;
    cout << "Tổng số tiền thu: $" << fixed << setprecision(2) << tong_thu << endl;
    cout << "Số tiền bán hàng: $" << doanh_so << endl;
    cout << "Thuế bán hàng quận: $" << thue_ban_hang_quan << endl;
    cout << "Thuế bán hàng bang: $" << thue_ban_hang_bang << endl;
    cout << "Tổng thuế bán hàng: $" << thue_ban_hang_quan + thue_ban_hang_bang << endl;

    return 0;
}
