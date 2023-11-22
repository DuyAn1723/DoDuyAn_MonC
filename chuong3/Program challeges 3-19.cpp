#include <iostream>
#include <cmath> // Để sử dụng hàm pow
#include <iomanip> // Để sử dụng std::fixed và std::setprecision
using namespace std;

int main() {
    // Khai báo biến cho số tiền vay, lãi suất hàng tháng, số lần trả góp, và số tiền trả hàng tháng
    double so_tien_vay, lai_suat, so_lan_tra_gop, so_tien_tra_hang_thang;

    // Yêu cầu người dùng nhập số tiền vay, lãi suất hàng tháng và số lần trả góp
    cout << "Số tiền vay: $";
    cin >> so_tien_vay;

    cout << "Lãi suất hàng tháng (dạng phần trăm): ";
    cin >> lai_suat;

    cout << "Số lần trả góp: ";
    cin >> so_lan_tra_gop;

    // Chuyển lãi suất hàng tháng từ phần trăm sang định dạng thập phân
    lai_suat /= 100;

    // Tính số tiền trả hàng tháng
    so_tien_tra_hang_thang = (lai_suat * so_tien_vay) / (1 - pow(1 + lai_suat, -so_lan_tra_gop));

    // Tính tổng số tiền trả và tổng số tiền lãi
    double tong_so_tien_tra = so_tien_tra_hang_thang * so_lan_tra_gop;
    double tong_so_tien_lai = tong_so_tien_tra - so_tien_vay;

    // Hiển thị kết quả với định dạng cố định 2 chữ số thập phân
    cout << fixed << setprecision(2);

    // Hiển thị báo cáo
    cout << "Số tiền vay: $" << so_tien_vay << endl;
    cout << "Lãi suất hàng tháng: " << lai_suat * 100 << "%" << endl;
    cout << "Số lần trả góp: " << so_lan_tra_gop << endl;
    cout << "Số tiền trả hàng tháng: $" << so_tien_tra_hang_thang << endl;
    cout << "Tổng số tiền trả: $" << tong_so_tien_tra << endl;
    cout << "Tổng số tiền lãi trả: $" << tong_so_tien_lai << endl;

    return 0;
}
