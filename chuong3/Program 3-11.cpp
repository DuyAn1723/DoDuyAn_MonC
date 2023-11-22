#include <iostream>
using namespace std;

int main() {
    int begInv, sold, store1, store2, store3;

    // Nh?p s? l??ng t?n ??u k? cho t?t c? c?a hàng.
    cout << "M?t tu?n tr??c, 3 c?a hàng widget m?i m?\n";
    cout << "cùng lúc v?i cùng t?n ??u k?. T?n ??u k? là gì? ";
    cin >> begInv;

    // Thi?t l?p t?n c?a m?i c?a hàng.
    store1 = store2 = store3 = begInv;

    // Nh?p s? l??ng widget ?ã bán ? c?a hàng 1.
    cout << "C?a hàng 1 ?ã bán bao nhiêu widget? ";
    cin >> sold;
    store1 -= sold; // ?i?u ch?nh t?n kho c?a hàng 1.

    // Nh?p s? l??ng widget ?ã bán ? c?a hàng 2.
    cout << "C?a hàng 2 ?ã bán bao nhiêu widget? ";
    cin >> sold;
    store2 -= sold; // ?i?u ch?nh t?n kho c?a hàng 2.

    // Nh?p s? l??ng widget ?ã bán ? c?a hàng 3.
    cout << "C?a hàng 3 ?ã bán bao nhiêu widget? ";
    cin >> sold;
    store3 -= sold; // ?i?u ch?nh t?n kho c?a hàng 3.

    // Hi?n th? t?n kho hi?n t?i c?a m?i c?a hàng.
    cout << "\nT?n kho hi?n t?i c?a m?i c?a hàng:\n";
    cout << "C?a hàng 1: " << store1 << endl;
    cout << "C?a hàng 2: " << store2 << endl;
    cout << "C?a hàng 3: " << store3 << endl;

    return 0;
}
