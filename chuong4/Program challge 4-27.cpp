#include <iostream>
#include <iomanip>
#include <limits>

int getMaximumMinutes(int days) {
    if (days == 28)
        return 672;
    else if (days == 30)
        return 720;
    else if (days == 31)
        return 744;
    else
        return 0; // Invalid number of days
}

int main() {
    const double PACKAGE_A_BASE_COST = 39.99;
    const double PACKAGE_B_BASE_COST = 59.99;
    const double PACKAGE_C_COST = 69.99;

    const int PACKAGE_A_INCLUDED_MINUTES = 450;
    const int PACKAGE_B_INCLUDED_MINUTES = 900;

    const double ADDITIONAL_RATE_A = 0.45;
    const double ADDITIONAL_RATE_B = 0.40;

    char package;
    double totalAmountDue = 0.0;
    int minutesUsed;
    std::string monthName;
    int daysInMonth;

    // Display the package options
    std::cout << "Choose a subscription package (A, B, or C): ";
    std::cin >> package;

    // Input validation: Check if the user selects a valid package
    if (package != 'A' && package != 'B' && package != 'C') {
        std::cout << "Invalid choice. Please choose package A, B, or C." << std::endl;
        return 1; // Exit with an error code
    }

    // Prompt the user to enter the month (by name)
    std::cout << "Enter the name of the month: ";
    std::cin >> monthName;

    // Determine the number of days in the entered month
    if (monthName == "January" || monthName == "March" || monthName == "May" || monthName == "July" ||
        monthName == "August" || monthName == "October" || monthName == "December") {
        daysInMonth = 31;
    } else if (monthName == "April" || monthName == "June" || monthName == "September" ||
               monthName == "November") {
        daysInMonth = 30;
    } else if (monthName == "February") {
        daysInMonth = 28;
    } else {
        std::cout << "Invalid month. Please enter a valid month name." << std::endl;
        return 1; // Exit with an error code
    }

    // Display the maximum number of minutes for the entered month
    std::cout << "Maximum minutes for " << monthName << ": " << getMaximumMinutes(daysInMonth) << " minutes"
              << std::endl;

    // Prompt the user to enter the number of minutes used
    std::cout << "Enter the number of minutes used: ";
    std::cin >> minutesUsed;

    // Input validation: Check if the number of minutes is not more than the maximum for the entire month
    while (minutesUsed > getMaximumMinutes(daysInMonth)) {
        std::cout << "Invalid input: Minutes used cannot exceed the maximum for the entire month." << std::endl;
        std::cout << "Enter the number of minutes used: ";
        std::cin >> minutesUsed;

        // Clear the input buffer to handle invalid input
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    // Calculate the total amount due based on the selected package and minutes used
    switch (package) {
        case 'A':
            totalAmountDue = PACKAGE_A_BASE_COST;
            if (minutesUsed > PACKAGE_A_INCLUDED_MINUTES) {
                totalAmountDue += (minutesUsed - PACKAGE_A_INCLUDED_MINUTES) * ADDITIONAL_RATE_A;
            }
            break;
        case 'B':
            totalAmountDue = PACKAGE_B_BASE_COST;
            if (minutesUsed > PACKAGE_B_INCLUDED_MINUTES) {
                totalAmountDue += (minutesUsed - PACKAGE_B_INCLUDED_MINUTES) * ADDITIONAL_RATE_B;
            }
            break;
        case 'C':
            totalAmountDue = PACKAGE_C_COST;
            break;
    }

    // Display the total amount due
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Total amount due: $" << totalAmountDue << std::endl;

    return 0;
}
