#include <iostream>
using namespace std;

int main() {
    double num1, num2, quotient;

    // Nhập số thứ nhất.
    cout << "Nhập một số: ";
    cin >> num1;

    // Nhập số thứ hai.
    cout << "Nhập một số khác: ";
    cin >> num2;

    // Nếu num2 không bằng 0, thực hiện phép chia.
    if (num2 == 0) {
        cout << "Không thể thực hiện phép chia cho 0.\n";
        cout << "Vui lòng chạy chương trình lại và nhập\n";
        cout << "một số khác 0.\n";
    } else {
        quotient = num1 / num2;
        cout << "Thương của " << num1 << " chia cho ";
        cout << num2 << " là " << quotient << ".\n";
    }

    return 0;
}
