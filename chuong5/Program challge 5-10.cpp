#include <iostream>
using namespace std;

int main() {
    int numYears;
    double totalRainfall = 0.0;
    int totalMonths = 0;

    // Nhập số năm với kiểm tra đầu vào
    do {
        cout << "Nhập số năm (ít nhất 1 năm): ";
        cin >> numYears;

        if (numYears < 1) {
            cout << "Số năm không hợp lệ. Vui lòng nhập số lớn hơn hoặc bằng 1." << endl;
        }
    } while (numYears < 1);

    // Vòng lặp ngoài lặp qua các năm
    for (int year = 1; year <= numYears; year++) {
        // Vòng lặp bên trong lặp qua các tháng
        for (int month = 1; month <= 12; month++) {
            double rainfall;

            do {
                cout << "Nhập lượng mưa cho tháng " << month << " năm " << year << " (không âm): ";
                cin >> rainfall;

                if (rainfall < 0) {
                    cout << "Lượng mưa không hợp lệ. Vui lòng nhập số không âm." << endl;
                }
            } while (rainfall < 0);

            totalRainfall += rainfall;
            totalMonths++;
        }
    }

    // Tính trung bình lượng mưa và hiển thị
    double averageRainfall = totalRainfall / totalMonths;
    cout << "\nTổng số tháng: " << totalMonths << endl;
    cout << "Tổng lượng mưa: " << totalRainfall << " inches" << endl;
    cout << "Trung bình lượng mưa hàng tháng: " << averageRainfall << " inches" << endl;

    return 0;
}
