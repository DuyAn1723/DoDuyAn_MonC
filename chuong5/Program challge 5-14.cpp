#include <iostream>
#include <string>
using namespace std;

int main() {
    int numStudents;

    // Nhập số lượng học sinh từ người dùng với kiểm tra đầu vào
    do {
        cout << "Nhập số lượng học sinh trong lớp (1-25): ";
        cin >> numStudents;

        if (numStudents < 1 || numStudents > 25) {
            cout << "Đầu vào không hợp lệ. Vui lòng nhập số từ 1 đến 25." << endl;
        }
    } while (numStudents < 1 || numStudents > 25);

    string firstName, firstInLine, lastInLine;

    // Vòng lặp để đọc tên của học sinh
    for (int i = 0; i < numStudents; i++) {
        cout << "Nhập tên của học sinh " << i + 1 << ": ";
        cin >> firstName;

        if (i == 0) {
            // Khởi tạo firstInLine với tên đầu tiên
            firstInLine = firstName;
            lastInLine = firstName;
        } else {
            // So sánh tên để tìm học sinh đứng đầu và đứng cuối
            if (firstName < firstInLine) {
                firstInLine = firstName;
            }
            if (firstName > lastInLine) {
                lastInLine = firstName;
            }
        }
    }

    // Hiển thị học sinh đứng đầu và học sinh đứng cuối
    cout << "Học sinh đứng đầu hàng là: " << firstInLine << endl;
    cout << "Học sinh đứng cuối hàng là: " << lastInLine << endl;

    return 0;
}
