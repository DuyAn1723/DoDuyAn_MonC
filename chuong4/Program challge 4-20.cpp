#include <iostream>
#include <iomanip>

int main() {
    const double speedOfSoundAir = 1100.0;    // Speed of sound in air (feet per second)
    const double speedOfSoundWater = 4900.0;  // Speed of sound in water (feet per second)
    const double speedOfSoundSteel = 16400.0; // Speed of sound in steel (feet per second)

    char choice;
    double distance, time;

    // Display the menu and get the user's choice
    std::cout << "Select a medium for sound propagation:" << std::endl;
    std::cout << "a - Air" << std::endl;
    std::cout << "w - Water" << std::endl;
    std::cout << "s - Steel" << std::endl;
    std::cout << "Enter your choice (a/w/s): ";
    std::cin >> choice;

    // Input validation: Check if the choice is one of the available options
    if (choice != 'a' && choice != 'w' && choice != 's') {
        std::cout << "Invalid choice. Please select 'a' for air, 'w' for water, or 's' for steel." << std::endl;
        return 1; // Exit with an error code
    }

    // Prompt the user to enter the distance
    std::cout << "Enter the distance for the sound wave to travel (in feet, >= 0): ";
    std::cin >> distance;

    // Input validation: Check if the distance is non-negative
    if (distance < 0) {
        std::cout << "Invalid input: Distance cannot be negative." << std::endl;
        return 1; // Exit with an error code
    }

    // Calculate the time it takes for the sound wave to travel the distance
    switch (choice) {
        case 'a':
            time = distance / speedOfSoundAir;
            break;
        case 'w':
            time = distance / speedOfSoundWater;
            break;
        case 's':
            time = distance / speedOfSoundSteel;
            break;
    }

    // Display the calculated time rounded to four decimal places
    std::cout << "The time it takes for the sound wave to travel " << distance << " feet in " << (choice == 'a' ? "air" : (choice == 'w' ? "water" : "steel")) << " is approximately: ";
    std::cout << std::fixed << std::setprecision(4) << time << " seconds" << std::endl;

    return 0;
}
