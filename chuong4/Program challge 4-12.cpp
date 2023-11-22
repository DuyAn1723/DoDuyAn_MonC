#include <iostream>

int main() {
    const double packagePrice = 99.0;  // Price per package
    int quantity;
    double totalCost;

    // Prompt the user to enter the number of units sold
    std::cout << "Enter the number of units sold: ";
    std::cin >> quantity;

    // Input validation: Ensure the number of units is greater than 0
    if (quantity <= 0) {
        std::cout << "Invalid input. Number of units must be greater than 0." << std::endl;
        return 1; // Exit with an error code
    }

    // Calculate the total cost based on quantity and discounts
    if (quantity >= 10 && quantity <= 19) {
        totalCost = quantity * packagePrice * 0.8; // 20% discount
    } else if (quantity >= 20 && quantity <= 49) {
        totalCost = quantity * packagePrice * 0.7; // 30% discount
    } else if (quantity >= 50 && quantity <= 99) {
        totalCost = quantity * packagePrice * 0.6; // 40% discount
    } else {
        totalCost = quantity * packagePrice * 0.5; // 50% discount
    }

    // Display the total cost
    std::cout << "Total cost of the purchase: $" << totalCost << std::endl;

    return 0;
}
