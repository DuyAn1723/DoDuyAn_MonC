// Chương trình này minh họa cách sử dụng các toán tử tăng và giảm với chế độ tiền tố và hậu tố.
#include <iostream>
using namespace std;

int main()
{
    int num = 4;

    cout << num << endl;          // Hiển thị 4
    cout << num++ << endl;        // Hiển thị 4, sau đó tăng num lên 1
    cout << num << endl;          // Hiển thị 5
    cout << ++num << endl;        // Tăng num lên 1, sau đó hiển thị 6
    cout << endl;                 // Hiển thị dòng trống
    cout << num << endl;          // Hiển thị 6
    cout << num-- << endl;        // Hiển thị 6, sau đó giảm num đi 1
    cout << num << endl;          // Hiển thị 5
    cout << --num << endl;        // Giảm num đi 1, sau đó hiển thị 4

    return 0;
}
