#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0) {
        cout << "Please enter a positive integer." << endl;
        return 1; // Exit the program with error code 1
    }

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    cout << "The sum of numbers from 1 to " << n << " is " << sum << endl;

    return 0;
}