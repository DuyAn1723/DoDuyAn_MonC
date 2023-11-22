#include <iostream>

int main() {
    double length1, width1, area1;
    double length2, width2, area2;

    // Prompt the user to enter the dimensions of the first rectangle
    std::cout << "Enter the length of the first rectangle: ";
    std::cin >> length1;
    std::cout << "Enter the width of the first rectangle: ";
    std::cin >> width1;

    // Prompt the user to enter the dimensions of the second rectangle
    std::cout << "Enter the length of the second rectangle: ";
    std::cin >> length2;
    std::cout << "Enter the width of the second rectangle: ";
    std::cin >> width2;

    // Calculate the areas of both rectangles
    area1 = length1 * width1;
    area2 = length2 * width2;

    // Compare the areas and display the result
    if (area1 > area2) {
        std::cout << "The first rectangle has a greater area." << std::endl;
    } else if (area2 > area1) {
        std::cout << "The second rectangle has a greater area." << std::endl;
    } else {
        std::cout << "Both rectangles have the same area." << std::endl;
    }

    return 0;
}
