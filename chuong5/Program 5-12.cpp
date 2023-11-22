// Chương trình này lấy số liệu doanh số bán hàng hàng ngày trong một khoảng thời gian và tính tổng chúng.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int days;             // Số ngày
    double total = 0.0;   // Biến tích luỹ, khởi tạo với giá trị 0.0

    // Nhập số ngày.
    cout << "Trong bao nhiêu ngày bạn có số liệu doanh số? ";
    cin >> days;

    // Nhập doanh số bán hàng cho mỗi ngày và tích luỹ tổng.
    for (int count = 1; count <= days; count++)
    {
        double sales;
        cout << "Nhập số liệu doanh số cho ngày " << count << ": ";
        cin >> sales;
        total += sales; // Tích luỹ tổng chạy.
    }

    // Hiển thị tổng doanh số.
    cout << fixed << showpoint << setprecision(2);
    cout << "Tổng doanh số là $" << total << endl;

    return 0;
}
