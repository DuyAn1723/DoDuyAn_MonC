#include <iostream>
#include <string>

int main() {
    std::string vaulterName;
    double vault1, vault2, vault3;
    std::string date1, date2, date3;

    // Prompt the user to enter the vaulter's name
    std::cout << "Enter the name of the pole vaulter: ";
    std::getline(std::cin, vaulterName);

    // Prompt the user to enter the details of the first vault
    std::cout << "Enter the date of the first vault (MM/DD/YYYY): ";
    std::cin >> date1;
    std::cout << "Enter the height of the first vault (in meters, between 2.0 and 5.0): ";
    std::cin >> vault1;

    // Input validation for the first vault height
    if (vault1 < 2.0 || vault1 > 5.0) {
        std::cout << "Invalid input: Vault height must be between 2.0 and 5.0 meters." << std::endl;
        return 1; // Exit with an error code
    }

    // Prompt the user to enter the details of the second vault
    std::cout << "Enter the date of the second vault (MM/DD/YYYY): ";
    std::cin >> date2;
    std::cout << "Enter the height of the second vault (in meters, between 2.0 and 5.0): ";
    std::cin >> vault2;

    // Input validation for the second vault height
    if (vault2 < 2.0 || vault2 > 5.0) {
        std::cout << "Invalid input: Vault height must be between 2.0 and 5.0 meters." << std::endl;
        return 1; // Exit with an error code
    }

    // Prompt the user to enter the details of the third vault
    std::cout << "Enter the date of the third vault (MM/DD/YYYY): ";
    std::cin >> date3;
    std::cout << "Enter the height of the third vault (in meters, between 2.0 and 5.0): ";
    std::cin >> vault3;

    // Input validation for the third vault height
    if (vault3 < 2.0 || vault3 > 5.0) {
        std::cout << "Invalid input: Vault height must be between 2.0 and 5.0 meters." << std::endl;
        return 1; // Exit with an error code
    }

    // Sort and report the vaults in order of height
    if (vault1 > vault2) {
        std::swap(vault1, vault2);
        std::swap(date1, date2);
    }
    if (vault2 > vault3) {
        std::swap(vault2, vault3);
        std::swap(date2, date3);
    }
    if (vault1 > vault2) {
        std::swap(vault1, vault2);
        std::swap(date1, date2);
    }

    // Display the vaults in order of height (best first)
    std::cout << "Vault heights for " << vaulterName << " in order of height (best first):" << std::endl;
    std::cout << "1. Date: " << date3 << ", Height: " << vault3 << " meters" << std::endl;
    std::cout << "2. Date: " << date2 << ", Height: " << vault2 << " meters" << std::endl;
    std::cout << "3. Date: " << date1 << ", Height: " << vault1 << " meters" << std::endl;

    return 0;
}
