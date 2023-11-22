#include <iostream>
#include <string>

int main() {
    std::string color1, color2;
    
    // Prompt the user to enter the names of two primary colors
    std::cout << "Enter the first primary color (red, blue, or yellow): ";
    std::cin >> color1;

    std::cout << "Enter the second primary color (red, blue, or yellow): ";
    std::cin >> color2;

    // Check if the entered colors are primary colors
    if ((color1 == "red" || color1 == "blue" || color1 == "yellow") &&
        (color2 == "red" || color2 == "blue" || color2 == "yellow")) {
        // Determine the resulting secondary color
        if ((color1 == "red" && color2 == "blue") || (color1 == "blue" && color2 == "red")) {
            std::cout << "Mixing " << color1 << " and " << color2 << " gives you purple." << std::endl;
        } else if ((color1 == "red" && color2 == "yellow") || (color1 == "yellow" && color2 == "red")) {
            std::cout << "Mixing " << color1 << " and " << color2 << " gives you orange." << std::endl;
        } else if ((color1 == "blue" && color2 == "yellow") || (color1 == "yellow" && color2 == "blue")) {
            std::cout << "Mixing " << color1 << " and " << color2 << " gives you green." << std::endl;
        } else {
            std::cout << "No secondary color can be formed from mixing these two primary colors." << std::endl;
        }
    } else {
        std::cout << "Error: Please enter valid primary colors (red, blue, or yellow)." << std::endl;
    }

    return 0;
}
