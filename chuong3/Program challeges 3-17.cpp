#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    srand(static_cast<unsigned>(time(0));

    // Khai báo biến cho hai số ngẫu nhiên
    int so1 = rand() % 1000;
    int so2 = rand() % 1000;

    // Hiển thị bài toán cộng
    cout << "Tinh toan phep cong sau: \n";
    cout << so1 << " + " << so2 << " = ?" << endl;

    // Đợi học sinh giải quyết bài toán
    cout << "Nhan mot phim bat ky de hien thi ket qua...\n";
    cin.get();

    // Tính toán và hiển thị kết quả
    int ket_qua = so1 + so2;
    cout << "Ket qua: " << so1 << " + " << so2 << " = " << ket_qua << endl;

    return 0;
}
