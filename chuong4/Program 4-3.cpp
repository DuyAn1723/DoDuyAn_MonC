#include <iostream>
using namespace std;

int main() {
    int x = 0, y = 10;

    cout << "x is " << x << " and y is " << y << endl;
    if (x > y); // Lỗi! Dấu chấm phẩy đặt sai vị trí
    cout << "x is greater than y\n"; // Luôn được thực thi.

    return 0;
}
