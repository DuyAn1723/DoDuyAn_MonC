#include <iostream>
using namespace std;

int main() {
    int number;
    int smallest = INT_MAX; // Giá trị nhỏ nhất ban đầu là giá trị lớn nhất có thể
    int largest = INT_MIN; // Giá trị lớn nhất ban đầu là giá trị nhỏ nhất có thể

    cout << "Nhập một loạt số nguyên (sử dụng -99 để kết thúc):\n";

    // Vòng lặp để nhập và xác định số lớn nhất và nhỏ nhất
    while (true) {
        cout << "Nhập số: ";
        cin >> number;

        if (number == -99) {
            break; // Kết thúc vòng lặp nếu người dùng nhập -99
        }

        if (number < smallest) {
            smallest = number; // Cập nhật số nhỏ nhất
        }

        if (number > largest) {
            largest = number; // Cập nhật số lớn nhất
        }
    }

    // Hiển thị số lớn nhất và số nhỏ nhất
    if (smallest == INT_MAX || largest == INT_MIN) {
        cout << "Không có số nào được nhập." << endl;
    } else {
        cout << "Số nhỏ nhất là: " << smallest << endl;
        cout << "Số lớn nhất là: " << largest << endl;
    }

    return 0;
}
