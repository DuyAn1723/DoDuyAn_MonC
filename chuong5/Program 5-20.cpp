#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream inFile;
    int value1, value2, value3, sum;

    // Mở tệp.
    inFile.open("NumericData.txt");

    // Đọc ba số từ tệp.
    inFile >> value1;
    inFile >> value2;
    inFile >> value3;

    // Đóng tệp.
    inFile.close();

    // Tính tổng của ba số.
    sum = value1 + value2 + value3;

    // Hiển thị ba số.
    cout << "Dưới đây là các số:\n"
         << value1 << " " << value2
         << " " << value3 << endl;

    // Hiển thị tổng của ba số.
    cout << "Tổng của chúng là: " << sum << endl;

    return 0;
}
