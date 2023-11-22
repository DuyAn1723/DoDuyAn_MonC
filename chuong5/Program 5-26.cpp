#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int dvdCount = 1; // Đếm số lượng DVD
    int numDVDs;      // Số lượng DVD được thuê
    double total = 0.0; // Tổng tiền
    char current;     // Phiên bản mới, Y hoặc N

    // Nhập số lượng DVD.
    cout << "Có bao nhiêu DVD đang được thuê? ";
    cin >> numDVDs;

    // Xác định chi phí.
    do
    {
        if ((dvdCount % 3) == 0)
        {
            cout << "DVD #" << dvdCount << " được miễn phí!\n";
            continue; // Bắt đầu ngay vòng lặp tiếp theo
        }
        cout << "DVD #" << dvdCount;
        cout << " có phải là phiên bản mới? (Y/N) ";
        cin >> current;
        if (current == 'Y' || current == 'y')
            total += 3.50;
        else
            total += 2.50;
    } while (dvdCount++ < numDVDs);

    // Hiển thị tổng tiền.
    cout << fixed << showpoint << setprecision(2);
    cout << "Tổng tiền là $" << total << endl;

    return 0;
}
