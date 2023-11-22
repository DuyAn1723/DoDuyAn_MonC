#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    ifstream inputFile;
    string filename;
    int number;

    // Nhập tên tệp từ người dùng.
    cout << "Nhập tên tệp: ";
    cin >> filename;

    // Mở tệp.
    inputFile.open(filename);

    // Nếu tệp mở thành công, xử lý nó.
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
