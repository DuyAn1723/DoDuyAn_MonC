#include <iostream>
#include <cmath>

const double PI = 3.14159;

int main() {
    int choice;
    
    do {
        // Display the menu
        std::cout << "Geometry Calculator" << std::endl;
        std::cout << "1. Calculate the Area of a Circle" << std::endl;
        std::cout << "2. Calculate the Area of a Rectangle" << std::endl;
        std::cout << "3. Calculate the Area of a Triangle" << std::endl;
        std::cout << "4. Quit" << std::endl;
        std::cout << "Enter your choice (1-4): ";
        std::cin >> choice;

        // Process the user's choice
        switch (choice) {
            case 1: {
                // Calculate the area of a circle
                double radius;
                std::cout << "Enter the radius of the circle: ";
                std::cin >> radius;

                // Input validation: Check if the radius is non-negative
                if (radius < 0) {
                    std::cout << "Invalid input: Radius cannot be negative." << std::endl;
                } else {
                    double area = PI * pow(radius, 2);
                    std::cout << "The area of the circle is: " << area << std::endl;
                }
                break;
            }
            case 2: {
                // Calculate the area of a rectangle
                double length, width;
                std::cout << "Enter the length of the rectangle: ";
                std::cin >> length;
                std::cout << "Enter the width of the rectangle: ";
                std::cin >> width;

                // Input validation: Check if length and width are non-negative
                if (length < 0 || width < 0) {
                    std::cout << "Invalid input: Length and width cannot be negative." << std::endl;
                } else {
                    double area = length * width;
                    std::cout << "The area of the rectangle is: " << area << std::endl;
                }
                break;
            }
            case 3: {
                // Calculate the area of a triangle
                double base, height;
                std::cout << "Enter the length of the base of the triangle: ";
                std::cin >> base;
                std::cout << "Enter the height of the triangle: ";
                std::cin >> height;

                // Input validation: Check if base and height are non-negative
                if (base < 0 || height < 0) {
                    std::cout << "Invalid input: Base and height cannot be negative." << std::endl;
                } else {
                    double area = 0.5 * base * height;
                    std::cout << "The area of the triangle is: " << area << std::endl;
                }
                break;
            }
            case 4:
                // Quit the program
                std::cout << "Exiting the Geometry Calculator. Goodbye!" << std::endl;
                break;
            default:
                // Display an error message for invalid choices
                std::cout << "Invalid choice. Please enter a number between 1 and 4." << std::endl;
        }

    } while (choice != 4); // Continue the loop until the user chooses to quit (option 4)

    return 0;
}
