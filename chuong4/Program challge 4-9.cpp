#include <iostream>

int main() {
    int pennies, nickels, dimes, quarters;
    double totalValue;

    // Prompt the user to enter the number of each coin
    std::cout << "Enter the number of pennies: ";
    std::cin >> pennies;

    std::cout << "Enter the number of nickels: ";
    std::cin >> nickels;

    std::cout << "Enter the number of dimes: ";
    std::cin >> dimes;

    std::cout << "Enter the number of quarters: ";
    std::cin >> quarters;

    // Calculate the total value of the coins
    totalValue = pennies * 0.01 + nickels * 0.05 + dimes * 0.1 + quarters * 0.25;

    // Check if the total value is equal to one dollar
    if (totalValue == 1.0) {
        std::cout << "Congratulations! You've won the game by making exactly one dollar." << std::endl;
    } else if (totalValue < 1.0) {
        std::cout << "Sorry, the amount entered is less than one dollar." << std::endl;
    } else {
        std::cout << "Sorry, the amount entered is more than one dollar." << std::endl;
    }

    return 0;
}
