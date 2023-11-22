#include <iostream>
using namespace std;

int main() {
    // Khai báo các biến cho số lượng cổ phiếu mua, giá mua, tỷ lệ hoa hồng khi mua và bán
    int so_luong_mua = 1000;
    double gia_mua_per_co_phieu = 45.50;
    double ty_le_hoa_hong_mua = 0.02;
    double ty_le_hoa_hong_ban = 0.02;

    // Tính tổng giá mua cổ phiếu
    double tong_gia_mua = so_luong_mua * gia_mua_per_co_phieu;

    // Tính tiền hoa hồng khi mua
    double tien_hoa_hong_mua = tong_gia_mua * ty_le_hoa_hong_mua;

    // Khai báo biến giá bán cổ phiếu
    double gia_ban_per_co_phieu = 56.90;

    // Tính tổng giá bán cổ phiếu
    double tong_gia_ban = so_luong_mua * gia_ban_per_co_phieu;

    // Tính tiền hoa hồng khi bán
    double tien_hoa_hong_ban = tong_gia_ban * ty_le_hoa_hong_ban;

    // Tính lợi nhuận sau giao dịch
    double loi_nhuan = tong_gia_ban - tien_hoa_hong_mua - tien_hoa_hong_ban - tong_gia_mua;

    // Hiển thị thông tin
    cout << "Số tiền Joe đã mua cổ phiếu: $" << tong_gia_mua << endl;
    cout << "Tiền hoa hồng khi mua: $" << tien_hoa_hong_mua << endl;
    cout << "Số tiền Joe đã bán cổ phiếu: $" << tong_gia_ban << endl;
    cout << "Tiền hoa hồng khi bán: $" << tien_hoa_hong_ban << endl;
    cout << "Lợi nhuận sau giao dịch: $" << loi_nhuan << endl;

    return 0;
}
