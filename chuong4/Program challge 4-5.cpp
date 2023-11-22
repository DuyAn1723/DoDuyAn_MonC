#include <iostream>

int main() {
    double weight, height, bmi;

    // Prompt the user to enter weight (in pounds)
    std::cout << "Enter your weight (in pounds): ";
    std::cin >> weight;

    // Prompt the user to enter height (in inches)
    std::cout << "Enter your height (in inches): ";
    std::cin >> height;

    // Calculate BMI using the formula: BMI = weight * 703 / (height^2)
    bmi = weight * 703 / (height * height);

    // Display the calculated BMI
    std::cout << "Your BMI is: " << bmi << std::endl;

    // Determine the weight status based on the BMI
    if (bmi < 18.5) {
        std::cout << "You are underweight." << std::endl;
    } else if (bmi >= 18.5 && bmi <= 25) {
        std::cout << "You have an optimal weight." << std::endl;
    } else {
        std::cout << "You are overweight." << std::endl;
    }

    return 0;
}
