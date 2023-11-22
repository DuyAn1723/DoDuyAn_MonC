#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    const int ARRAY_SIZE = 100; // Kích thước mảng
    int numbers[ARRAY_SIZE]; // Mảng có 100 phần tử
    int count = 0; // Biến đếm vòng lặp
    ifstream inputFile; // Đối tượng luồng đọc từ tệp

    inputFile.open("numbers.txt"); // Mở tệp.

    // Đọc các số từ tệp vào mảng.
    // Sau khi vòng lặp này thực thi, biến đếm sẽ chứa
    // số lượng giá trị được lưu trữ trong mảng.
    while (count < ARRAY_SIZE && inputFile >> numbers[count])
        count++;

    // Đóng tệp.
    inputFile.close();

    // Hiển thị các số đã đọc.
    cout << "Các số là: ";
    for (int index = 0; index < count; index++)
        cout << numbers[index] << " ";
    cout << endl;
    return 0;
}
