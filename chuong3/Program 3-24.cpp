#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;

    cout << "Enter the length of side a: ";
    cin >> a;
    cout << "Enter the length of side b: ";
    cin >> b;

    c = sqrt(a * a + b * b);

    cout << "The length of the hypotenuse is " << fixed << setprecision(2) << c << endl;

    return 0;
}
