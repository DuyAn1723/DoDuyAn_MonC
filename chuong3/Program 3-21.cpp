#include <iostream>
using namespace std;

int main()
{
    int numberOfPauses = 3; // S? l?n d?ng ch??ng trình
    char ch;

    for (int i = 0; i < numberOfPauses; i++) {
        cout << "This program has paused. Press Enter to continue.";
        cin.get(ch); // ??i ng??i dùng nh?n Enter
    }

    cout << "Thank you!";
    return 0;
}
