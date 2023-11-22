#include <iostream>
using namespace std;

int main()
{
    const int NUM_EMPLOYEES = 6;
    int hours[NUM_EMPLOYEES];

    // Lấy số giờ làm việc của từng nhân viên.
    cout << "Nhập số giờ làm việc của "
         << NUM_EMPLOYEES << " nhân viên: ";
    cin >> hours[0];
    cin >> hours[1];
    cin >> hours[2];
    cin >> hours[3];
    cin >> hours[4];
    cin >> hours[5];

    // Hiển thị các giá trị trong mảng.
    cout << "Số giờ bạn đã nhập là:";
    cout << " " << hours[0];
    cout << " " << hours[1];
    cout << " " << hours[2];
    cout << " " << hours[3];
    cout << " " << hours[4];
    cout << " " << hours[5] << endl;

    return 0;
}
