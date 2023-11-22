#include <iostream>
using namespace std;

int main() {
    // Hiển thị tiêu đề bảng
    cout << "Celsius  Fahrenheit" << endl;
    cout << "------------------" << endl;

    // Vòng lặp qua nhiệt độ Celsius từ 0 đến 20
    for (int celsius = 0; celsius <= 20; celsius++) {
        // Chuyển đổi Celsius sang Fahrenheit
        double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

        // Hiển thị nhiệt độ trong bảng
        cout << celsius << "\t  " << fahrenheit << endl;
    }

    return 0;
}
