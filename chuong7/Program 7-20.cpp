#include <iostream>
#include <iomanip>
using namespace std;

// Nguyên mẫu hàm
void getTestScores(double[], int);
double getTotal(const double[], int);
double getLowest(const double[], int);

int main()
{
    const int SIZE = 4; // Kích thước mảng
    double testScores[SIZE], // Mảng các điểm kiểm tra
        total, // Tổng điểm
        lowestScore, // Điểm thấp nhất
        average; // Điểm trung bình

    // Thiết lập định dạng đầu ra số học.
    cout << fixed << showpoint << setprecision(1);

    // Nhập điểm kiểm tra từ người dùng.
    getTestScores(testScores, SIZE);

    // Tính tổng điểm kiểm tra.
    total = getTotal(testScores, SIZE);

    // Lấy điểm kiểm tra thấp nhất.
    lowestScore = getLowest(testScores, SIZE);

    // Trừ điểm thấp nhất khỏi tổng.
    total -= lowestScore;

    // Tính điểm trung bình. Chia cho (SIZE - 1) vì điểm kiểm tra thấp nhất đã bị loại bỏ.
    average = total / (SIZE - 1);

    // Hiển thị điểm trung bình.
    cout << "Trung bình với điểm thấp nhất bị loại bỏ là " << average << ".\n";

    return 0;
}

// Định nghĩa hàm getTestScores
// Hàm này lấy các điểm kiểm tra từ người dùng và lưu trữ chúng trong mảng.
void getTestScores(double scores[], int size)
{
    cout << "Nhập " << size << " điểm kiểm tra:\n";
    for (int i = 0; i < size; i++)
    {
        cin >> scores[i];
    }
}

// Định nghĩa hàm getTotal
// Hàm này tính tổng của các điểm kiểm tra trong mảng.
double getTotal(const double scores[], int size)
{
    double total = 0.0;
    for (int i = 0; i < size; i++)
    {
        total += scores[i];
    }
    return total;
}

// Định nghĩa hàm getLowest
// Hàm này tìm và trả về điểm kiểm tra thấp nhất trong mảng.
double getLowest(const double scores[], int size)
{
    double lowest = scores[0];
    for (int i = 1; i < size; i++)
    {
        if (scores[i] < lowest)
        {
            lowest = scores[i];
        }
    }
    return lowest;
}
