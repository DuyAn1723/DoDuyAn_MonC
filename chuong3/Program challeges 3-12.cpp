#include <iostream>
using namespace std;

int main() {
    // Khai báo biến cho nhiệt độ Celsius và Fahrenheit
    double celsius, fahrenheit;

    // Yêu cầu người dùng nhập nhiệt độ Celsius
    cout << "Nhap nhiet do Celsius: ";
    cin >> celsius;

    // Tính toán nhiệt độ Fahrenheit
    fahrenheit = (9.0 / 5) * celsius + 32;

    // Hiển thị nhiệt độ Fahrenheit
    cout << "Nhiệt do Fahrenheit tuong ung la: " << fahrenheit << " do Fahrenheit" << endl;

    return 0;
}
