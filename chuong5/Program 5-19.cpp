#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream inputFile;
    string name;

    inputFile.open("Friends.txt");
    cout << "Đang đọc dữ liệu từ tệp.\n";

    inputFile >> name; // Đọc tên 1 từ tệp
    cout << name << endl; // Hiển thị tên 1

    inputFile >> name; // Đọc tên 2 từ tệp
    cout << name << endl; // Hiển thị tên 2

    inputFile >> name; // Đọc tên 3 từ tệp
    cout << name << endl; // Hiển thị tên 3

    inputFile.close(); // Đóng tệp
    return 0;
}
