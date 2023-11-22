#include <iostream>
using namespace std;

const int SIZE = 3;

// Function to check if a 2D array is a Lo Shu Magic Square
bool isLoShuMagicSquare(int square[SIZE][SIZE]) {
    int sumDiagonal1 = 0;
    int sumDiagonal2 = 0;

    // Calculate the sums of the diagonals
    for (int i = 0; i < SIZE; i++) {
        sumDiagonal1 += square[i][i];
        sumDiagonal2 += square[i][SIZE - 1 - i];
    }

    // Check if the sums of the diagonals are equal
    if (sumDiagonal1 != sumDiagonal2) {
        return false;
    }

    // Check if the sums of rows and columns are equal to the diagonal sums
    for (int i = 0; i < SIZE; i++) {
        int sumRow = 0;
        int sumColumn = 0;

        for (int j = 0; j < SIZE; j++) {
            sumRow += square[i][j];
            sumColumn += square[j][i];
        }

        if (sumRow != sumDiagonal1 || sumColumn != sumDiagonal1) {
            return false;
        }
    }

    return true;
}

int main() {
    int square[SIZE][SIZE] = {{4, 9, 2}, {3, 5, 7}, {8, 1, 6}};

    if (isLoShuMagicSquare(square)) {
        cout << "It is a Lo Shu Magic Square." << endl;
    } else {
        cout << "It is not a Lo Shu Magic Square." << endl;
    }

    return 0;
}