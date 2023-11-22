#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream inputFile;
    int number;

    // Mở tệp.
    inputFile.open("ListOfNumbers.txt");

    // Đọc các số từ tệp và hiển thị chúng.
    while (inputFile >> number)
    {
        cout << number << endl;
    }

    // Đóng tệp.
    inputFile.close();

    return 0;
}
