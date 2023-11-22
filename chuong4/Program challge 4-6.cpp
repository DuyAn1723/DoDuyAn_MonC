#include <iostream>

int main() {
    double mass, weight;

    // Prompt the user to enter the object's mass (in kilograms)
    std::cout << "Enter the object's mass (in kilograms): ";
    std::cin >> mass;

    // Calculate the weight in newtons using the formula: Weight = mass * 9.8
    weight = mass * 9.8;

    // Display the calculated weight
    std::cout << "The object's weight is: " << weight << " newtons" << std::endl;

    // Check if the object is too heavy or too light
    if (weight > 1000) {
        std::cout << "The object is too heavy." << std::endl;
    } else if (weight < 10) {
        std::cout << "The object is too light." << std::endl;
    }

    return 0;
}
