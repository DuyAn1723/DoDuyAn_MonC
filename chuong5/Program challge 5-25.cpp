#include <iostream>
#include <fstream>
using namespace std;

int main() {
    double laiSuatHangNam, soDuBanDau, tienGuiHangThang;
    int soThang;

    cout << "Nhập tỷ lệ lãi suất hàng năm (dưới dạng số thập phân): ";
    cin >> laiSuatHangNam;
    cout << "Nhập số dư ban đầu: ";
    cin >> soDuBanDau;
    cout << "Nhập số tiền gửi hàng tháng: ";
    cin >> tienGuiHangThang;
    cout << "Nhập số tháng: ";
    cin >> soThang;

    ofstream tệpKếtQuả("BáoCáoSốDư.txt");

    if (!tệpKếtQuả.is_open()) {
        cerr << "Lỗi: Không thể mở tệp đầu ra." << endl;
        return 1;
    }
    tệpKếtQuả << "Tháng\tSố Dư Ban Đầu\tTiền Gửi Hàng Tháng\tLãi Suất\tSố Dư Cuối Cùng" << endl;
    double soDu = soDuBanDau;
    for (int thang = 1; thang <= soThang; thang++) {
        double laiSuat = (soDu + tienGuiHangThang) * (laiSuatHangNam / 12.0);
        soDu += tienGuiHangThang + laiSuat;
        tệpKếtQuả << thang << "\t" << soDuBanDau << "\t" << tienGuiHangThang << "\t" << laiSuat << "\t" << soDu << endl;
    }

    tệpKếtQuả.close();

    cout << "Báo cáo số dư đã được ghi vào 'BáoCáoSốDư.txt'." << endl;

    return 0;
}
