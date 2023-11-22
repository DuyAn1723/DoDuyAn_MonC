#include <iostream>
using namespace std;

void showValues(int[], int); // Khai báo hàm

int main()
{
    const int ARRAY_SIZE = 8;
    int numbers[ARRAY_SIZE] = {5, 10, 15, 20, 25, 30, 35, 40};

    showValues(numbers, ARRAY_SIZE);
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
