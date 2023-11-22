#include <iostream>
using namespace std;

int main() {
    double laiSuatHangNam, soDuBanDau;
    int soThangDaQua;

    cout << "Nhập tỷ lệ lãi suất hàng năm (ở dạng thập phân, ví dụ: 0.05 cho 5%): ";
    cin >> laiSuatHangNam;

    cout << "Nhập số dư ban đầu: ";
    cin >> soDuBanDau;

    cout << "Nhập số tháng đã trôi qua: ";
    cin >> soThangDaQua;

    double soDu = soDuBanDau;
    double tongTienGui = 0, tongTienRut = 0, tongLaiSuat = 0;

    for (int thang = 1; thang <= soThangDaQua; thang++) {
        double tienGui, tienRut;

        cout << "Tháng " << thang << endl;

        cout << "Nhập số tiền gửi vào tài khoản trong tháng này (âm để không gửi): ";
        cin >> tienGui;

        if (tienGui < 0) {
            cout << "Nhập không hợp lệ. Vui lòng nhập số tiền gửi không âm." << endl;
            thang--; // Lặp lại lần này
            continue;
        }

        cout << "Nhập số tiền rút trong tháng này (âm để không rút): ";
        cin >> tienRut;

        if (tienRut < 0) {
            cout << "Nhập không hợp lệ. Vui lòng nhập số tiền rút không âm." << endl;
            thang--; // Lặp lại lần này
            continue;
        }

        tongTienGui += tienGui;
        tongTienRut += tienRut;

        soDu = soDu + tienGui - tienRut;

        if (soDu < 0) {
            cout << "Tài khoản đã đóng do số dư âm." << endl;
            break;
        }

        double laiSuatHangThang = (laiSuatHangNam / 12) * soDu;
        soDu += laiSuatHangThang;
        tongLaiSuat += laiSuatHangThang;
    }

    cout << "Số dư cuối kỳ: $" << soDu << endl;
    cout << "Tổng số tiền gửi: $" << tongTienGui << endl;
    cout << "Tổng số tiền rút: $" << tongTienRut << endl;
    cout << "Tổng lãi suất kiếm được: $" << tongLaiSuat << endl;

    return 0;
}
