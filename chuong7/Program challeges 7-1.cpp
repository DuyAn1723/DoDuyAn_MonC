#include <iostream>
using namespace std;

int main() {
    const int size = 10;
    int values[size];

    cout << "Enter 10 values: ";
    for (int i = 0; i < size; ++i) cin >> values[i];

    int largest = values[0], smallest = values[0];
    for (int i = 1; i < size; ++i) {
        if (values[i] > largest) largest = values[i];
        if (values[i] < smallest) smallest = values[i];
    }

    cout << "Largest: " << largest << endl;
    cout << "Smallest: " << smallest << endl;

    return 0;
}