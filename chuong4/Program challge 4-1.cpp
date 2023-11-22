#include <iostream>

int main() {
    double num1, num2;

    // Prompt the user to enter the first number
    std::cout << "Enter the first number: ";
    std::cin >> num1;

    // Prompt the user to enter the second number
    std::cout << "Enter the second number: ";
    std::cin >> num2;

    // Use the conditional operator to determine which number is smaller and which is larger
    double smaller, larger;
    if (num1 < num2) {
        smaller = num1;
        larger = num2;
    } else {
        smaller = num2;
        larger = num1;
    }

    // Display the results
    std::cout << "The smaller number is: " << smaller << std::endl;
    std::cout << "The larger number is: " << larger << std::endl;

    return 0;
}
