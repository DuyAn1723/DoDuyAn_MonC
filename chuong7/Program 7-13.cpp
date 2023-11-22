#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int NUM_EMPLOYEES = 5; // Số lượng nhân viên
    int hours[NUM_EMPLOYEES]; // Mảng chứa số giờ làm việc của nhân viên
    double payrate; // Mức lương theo giờ
    double grossPay; // Tổng thu nhập

    // Nhập số giờ làm việc của từng nhân viên.
    cout << "Nhập số giờ làm việc của ";
    cout << NUM_EMPLOYEES << " nhân viên có\n";
    cout << "cùng mức lương theo giờ.\n";
    for (int index = 0; index < NUM_EMPLOYEES; index++)
    {
        cout << "Nhân viên #" << (index + 1) << ": ";
        cin >> hours[index];
    }

    // Nhập mức lương theo giờ cho tất cả nhân viên.
    cout << "Nhập mức lương theo giờ cho tất cả nhân viên: ";
    cin >> payrate;

    // Hiển thị thu nhập của từng nhân viên.
    cout << "Dưới đây là thu nhập của từng nhân viên:\n";
    cout << fixed << showpoint << setprecision(2);
    for (int index = 0; index < NUM_EMPLOYEES; index++)
    {
        grossPay = hours[index] * payrate;
        cout << "Nhân viên #" << (index + 1);
        cout << ": $" << grossPay << endl;
    }

    return 0;
}
