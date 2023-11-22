// Chương trình này tính điểm trung bình của các bài kiểm tra. Nó yêu cầu người dùng nhập số học sinh và số điểm kiểm tra cho mỗi học sinh.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int numStudents;  // Số học sinh
    int numTests;     // Số bài kiểm tra cho mỗi học sinh
    double total;     // Biến tích lũy tổng số điểm
    double average;   // Điểm trung bình

    // Thiết lập định dạng đầu ra số học.
    cout << fixed << showpoint << setprecision(1);

    // Nhập số học sinh.
    cout << "Chương trình tính điểm trung bình của các bài kiểm tra.\n";
    cout << "Có bao nhiêu học sinh có điểm? ";
    cin >> numStudents;

    // Nhập số bài kiểm tra cho mỗi học sinh.
    cout << "Mỗi học sinh có bao nhiêu bài kiểm tra? ";
    cin >> numTests;

    // Tính điểm trung bình cho từng học sinh.
    for (int student = 1; student <= numStudents; student++)
    {
        total = 0;  // Khởi tạo biến tích lũy tổng.

        for (int test = 1; test <= numTests; test++)
        {
            double score;
            cout << "Nhập điểm cho bài kiểm tra " << test << " của ";
            cout << "học sinh " << student << ": ";
            cin >> score;
            total += score;  // Tích lũy tổng điểm.
        }

        average = total / numTests;
        cout << "Điểm trung bình cho học sinh " << student;
        cout << " là " << average << ".\n\n";
    }

    return 0;
}
