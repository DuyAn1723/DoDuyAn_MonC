#include <iostream>
using namespace std;

int main() {
    int doDaiCanh;

    // Yêu cầu người dùng nhập và kiểm tra tính hợp lệ của đầu vào
    do {
        cout << "Nhập một số nguyên dương không lớn hơn 15: ";
        cin >> doDaiCanh;

        if (doDaiCanh <= 0 || doDaiCanh > 15) {
            cout << "Nhập không hợp lệ. Vui lòng nhập một số nguyên dương không lớn hơn 15." << endl;
        }
    } while (doDaiCanh <= 0 || doDaiCanh > 15);

    // Hiển thị hình vuông
    for (int i = 0; i < doDaiCanh; i++) {
        for (int j = 0; j < doDaiCanh; j++) {
            cout << 'X';
        }
        cout << endl;
    }

    return 0;
}
