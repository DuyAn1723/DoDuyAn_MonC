#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // L?y th?i gian h? th?ng hi?n t?i
    unsigned seed = time(0);

    // Gieo h?t ng?u nhiên
    srand(seed);

    // Hi?n th? ba s? ng?u nhiên trong kho?ng t? 1 ??n 100
    for (int i = 0; i < 3; i++) {
        int randomNumber = rand() % 100 + 1; // T?o s? ng?u nhiên t? 1 ??n 100
        cout << "Random number " << i + 1 << ": " << randomNumber << endl;
    }

    return 0;
}
