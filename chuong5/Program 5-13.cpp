// This program calculates the total number of points a soccer team has earned over a series of games.
// The user enters a series of point values, then -1 when finished.
#include <iostream>
using namespace std;

int main()
{
    int game = 1;   // Biến đếm số trận đấu
    int points;     // Lưu trữ số điểm
    int total = 0;  // Biến tích lũy tổng số điểm

    cout << "Nhập số điểm mà đội bóng của bạn đã kiếm được\n";
    cout << "trong mùa giải, sau đó nhập -1 khi hoàn thành.\n\n";
    cout << "Nhập số điểm cho trận đấu thứ " << game << ": ";
    cin >> points;

    while (points != -1)
    {
        total += points;  // Tích lũy tổng số điểm
        game++;
        cout << "Nhập số điểm cho trận đấu thứ " << game << ": ";
        cin >> points;
    }

    cout << "\nTổng số điểm là " << total << endl;
    return 0;
}
