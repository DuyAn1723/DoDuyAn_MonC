#include <iostream>
#include <string>
using namespace std;

int main()
{
    string planets[] = { "Mercury", "Venus", "Earth", "Mars",
                        "Jupiter", "Saturn", "Uranus",
                        "Neptune", "Pluto (a dwarf planet)" };

    cout << "Dưới đây là các hành tinh:\n";

    // Hiển thị các giá trị trong mảng.
    for (string val : planets)
        cout << val << endl;

    return 0;
}
