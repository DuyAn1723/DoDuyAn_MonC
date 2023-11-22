#include <iostream>

int main() {
    int month, year;

    // Prompt the user to enter the month (1-12)
    std::cout << "Enter a month (1-12): ";
    std::cin >> month;

    if (month < 1 || month > 12) {
        std::cout << "Invalid month. Please enter a month between 1 and 12." << std::endl;
        return 1;
    }

    // Prompt the user to enter the year
    std::cout << "Enter a year: ";
    std::cin >> year;

    // Check if it's a leap year based on the criteria
    bool isLeapYear = false;
    if ((year % 100 == 0 && year % 400 == 0) || (year % 100 != 0 && year % 4 == 0)) {
        isLeapYear = true;
    }

    // Calculate and display the number of days in the given month
    int daysInMonth;
    switch (month) {
        case 4:
        case 6:
        case 9:
        case 11:
            daysInMonth = 30;
            break;
        case 2:
            daysInMonth = (isLeapYear) ? 29 : 28;
            break;
        default:
            daysInMonth = 31;
            break;
    }

    std::cout << daysInMonth << " days" << std::endl;

    return 0;
}
