#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inputFile("Random.txt");

    if (!inputFile.is_open()) {
        cerr << "Lỗi: Không thể mở tệp 'Random.txt'" << endl;
        return 1;
    }

    int so;
    int dem = 0;
    int tong = 0;

    while (inputFile >> so) {
        dem++;
        tong += so;
    }

    inputFile.close();

    if (dem == 0) {
        cout << "Tệp rỗng." << endl;
    } else {
        double trungBinh = static_cast<double>(tong) / dem;

        cout << "Số lượng số trong tệp: " << dem << endl;
        cout << "Tổng của tất cả các số trong tệp: " << tong << endl;
        cout << "Trung bình của tất cả các số trong tệp: " << trungBinh << endl;
    }

    return 0;
}
