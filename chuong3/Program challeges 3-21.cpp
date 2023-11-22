#include <iostream>
#include <cmath> // Sử dụng hàm pow
#include <iomanip> // Để sử dụng std::fixed và std::setprecision
using namespace std;

int main() {
    // Khai báo hằng số cho giá trị pi
    const double pi = 3.14159;

    // Khai báo biến cho đường kính và bán kính của pizza, cũng như số lát pizza và số người tham dự
    double duong_kinh, ban_kinh, so_lat_pizza;
    int so_nguoi;

    // Yêu cầu người dùng nhập số người tham dự và đường kính của pizza trong inches
    cout << "Nhập số người tham dự tiệc: ";
    cin >> so_nguoi;

    cout << "Nhập đường kính của pizza (inches): ";
    cin >> duong_kinh;

    // Tính bán kính từ đường kính
    ban_kinh = duong_kinh / 2;

    // Tính diện tích của pizza sử dụng công thức π * r^2
    double dien_tich_pizza = pi * pow(ban_kinh, 2);

    // Tính số lát pizza cần mua bằng cách chia số người cho số lát mỗi người ăn
    so_lat_pizza = so_nguoi * 4 / dien_tich_pizza;

    // Hiển thị kết quả với định dạng cố định 1 chữ số thập phân
    cout << fixed << setprecision(1);

    // Hiển thị số lát pizza cần mua
    cout << "Số lát pizza cần mua: " << so_lat_pizza << endl;

    return 0;
}
