#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Định nghĩa và khởi tạo một vector với 5 phần tử.
    vector<int> numbers(5);

    // Nhập giá trị cho các phần tử của vector.
    for (int &val : numbers)
    {
        cout << "Nhập một giá trị số nguyên: ";
        cin >> val;
    }

    // Hiển thị các phần tử của vector.
    cout << "Dưới đây là các giá trị bạn đã nhập:\n";
    for (int val : numbers)
        cout << val << endl;

    return 0;
}
