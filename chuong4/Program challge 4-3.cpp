#include <iostream>

int main() {
    int month, day, year;

    // Prompt the user to enter the month, day, and year
    std::cout << "Enter the month (numeric form): ";
    std::cin >> month;

    std::cout << "Enter the day: ";
    std::cin >> day;

    std::cout << "Enter the two-digit year: ";
    std::cin >> year;

    // Check if the month times the day is equal to the year
    if (month * day == year) {
        std::cout << "The date is magic!" << std::endl;
    } else {
        std::cout << "The date is not magic." << std::endl;
    }

    return 0;
}
