#include <iostream>

int main() {
    int number;

    // Prompt the user to enter a number within the range of 1 through 10
    std::cout << "Enter a number between 1 and 10: ";
    std::cin >> number;

    // Input validation: Check if the entered number is within the valid range
    if (number < 1 || number > 10) {
        std::cout << "Invalid input. Please enter a number between 1 and 10." << std::endl;
    } else {
        // Use a switch statement to display the Roman numeral version
        std::cout << "Roman numeral version: ";
        switch (number) {
            case 1:
                std::cout << "I";
                break;
            case 2:
                std::cout << "II";
                break;
            case 3:
                std::cout << "III";
                break;
            case 4:
                std::cout << "IV";
                break;
            case 5:
                std::cout << "V";
                break;
            case 6:
                std::cout << "VI";
                break;
            case 7:
                std::cout << "VII";
                break;
            case 8:
                std::cout << "VIII";
                break;
            case 9:
                std::cout << "IX";
                break;
            case 10:
                std::cout << "X";
                break;
            default:
                std::cout << "Invalid input. Please enter a number between 1 and 10.";
                break;
        }
        std::cout << std::endl;
    }

    return 0;
}
