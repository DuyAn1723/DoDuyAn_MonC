// Chương trình này minh họa một vòng lặp for do người dùng điều khiển.
#include <iostream>
using namespace std;

int main()
{
    int minNumber, // Số ban đầu để tính bình phương
        maxNumber; // Số lớn nhất để tính bình phương

    // Nhập giá trị tối thiểu và tối đa để hiển thị.
    cout << "Tôi sẽ hiển thị một bảng các số và bình phương của chúng.\n"
         << "Nhập số bắt đầu: ";
    cin >> minNumber;
    cout << "Nhập số kết thúc: ";
    cin >> maxNumber;

    // Hiển thị bảng.
    cout << "Số Bình phương của số\n"
         << "-------------------------\n";

    for (int num = minNumber; num <= maxNumber; num++)
        cout << num << "\t\t" << (num * num) << endl;

    return 0;
}
