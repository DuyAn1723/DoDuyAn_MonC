#include <iostream>

int main() {
    double balance;
    int numChecks;
    double monthlyFee = 10.0;
    double checkFee;
    double totalFee = 0.0;

    // Prompt the user to enter the beginning balance
    std::cout << "Enter the beginning balance: $";
    std::cin >> balance;

    if (balance < 0) {
        std::cout << "URGENT: The account is overdrawn." << std::endl;
        return 1; // Exit with an error code
    }

    // Prompt the user to enter the number of checks written
    std::cout << "Enter the number of checks written: ";
    std::cin >> numChecks;

    if (numChecks < 0) {
        std::cout << "Invalid input: Number of checks cannot be negative." << std::endl;
        return 1; // Exit with an error code
    }

    // Calculate check fees based on the number of checks
    if (numChecks < 20) {
        checkFee = numChecks * 0.10;
    } else if (numChecks >= 20 && numChecks <= 39) {
        checkFee = numChecks * 0.08;
    } else if (numChecks >= 40 && numChecks <= 59) {
        checkFee = numChecks * 0.06;
    } else {
        checkFee = numChecks * 0.04;
    }

    // Check if the balance falls below $400 and charge the additional fee
    if (balance < 400) {
        totalFee = monthlyFee + checkFee + 15.0;
    } else {
        totalFee = monthlyFee + checkFee;
    }

    // Display the total service fees for the month
    std::cout << "Total service fees for the month: $" << totalFee << std::endl;

    return 0;
}
