#include <iostream>

int main() {
    long seconds;

    // Prompt the user to enter the number of seconds
    std::cout << "Enter the number of seconds: ";
    std::cin >> seconds;

    if (seconds >= 60) {
        // Calculate and display the number of minutes
        int minutes = seconds / 60;
        std::cout << "Minutes: " << minutes << std::endl;

        if (seconds >= 3600) {
            // Calculate and display the number of hours
            int hours = seconds / 3600;
            std::cout << "Hours: " << hours << std::endl;

            if (seconds >= 86400) {
                // Calculate and display the number of days
                int days = seconds / 86400;
                std::cout << "Days: " << days << std::endl;
            }
        }
    }

    return 0;
}
