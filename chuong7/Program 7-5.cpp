#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 3; // Hằng số cho kích thước mảng
    int values[SIZE]; // Một mảng gồm 3 số nguyên
    int count; // Biến đếm vòng lặp

    // Cố gắng lưu năm số vào mảng có ba phần tử.
    cout << "Tôi sẽ lưu 5 số vào một mảng có 3 phần tử!\n";
    for (count = 0; count < 5; count++)
        values[count] = 100;

    // Nếu chương trình vẫn chạy, hiển thị các số.
    cout << "Nếu bạn thấy thông báo này, nghĩa là chương trình\n";
    cout << "chưa bị crash! Đây là các số:\n";
    for (count = 0; count < 5; count++)
        cout << values[count] << endl;
    return 0;
}
