// Chương trình này chuyển đổi tốc độ từ 60 kph đến 130 kph (tăng 10 kph mỗi lần) sang mph.
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Hằng số cho tốc độ
    const int START_KPH = 60; // Tốc độ ban đầu
    const int END_KPH = 130;   // Tốc độ kết thúc
    const int INCREMENT = 10;  // Bước tăng tốc độ

    // Hằng số cho hệ số chuyển đổi
    const double CONVERSION_FACTOR = 0.6214;

    // Biến
    int kph;    // Lưu trữ tốc độ trong kph
    double mph; // Lưu trữ tốc độ trong mph

    // Thiết lập định dạng đầu ra số học.
    cout << fixed << showpoint << setprecision(1);

    // Hiển thị tiêu đề bảng.
    cout << "KPH\tMPH\n";
    cout << "---------------\n";

    // Hiển thị các tốc độ.
    for (kph = START_KPH; kph <= END_KPH; kph += INCREMENT)
    {
        // Tính mph
        mph = kph * CONVERSION_FACTOR;

        // Hiển thị tốc độ trong kph và mph.
        cout << kph << "\t" << mph << endl;
    }

    return 0;
}
