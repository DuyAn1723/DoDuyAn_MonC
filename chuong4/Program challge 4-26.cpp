#include <iostream>
#include <iomanip>

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

    // Display the package options
    std::cout << "Choose a subscription package (A, B, or C): ";
    std::cin >> package;

    // Input validation: Check if the user selects a valid package
    if (package != 'A' && package != 'B' && package != 'C') {
        std::cout << "Invalid choice. Please choose package A, B, or C." << std::endl;
        return 1; // Exit with an error code
    }

    // Prompt the user to enter the number of minutes used
    std::cout << "Enter the number of minutes used: ";
    std::cin >> minutesUsed;

    // Calculate the total amount due based on the selected package and minutes used
    switch (package) {
        case 'A':
            totalAmountDue = PACKAGE_A_BASE_COST;
            if (minutesUsed > PACKAGE_A_INCLUDED_MINUTES) {
                totalAmountDue += (minutesUsed - PACKAGE_A_INCLUDED_MINUTES) * ADDITIONAL_RATE_A;
            }

            // Calculate potential savings for Package A customers
            double savingsB = PACKAGE_B_BASE_COST + (minutesUsed > PACKAGE_B_INCLUDED_MINUTES ?
                                                     (minutesUsed - PACKAGE_B_INCLUDED_MINUTES) * ADDITIONAL_RATE_B : 0.0);
            double savingsC = PACKAGE_C_COST;
            if (totalAmountDue < savingsB && totalAmountDue < savingsC) {
                std::cout << "Potential savings for Package A customers:" << std::endl;
                std::cout << "Savings with Package B: $" << savingsB - totalAmountDue << std::endl;
                std::cout << "Savings with Package C: $" << savingsC - totalAmountDue << std::endl;
            }
            break;

        case 'B':
            totalAmountDue = PACKAGE_B_BASE_COST;
            if (minutesUsed > PACKAGE_B_INCLUDED_MINUTES) {
                totalAmountDue += (minutesUsed - PACKAGE_B_INCLUDED_MINUTES) * ADDITIONAL_RATE_B;
            }

            // Calculate potential savings for Package B customers
            double savingsC_B = PACKAGE_C_COST;
            if (totalAmountDue < savingsC_B) {
                std::cout << "Potential savings for Package B customers:" << std::endl;
                std::cout << "Savings with Package C: $" << savingsC_B - totalAmountDue << std::endl;
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
