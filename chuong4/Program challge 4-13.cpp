#include <iostream>

int main() {
    int numBooks, points = 0;

    // Prompt the user to enter the number of books purchased
    std::cout << "Enter the number of books purchased this month: ";
    std::cin >> numBooks;

    // Calculate the points based on the number of books purchased
    if (numBooks == 0) {
        points = 0;
    } else if (numBooks == 1) {
        points = 5;
    } else if (numBooks == 2) {
        points = 15;
    } else if (numBooks == 3) {
        points = 30;
    } else if (numBooks >= 4) {
        points = 60;
    }

    // Display the points awarded
    std::cout << "Points awarded: " << points << std::endl;

    return 0;
}
