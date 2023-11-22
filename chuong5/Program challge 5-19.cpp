#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // Khởi tạo trình tạo số ngẫu nhiên
    srand(time(0));

    // Tạo một số ngẫu nhiên trong khoảng từ 1 đến 100
    int soNgauNhien = rand() % 100 + 1;

    int doan;
    int lanThucHien = 0;

    cout << "Hãy đoán số ngẫu nhiên trong khoảng từ 1 đến 100." << endl;

    do {
        cout << "Nhập số đoán của bạn: ";
        cin >> doan;
        lanThucHien++;

        if (doan < soNgauNhien) {
            cout << "Quá thấp, hãy thử lại." << endl;
        } else if (doan > soNgauNhien) {
            cout << "Quá cao, hãy thử lại." << endl;
        } else {
            cout << "Chúc mừng! Bạn đã đoán đúng số (" << soNgauNhien << ") trong " << lanThucHien << " lần thử." << endl;
        }
    } while (doan != soNgauNhien);

    return 0;
}
