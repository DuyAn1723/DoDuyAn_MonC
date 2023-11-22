#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 5;
    int numbers[SIZE];

    // Nhận giá trị từ người dùng cho mảng.
    for (int &val : numbers)
    {
        cout << "Nhập một số nguyên: ";
        cin >> val;
    }

    // Hiển thị các giá trị trong mảng.
    cout << "Dưới đây là các giá trị bạn đã nhập:\n";
    for (int val : numbers)
        cout << val << endl;

    return 0;
}
