#include <iostream>
#include <vector>
using namespace std;

// Function prototype
void showValues(vector<int>);

int main()
{
    vector<int> values;

    // Đưa một loạt các số vào vector.
    for (int count = 0; count < 7; count++)
        values.push_back(count * 2);

    // Hiển thị các số.
    showValues(values);
    return 0;
}

//**************************************************
// Định nghĩa hàm showValues. *
// Hàm này chấp nhận một vector int làm đối số. *
// Giá trị của mỗi phần tử trong vector được hiển thị. *
//**************************************************

void showValues(vector<int> vect)
{
    for (int count = 0; count < vect.size(); count++)
        cout << vect[count] << endl;
}
