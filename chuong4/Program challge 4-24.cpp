#include <iostream>
#include <iomanip>

int main() {
    const double RATE_OFF_PEAK = 0.05;
    const double RATE_DAY = 0.45;
    const double RATE_NIGHT = 0.20;

    double startTime, minutes;

    // Prompt the user to enter the starting time in HH.MM format
    std::cout << "Enter the starting time of the call (HH.MM): ";
    std::cin >> startTime;

    // Input validation: Check if the time is in a valid range
    if (startTime < 0 || startTime >= 24 || (startTime - static_cast<int>(startTime)) * 100 >= 60) {
        std::cout << "Invalid input: Please enter a valid time in HH.MM format." << std::endl;
        return 1; // Exit with an error code
    }

    // Prompt the user to enter the number of minutes
    std::cout << "Enter the number of minutes of the call: ";
    std::cin >> minutes;

    // Calculate the charges based on the starting time
    double charges;
    if (startTime >= 0 && startTime < 7) {
        charges = minutes * RATE_OFF_PEAK;
    } else if (startTime >= 7 && startTime < 19) {
        charges = minutes * RATE_DAY;
    } else {
        charges = minutes * RATE_NIGHT;
    }

    // Display the charges
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Charges for the call: $" << charges << std::endl;

    return 0;
}
