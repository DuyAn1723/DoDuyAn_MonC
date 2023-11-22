#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream outputFile; // Đối tượng luồng tệp
    int numberOfDays;   // Số ngày bán hàng
    double sales;       // Số tiền bán hàng trong một ngày

    // Nhập số ngày.
    cout << "Trong bao nhiêu ngày bạn có doanh số bán hàng? ";
    cin >> numberOfDays;

    // Mở một tệp có tên là Sales.txt.
    outputFile.open("Sales.txt");

    // Nhập doanh số bán hàng cho mỗi ngày và ghi chúng vào tệp.
    for (int count = 1; count <= numberOfDays; count++)
    {
        // Nhập doanh số bán hàng cho một ngày.
        cout << "Nhập doanh số bán hàng cho ngày thứ "
             << count << ": ";
        cin >> sales;

        // Ghi doanh số bán hàng vào tệp.
        outputFile << sales << endl;
    }

    // Đóng tệp.
    outputFile.close();
    cout << "Dữ liệu đã được ghi vào Sales.txt\n";
    return 0;
}
