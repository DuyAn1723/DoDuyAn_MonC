#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int soNgauNhien = rand() % 100 + 1;

    int doan;
    int soLanThucHien = 0;

    cout << "Hãy đoán số ngẫu nhiên trong khoảng từ 1 đến 100." << endl;

    do {
        cout << "Nhập số đoán của bạn: ";
        cin >> doan;
        soLanThucHien++;

        if (doan < soNgauNhien) {
            cout << "Quá thấp, hãy thử lại." << endl;
        } else if (doan > soNgauNhien) {
            cout << "Quá cao, hãy thử lại." << endl;
        } else {
            cout << "Chúc mừng! Bạn đã đoán đúng số (" << soNgauNhien << ") sau " << soLanThucHien << " lần đoán." << endl;
        }
    } while (doan != soNgauNhien);

    return 0;
}
