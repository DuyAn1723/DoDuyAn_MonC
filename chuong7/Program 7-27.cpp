#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
    vector<int> hours; // hours là một vector rỗng
    vector<double> payRate; // payRate là một vector rỗng
    int numEmployees; // Số lượng nhân viên
    int index; // Biến đếm vòng lặp

    // Nhập số lượng nhân viên.
    cout << "Bạn có bao nhiêu nhân viên? ";
    cin >> numEmployees;

    // Nhập dữ liệu về lương.
    cout << "Nhập số giờ làm việc và mức lương theo giờ cho " << numEmployees;
    cout << " nhân viên.\n";
    for (index = 0; index < numEmployees; index++)
    {
        int tempHours; // Để lưu trữ số giờ làm việc
        double tempRate; // Để lưu trữ mức lương theo giờ
        cout << "Số giờ làm việc của nhân viên #" << (index + 1);
        cout << ": ";
        cin >> tempHours;
        hours.push_back(tempHours); // Thêm một phần tử vào vector hours
        cout << "Mức lương theo giờ cho nhân viên #";
        cout << (index + 1) << ": ";
        cin >> tempRate;
        payRate.push_back(tempRate); // Thêm một phần tử vào vector payRate
    }

    // Hiển thị tổng thu nhập của từng nhân viên.
    cout << "Dưới đây là tổng thu nhập của từng nhân viên:\n";
    cout << fixed << showpoint << setprecision(2);
    for (index = 0; index < numEmployees; index++)
    {
        double grossPay = hours[index] * payRate[index];
        cout << "Nhân viên #" << (index + 1);
        cout << ": $" << grossPay << endl;
    }

    return 0;
}
