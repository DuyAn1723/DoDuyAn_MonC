// Chương trình này giúp kỹ thuật viên kiểm tra nhiệt độ của một chất.
#include <iostream>
using namespace std;

int main()
{
    const double MAX_TEMP = 102.5; // Nhiệt độ tối đa
    double temperature; // Để lưu trữ nhiệt độ

    // Nhập nhiệt độ hiện tại.
    cout << "Nhập nhiệt độ theo độ Celsius của chất: ";
    cin >> temperature;

    // Khi cần thiết, hướng dẫn kỹ thuật viên
    // điều chỉnh bộ điều nhiệt.
    while (temperature > MAX_TEMP)
    {
        cout << "Nhiệt độ quá cao. Hãy giảm bộ điều nhiệt xuống và đợi 5 phút.\n";
        cout << "Sau đó, hãy đo nhiệt độ lại ở đơn vị Celsius và nhập nó vào đây: ";
        cin >> temperature;
    }

    // Nhắc kỹ thuật viên kiểm tra lại nhiệt độ
    // sau 15 phút.
    cout << "Nhiệt độ chấp nhận được.\n";
    cout << "Hãy kiểm tra lại sau 15 phút.\n";

    return 0;
}
