#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

int main() {
    ifstream inputFile("LineUp.txt"); // Mở tệp

    if (!inputFile.is_open()) {
        cerr << "Lỗi: Không thể mở tệp 'LineUp.txt'" << endl;
        return 1;
    }

    vector<string> sinhVien;
    string ten;

    // Đọc tên từ tệp cho đến khi không còn dữ liệu
    while (getline(inputFile, ten)) {
        sinhVien.push_back(ten);
    }

    inputFile.close(); // Đóng tệp

    // Hiển thị danh sách sinh viên theo thứ tự ngược
    cout << "Danh sách sinh viên theo thứ tự ngược:" << endl;
    for (int i = sinhVien.size() - 1; i >= 0; i--) {
        cout << sinhVien[i] << endl;
    }

    return 0;
}
