#include <iostream>
using namespace std;

int main() {
    int number = 65;

    // Hi?n th? giá tr? c?a bi?n number.
    cout << number << endl;

    // Hi?n th? giá tr? c?a bi?n number sau khi chuy?n ??i
    // thành ki?u char b?ng bi?u th?c ép ki?u.
    cout << static_cast<char>(number) << endl;

    return 0;
}
