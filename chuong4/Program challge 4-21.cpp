#include <iostream>
#include <iomanip>

int main() {
    const double speedCarbonDioxide = 258.0; // Speed of sound in carbon dioxide (meters per second)
    const double speedAir = 331.5;            // Speed of sound in air (meters per second)
    const double speedHelium = 972.0;         // Speed of sound in helium (meters per second)
    const double speedHydrogen = 1270.0;      // Speed of sound in hydrogen (meters per second)

    char choice;
    double time, distance;

    // Display the menu and get the user's choice
    std::cout << "Select a gas for sound propagation:" << std::endl;
    std::cout << "c - Carbon Dioxide" << std::endl;
    std::cout << "a - Air" << std::endl;
    std::cout << "h - Helium" << std::endl;
    std::cout << "y - Hydrogen" << std::endl;
    std::cout << "Enter your choice (c/a/h/y): ";
    std::cin >> choice;

    // Input validation: Check if the choice is one of the available options
    if (choice != 'c' && choice != 'a' && choice != 'h' && choice != 'y') {
        std::cout << "Invalid choice. Please select 'c' for carbon dioxide, 'a' for air, 'h' for helium, or 'y' for hydrogen." << std::endl;
        return 1; // Exit with an error code
    }

    // Prompt the user to enter the time in seconds
    std::cout << "Enter the time it took for the sound to travel (in seconds, 0 to 30): ";
    std::cin >> time;

    // Input validation: Check if the time is within the specified range
    if (time < 0 || time > 30) {
        std::cout << "Invalid input: Time must be between 0 and 30 seconds." << std::endl;
        return 1; // Exit with an error code
    }

    // Calculate the distance based on the selected gas
    switch (choice) {
        case 'c':
            distance = speedCarbonDioxide * time;
            break;
        case 'a':
            distance = speedAir * time;
            break;
        case 'h':
            distance = speedHelium * time;
            break;
        case 'y':
            distance = speedHydrogen * time;
            break;
    }

    // Display the calculated distance
    std::cout << "The source of the sound was approximately " << std::fixed << std::setprecision(2) << distance << " meters away from the detection location." << std::endl;

    return 0;
}
