#include <iostream>
#include <string>

int main() {
    std::string runner1, runner2, runner3;
    double time1, time2, time3;

    // Prompt the user to enter the name and time for the first runner
    std::cout << "Enter the name of the first runner: ";
    std::cin >> runner1;
    std::cout << "Enter the time (in seconds) for " << runner1 << ": ";
    std::cin >> time1;

    // Input validation for the first runner's time
    if (time1 <= 0) {
        std::cout << "Invalid input: Time must be a positive number." << std::endl;
        return 1; // Exit with an error code
    }

    // Prompt the user to enter the name and time for the second runner
    std::cout << "Enter the name of the second runner: ";
    std::cin >> runner2;
    std::cout << "Enter the time (in seconds) for " << runner2 << ": ";
    std::cin >> time2;

    // Input validation for the second runner's time
    if (time2 <= 0) {
        std::cout << "Invalid input: Time must be a positive number." << std::endl;
        return 1; // Exit with an error code
    }

    // Prompt the user to enter the name and time for the third runner
    std::cout << "Enter the name of the third runner: ";
    std::cin >> runner3;
    std::cout << "Enter the time (in seconds) for " << runner3 << ": ";
    std::cin >> time3;

    // Input validation for the third runner's time
    if (time3 <= 0) {
        std::cout << "Invalid input: Time must be a positive number." << std::endl;
        return 1; // Exit with an error code
    }

    // Determine the order of finish
    if (time1 < time2 && time1 < time3) {
        std::cout << "First place: " << runner1 << std::endl;
        if (time2 < time3) {
            std::cout << "Second place: " << runner2 << std::endl;
            std::cout << "Third place: " << runner3 << std::endl;
        } else {
            std::cout << "Second place: " << runner3 << std::endl;
            std::cout << "Third place: " << runner2 << std::endl;
        }
    } else if (time2 < time1 && time2 < time3) {
        std::cout << "First place: " << runner2 << std::endl;
        if (time1 < time3) {
            std::cout << "Second place: " << runner1 << std::endl;
            std::cout << "Third place: " << runner3 << std::endl;
        } else {
            std::cout << "Second place: " << runner3 << std::endl;
            std::cout << "Third place: " << runner1 << std::endl;
        }
    } else {
        std::cout << "First place: " << runner3 << std::endl;
        if (time1 < time2) {
            std::cout << "Second place: " << runner1 << std::endl;
            std::cout << "Third place: " << runner2 << std::endl;
        } else {
            std::cout << "Second place: " << runner2 << std::endl;
            std::cout << "Third place: " << runner1 << std::endl;
        }
    }

    return 0;
}
