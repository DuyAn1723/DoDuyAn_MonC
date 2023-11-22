#include <iostream>
using namespace std;

void displayNumbersGreaterThanN(int arr[], int size, int n) {
    cout << "Numbers greater than " << n << ": ";
    for (int i = 0; i < size; ++i) {
        if (arr[i] > n) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    const int SIZE = 10;
    int numbers[SIZE];
    int n;

    cout << "Enter 10 numbers:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cin >> numbers[i];
    }

    cout << "Enter a number (n): ";
    cin >> n;

    displayNumbersGreaterThanN(numbers, SIZE, n);

    return 0;
}