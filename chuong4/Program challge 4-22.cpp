#include <iostream>
#include <string>

int main() {
    int temperature;

    // Prompt the user to enter a temperature
    std::cout << "Enter a temperature in Celsius: ";
    std::cin >> temperature;

    // Lists of substances and their freezing and boiling points
    std::string substances[] = {"Water", "Ethyl Alcohol", "Mercury", "Oxygen"};
    int freezingPoints[] = {0, -114, -39, -183};
    int boilingPoints[] = {100, 78, 357, -183};

    // Initialize flags to check if substances will freeze or boil at the entered temperature
    bool willFreeze = false;
    bool willBoil = false;

    // Loop through substances and check if they will freeze or boil
    for (int i = 0; i < 4; i++) {
        if (temperature <= freezingPoints[i]) {
            willFreeze = true;
            std::cout << substances[i] << " will freeze at " << temperature << " degrees Celsius." << std::endl;
        }
        if (temperature >= boilingPoints[i]) {
            willBoil = true;
            std::cout << substances[i] << " will boil at " << temperature << " degrees Celsius." << std::endl;
        }
    }

    // If no substances will freeze or boil at the entered temperature, display a message
    if (!willFreeze) {
        std::cout << "No substance will freeze at " << temperature << " degrees Celsius." << std::endl;
    }
    if (!willBoil) {
        std::cout << "No substance will boil at " << temperature << " degrees Celsius." << std::endl;
    }

    return 0;
}
