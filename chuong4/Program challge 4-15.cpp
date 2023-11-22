#include <iostream>

int main() {
    double weight, distance, rate, totalCharge;

    // Prompt the user to enter the weight of the package (in kilograms)
    std::cout << "Enter the weight of the package (in kilograms): ";
    std::cin >> weight;

    // Input validation for the weight of the package
    if (weight <= 0 || weight > 20) {
        std::cout << "Invalid input: Weight must be between 0.01 and 20 kg." << std::endl;
        return 1; // Exit with an error code
    }

    // Prompt the user to enter the distance to be shipped (in miles)
    std::cout << "Enter the distance to be shipped (in miles): ";
    std::cin >> distance;

    // Input validation for the distance
    if (distance < 10 || distance > 3000) {
        std::cout << "Invalid input: Distance must be between 10 and 3000 miles." << std::endl;
        return 1; // Exit with an error code
    }

    // Determine the rate per 500 miles based on the weight of the package
    if (weight <= 2) {
        rate = 1.10;
    } else if (weight <= 6) {
        rate = 2.20;
    } else if (weight <= 10) {
        rate = 3.70;
    } else {
        rate = 4.80;
    }

    // Calculate the total shipping charge
    totalCharge = (distance / 500) * rate;

    // Display the calculated shipping charge
    std::cout << "Shipping charges: $" << totalCharge << std::endl;

    return 0;
}
