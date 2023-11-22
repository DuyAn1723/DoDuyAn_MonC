#include <iostream>
using namespace std;

// Khai báo nguyên mẫu hàm
void doubleArray(int[], int);
void showValues(int[], int);

int main()
{
    const int ARRAY_SIZE = 7;
    int set[ARRAY_SIZE] = {1, 2, 3, 4, 5, 6, 7};

    // Hiển thị giá trị ban đầu của mảng.
    cout << "Các giá trị trong mảng là:\n";
    showValues(set, ARRAY_SIZE);

    // Gấp đôi các giá trị trong mảng.
    doubleArray(set, ARRAY_SIZE);

    // Hiển thị các giá trị sau khi gọi hàm doubleArray.
    cout << "Sau khi gọi hàm doubleArray, các giá trị là:\n";
    showValues(set, ARRAY_SIZE);

    return 0;
}

// Định nghĩa hàm doubleArray
// Hàm này gấp đôi giá trị của mỗi phần tử trong mảng nums.
void doubleArray(int nums[], int size)
{
    for (int index = 0; index < size; index++)
    {
        nums[index] *= 2;
    }
}

// Định nghĩa hàm showValues.
// Hàm này nhận một mảng số nguyên và kích thước của mảng
// và hiển thị nội dung của mảng.
void showValues(int nums[], int size)
{
    for (int index = 0; index < size; index++)
    {
        cout << nums[index] << " ";
    }
    cout << endl;
}
