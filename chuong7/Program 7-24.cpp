#include <iostream>
#include <iomanip>
#include <vector> // Cần thiết để định nghĩa vector
using namespace std;

int main()
{
    const int NUM_EMPLOYEES = 5; // Số lượng nhân viên
    vector<int> hours(NUM_EMPLOYEES); // Một vector của số nguyên
    vector<double> payRate(NUM_EMPLOYEES); // Một vector của số thực
    int index; // Biến đếm vòng lặp

    // Nhập dữ liệu.
    cout << "Nhập số giờ làm việc và mức lương theo giờ cho ";
    cout << NUM_EMPLOYEES << " nhân viên.\n";
    for (index = 0; index < NUM_EMPLOYEES; index++)
    {
        cout << "Số giờ làm việc của nhân viên #" << (index + 1);
        cout << ": ";
        cin >> hours[index];
        cout << "Mức lương theo giờ cho nhân viên #";
        cout << (index + 1) << ": ";
        cin >> payRate[index];
    }

    // Hiển thị tổng thu nhập của từng nhân viên.
    cout << "\nDưới đây là tổng thu nhập của từng nhân viên:\n";
    cout << fixed << showpoint << setprecision(2);
    for (index = 0; index < NUM_EMPLOYEES; index++)
    {
        double grossPay = hours[index] * payRate[index];
        cout << "Nhân viên #" << (index + 1);
        cout << ": $" << grossPay << endl;
    }

    return 0;
}
