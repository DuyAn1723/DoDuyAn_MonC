#include <iostream>
#include <cmath> // Để sử dụng hàm pow
#include <iomanip> // Để sử dụng std::fixed và std::setprecision
using namespace std;

int main() {
    // Khai báo biến cho số dư ban đầu, lãi suất và số lần lãi suất được tính toán
    double so_du_ban_dau, lai_suat, so_lan_lai_suat;

    // Yêu cầu người dùng nhập số dư ban đầu, lãi suất và số lần lãi suất được tính toán
    cout << "Số dư ban đầu: $";
    cin >> so_du_ban_dau;

    cout << "Lãi suất (dạng phần trăm): ";
    cin >> lai_suat;

    cout << "Số lần lãi suất được tính toán trong một năm: ";
    cin >> so_lan_lai_suat;

    // Chuyển lãi suất từ phần trăm sang định dạng thập phân
    lai_suat /= 100;

    // Tính số tiền trong tài khoản tiết kiệm sau một năm
    double so_tien = so_du_ban_dau * pow(1 + (lai_suat / so_lan_lai_suat), so_lan_lai_suat);

    // Hiển thị kết quả với định dạng cố định 2 chữ số thập phân
    cout << fixed << setprecision(2);

    // Hiển thị báo cáo
    cout << "Lãi suất: " << lai_suat * 100 << "%" << endl;
    cout << "Số lần lãi suất được tính toán: " << so_lan_lai_suat << endl;
    cout << "Số dư ban đầu: $" << so_du_ban_dau << endl;
    cout << "Lãi suất: $" << so_tien - so_du_ban_dau << endl;
    cout << "Số tiền trong tài khoản tiết kiệm: $" << so_tien << endl;

    return 0;
}
