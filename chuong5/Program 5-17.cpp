#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream outputFile;
    int number1, number2, number3;

    // Mở tệp đầu ra.
    outputFile.open("Numbers.txt");

    // Lấy ba số từ người dùng.
    cout << "Nhập một số: ";
    cin >> number1;
    cout << "Nhập một số khác: ";
    cin >> number2;
    cout << "Một lần nữa. Nhập một số: ";
    cin >> number3;

    // Ghi các số vào tệp.
    outputFile << number1 << endl;
    outputFile << number2 << endl;
    outputFile << number3 << endl;
    cout << "Các số đã được lưu vào tệp.\n";

    // Đóng tệp
    outputFile.close();
    cout << "Hoàn thành.\n";
    return 0;
}
