#include <iostream>
using namespace std;

int main() {
    // Khai báo biến cho từng khoản chi phí
    double khoan_tra_no, bao_hiem, xang, dau, lop, bao_duong;

    // Yêu cầu người dùng nhập chi phí hàng tháng cho mỗi khoản chi phí
    cout << "Nhap chi phi hang thang cua khoan tra no: ";
    cin >> khoan_tra_no;

    cout << "Nhap chi phi hang thang cua bao hiem: ";
    cin >> bao_hiem;

    cout << "Nhap chi phi hang thang cua xang: ";
    cin >> xang;

    cout << "Nhap chi phi hang thang cua dau: ";
    cin >> dau;

    cout << "Nhap chi phi hang thang cua lop: ";
    cin >> lop;

    cout << "Nhap chi phi hang thang cua bao duong: ";
    cin >> bao_duong;

    // Tinh toan tong chi phi hang thang va tong chi phi hang nam
    double tong_chi_phi_hang_thang = khoan_tra_no + bao_hiem + xang + dau + lop + bao_duong;
    double tong_chi_phi_hang_nam = tong_chi_phi_hang_thang * 12;

    // Hien thi ket qua
    cout << "Tong chi phi hang thang cua cac khoan chi phi: $" << tong_chi_phi_hang_thang << endl;
    cout << "Tong chi phi hang nam cua cac khoan chi phi: $" << tong_chi_phi_hang_nam << endl;

    return 0;
}
