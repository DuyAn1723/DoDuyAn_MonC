#include <iostream>
#include <vector>
using namespace std;

// Function prototype
double avgVector(vector<int>);

int main()
{
    vector<int> values; // Một vector để lưu trữ giá trị
    int numValues; // Số lượng giá trị
    double average; // Để lưu giá trị trung bình

    // Nhập số lượng giá trị cần tính trung bình.
    cout << "Bạn muốn tính trung bình bao nhiêu giá trị? ";
    cin >> numValues;

    // Nhập các giá trị và lưu trữ chúng trong vector.
    for (int count = 0; count < numValues; count++)
    {
        int tempValue;
        cout << "Nhập một giá trị: ";
        cin >> tempValue;
        values.push_back(tempValue);
    }

    // Tính giá trị trung bình của các giá trị và hiển thị nó.
    average = avgVector(values);
    cout << "Giá trị trung bình: " << average << endl;

    return 0;
}

//*************************************************************
// Định nghĩa hàm avgVector. *
// Hàm này chấp nhận một vector int làm đối số. Nếu *
// vector chứa giá trị, hàm sẽ trả về giá trị trung bình của *
// những giá trị đó. Ngược lại, một thông báo lỗi sẽ được hiển thị *
// và hàm sẽ trả về 0.0. *
//*************************************************************

double avgVector(vector<int> vect)
{
    int total = 0; // biến tích lũy
    double avg; // giá trị trung bình

    if (vect.empty()) // Xác định xem vector có rỗng không
    {
        cout << "Không có giá trị để tính trung bình.\n";
        avg = 0.0;
    }
    else
    {
        for (int count = 0; count < vect.size(); count++)
            total += vect[count];
        avg = static_cast<double>(total) / vect.size();
    }

    return avg;
}
