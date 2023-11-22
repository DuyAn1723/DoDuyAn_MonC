#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    const int ARRAY_SIZE = 10; // Kích thước của mảng
    int numbers[ARRAY_SIZE]; // Mảng với 10 phần tử
    int count = 0; // Biến đếm vòng lặp
    ifstream inputFile; // Đối tượng luồng đầu vào từ tệp

    // Mở tệp.
    inputFile.open("TenNumbers.txt");

    // Đọc các số từ tệp vào mảng.
    while (count < ARRAY_SIZE && inputFile >> numbers[count])
        count++;

    // Đóng tệp.
    inputFile.close();

    // Hiển thị các số đã đọc:
    cout << "Các số là: ";
    for (count = 0; count < ARRAY_SIZE; count++)
        cout << numbers[count] << " ";
    cout << endl;

    return 0;
}
