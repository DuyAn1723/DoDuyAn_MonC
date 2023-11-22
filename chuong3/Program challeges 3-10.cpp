#include <iostream>
using namespace std;

int main() {
    double replacement_cost;

    // Nhập giá thành thay thế từ người dùng
    cout << "Nhập giá thành thay thế của toà nhà: ";
    cin >> replacement_cost;

    // Tính toán số tiền bảo hiểm tối thiểu (80% giá thành thay thế)
    double minimum_insurance = 0.8 * replacement_cost;

    // Hiển thị số tiền bảo hiểm tối thiểu
    cout << "Bạn nên mua ít nhất $" << minimum_insurance << " trong bảo hiểm." << endl;

    return 0;
}
