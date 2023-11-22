#include <iostream>
using namespace std;

// Nguyên mẫu hàm
bool testPIN(const int [], const int [], int);

int main()
{
    const int NUM_DIGITS = 7; // Số chữ số trong một mã PIN
    int pin1[NUM_DIGITS] = {2, 4, 1, 8, 7, 9, 0}; // Tập giá trị cơ bản.
    int pin2[NUM_DIGITS] = {2, 4, 6, 8, 7, 9, 0}; // Chỉ có 1 phần tử khác với pin1.
    int pin3[NUM_DIGITS] = {1, 2, 3, 4, 5, 6, 7}; // Tất cả các phần tử đều khác với pin1.

    if (testPIN(pin1, pin2, NUM_DIGITS))
        cout << "LỖI: pin1 và pin2 báo cáo giống nhau.\n";
    else
        cout << "THÀNH CÔNG: pin1 và pin2 khác nhau.\n";

    if (testPIN(pin1, pin3, NUM_DIGITS))
        cout << "LỖI: pin1 và pin3 báo cáo giống nhau.\n";
    else
        cout << "THÀNH CÔNG: pin1 và pin3 khác nhau.\n";

    if (testPIN(pin1, pin1, NUM_DIGITS))
        cout << "THÀNH CÔNG: pin1 và pin1 báo cáo giống nhau.\n";
    else
        cout << "LỖI: pin1 và pin1 báo cáo khác nhau.\n";

    return 0;
}

//******************************************************************
// Hàm sau đây chấp nhận hai mảng số nguyên. Các mảng được so sánh. *
// Nếu chúng chứa cùng các giá trị, hàm trả về true. *
// Nếu chúng chứa các giá trị khác nhau, hàm trả về false. *
//******************************************************************

bool testPIN(const int custPIN[], const int databasePIN[], int size)
{
    for (int index = 0; index < size; index++)
    {
        if (custPIN[index] != databasePIN[index])
            return false; // Chúng ta đã tìm thấy hai giá trị khác nhau.
    }
    return true; // Nếu chúng ta đi đến đây, các giá trị giống nhau.
}
