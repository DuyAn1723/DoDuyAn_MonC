#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream inputFile;
    int number;

    // Mở tệp.
    inputFile.open("BadListOfNumbers.txt");

    // Nếu tệp mở thành công, xử lý tệp.
    if (inputFile)
    {
        // Đọc các số từ tệp và hiển thị chúng.
        while (inputFile >> number)
        {
            cout << number << endl;
        }

        // Đóng tệp.
        inputFile.close();
    }
    else
    {
        // Hiển thị thông báo lỗi.
        cout << "Lỗi khi mở tệp.\n";
    }

    return 0;
}
