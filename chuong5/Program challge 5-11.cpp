#include <iostream>
using namespace std;

int main() {
    int startingPopulation;
    double dailyIncreasePercentage;
    int numberOfDays;

    // Nhập thông tin với kiểm tra đầu vào
    do {
        cout << "Nhập số lượng hữu cơ ban đầu (ít nhất 2): ";
        cin >> startingPopulation;

        if (startingPopulation < 2) {
            cout << "Số lượng hữu cơ ban đầu không hợp lệ. Vui lòng nhập số lớn hơn hoặc bằng 2." << endl;
        }
    } while (startingPopulation < 2);

    do {
        cout << "Nhập tỷ lệ tăng dân số hàng ngày (dưới dạng phần trăm, không âm): ";
        cin >> dailyIncreasePercentage;

        if (dailyIncreasePercentage < 0) {
            cout << "Tỷ lệ tăng dân số hàng ngày không hợp lệ. Vui lòng nhập số không âm." << endl;
        }
    } while (dailyIncreasePercentage < 0);

    do {
        cout << "Nhập số ngày mà hữu cơ sẽ tăng (ít nhất 1): ";
        cin >> numberOfDays;

        if (numberOfDays < 1) {
            cout << "Số ngày phải ít nhất là 1. Vui lòng nhập số lớn hơn hoặc bằng 1." << endl;
        }
    } while (numberOfDays < 1);

    // Hiển thị kích thước dân số hàng ngày
    cout << "\nKích thước dân số hàng ngày:\n";
    for (int day = 1; day <= numberOfDays; day++) {
        cout << "Ngày " << day << ": " << startingPopulation << " hữu cơ\n";
        startingPopulation += startingPopulation * (dailyIncreasePercentage / 100);
    }

    return 0;
}
