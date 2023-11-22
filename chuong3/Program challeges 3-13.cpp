#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Hệ số chuyển đổi cố định
    const double YEN_PER_DOLLAR = 98.93;
    const double EUROS_PER_DOLLAR = 0.74;

    // Biến cho số tiền đầu vào và kết quả
    double us_dollars, yen, euros;

    // Yêu cầu người dùng nhập số tiền trong đô la Mỹ
    cout << "Nhập số tiền trong đô la Mỹ: $";
    cin >> us_dollars;

    // Tính số tiền tương ứng trong yen và euro
    yen = us_dollars * YEN_PER_DOLLAR;
    euros = us_dollars * EUROS_PER_DOLLAR;

    // Hiển thị kết quả với hai số thập phân
    cout << fixed << setprecision(2);
    cout << "Số tiền tương ứng trong yen Nhật Bản: " << yen << " Yen" << endl;
    cout << "Số tiền tương ứng trong euro: " << euros << " Euro" << endl;

    return 0;
}
