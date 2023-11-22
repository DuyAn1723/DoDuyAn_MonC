#include <iostream>
#include <cmath> // Sử dụng hàm pow
#include <iomanip> // Để sử dụng std::fixed và std::setprecision
using namespace std;

int main() {
    // Khai báo hằng số cho giá trị pi
    const double pi = 3.14159;

    // Khai báo biến cho đường kính và bán kính của pizza, cũng như số lát pizza
    double duong_kinh, ban_kinh, so_lat_pizza;

    // Yêu cầu người dùng nhập đường kính của pizza trong inches
    cout << "Nhập đường kính của pizza (inches): ";
    cin >> duong_kinh;

    // Tính bán kính từ đường kính
    ban_kinh = duong_kinh / 2;

    // Tính diện tích của pizza sử dụng công thức π * r^2
    double dien_tich_pizza = pi * pow(ban_kinh, 2);

    // Tính số lát pizza bằng cách chia diện tích pizza cho diện tích của một lát
    so_lat_pizza = dien_tich_pizza / 14.125;

    // Hiển thị kết quả với định dạng cố định 1 chữ số thập phân
    cout << fixed << setprecision(1);

    // Hiển thị số lát pizza
    cout << "Số lát pizza có thể cắt: " << so_lat_pizza << endl;

    return 0;
}
