#include <iostream>
using namespace std;

int main()
{
    const int SIZE = 7;
    int numbers[SIZE] = {1, 2, 4, 8}; // Khởi tạo 4 phần tử đầu tiên

    cout << "Dưới đây là nội dung của mảng:\n";
    for (int index = 0; index < SIZE; index++)
        cout << numbers[index] << " ";

    cout << endl;
    return 0;
}
