#include <iostream>
using namespace std;

void showValues(int[], int); // Khai báo hàm

int main()
{
    const int SIZE1 = 8; // Kích thước của mảng set1
    const int SIZE2 = 5; // Kích thước của mảng set2
    int set1[SIZE1] = {5, 10, 15, 20, 25, 30, 35, 40};
    int set2[SIZE2] = {2, 4, 6, 8, 10};

    // Truyền mảng set1 cho hàm showValues.
    showValues(set1, SIZE1);

    // Truyền mảng set2 cho hàm showValues.
    showValues(set2, SIZE2);

    return 0;
}

// Định nghĩa hàm showValues.
// Hàm này chấp nhận một mảng các số nguyên và
// kích thước của mảng là đối số của nó.
// Nội dung của mảng sẽ được hiển thị.
void showValues(int nums[], int size)
{
    for (int index = 0; index < size; index++)
        cout << nums[index] << " ";
    cout << endl;
}
