#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double value;
    char choice;

    cout << "Nhập một số: ";
    cin >> value;
    cout << "Chương trình này sẽ tính " << value;
    cout << " lũy thừa từ 0 đến 10.\n";

    for (int count = 0; count <= 10; count++)
    {
        cout << value << " lũy thừa " << count << " là " << pow(value, count);
        cout << "\nNhập Q để thoát hoặc bất kỳ phím nào khác ";
        cout << "để tiếp tục. ";
        cin >> choice;
        if (choice == 'Q' || choice == 'q')
            break;
    }

    return 0;
}
