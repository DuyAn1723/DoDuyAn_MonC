// Chương trình này minh họa việc sử dụng các toán tử ++ và --.
#include <iostream>
using namespace std;

int main()
{
    int num = 4; // num bắt đầu với giá trị là 4.

    // Hiển thị giá trị trong biến num.
    cout << "Biến num là " << num << endl;
    cout << "Bây giờ tôi sẽ tăng giá trị của num.\n\n";

    // Sử dụng toán tử tăng sau ++ để tăng giá trị của num.
    num++;
    cout << "Bây giờ biến num là " << num << endl;
    cout << "Tôi sẽ tăng giá trị của num lần nữa.\n\n";

    // Sử dụng toán tử tăng trước ++ để tăng giá trị của num.
    ++num;
    cout << "Bây giờ biến num là " << num << endl;
    cout << "Bây giờ tôi sẽ giảm giá trị của num.\n\n";

    // Sử dụng toán tử giảm sau -- để giảm giá trị của num.
    num--;
    cout << "Bây giờ biến num là " << num << endl;
    cout << "Tôi sẽ giảm giá trị của num lần nữa.\n\n";

    // Sử dụng toán tử giảm trước -- để giảm giá trị của num.
    --num;
    cout << "Bây giờ biến num là " << num << endl;
    return 0;
}
