// Chương trình này hiển thị các số từ 1 đến 10 và bình phương của chúng.
#include <iostream>
using namespace std;

int main()
{
    const int MIN_NUMBER = 1; // Giá trị ban đầu
    const int MAX_NUMBER = 10; // Giá trị kết thúc
    int num;

    cout << "Số Bình phương của số\n";
    cout << "-------------------------\n";

    for (num = MIN_NUMBER; num <= MAX_NUMBER; num++)
        cout << num << "\t\t" << (num * num) << endl;

    return 0;
}
