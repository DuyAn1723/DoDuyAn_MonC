#include <iostream>
using namespace std;

int main() {
    int n = 10; // Điều chỉnh giá trị này để kiểm soát số hàng trong mẫu

    // Mẫu A
    cout << "Mẫu A" << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "+";
        }
        cout << " ";
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        cout << endl;
    }

    // Mẫu B
    cout << "Mẫu B" << endl;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i + 1; j++) {
            cout << "+";
        }
        cout << " ";
        for (int j = 1; j <= i - 1; j++) {
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}
