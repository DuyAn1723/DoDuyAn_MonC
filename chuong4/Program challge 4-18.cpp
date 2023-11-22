#include <iostream>

int main() {
    double wavelength;

    // Prompt the user to enter the wavelength of the electromagnetic wave in meters
    std::cout << "Enter the wavelength of the electromagnetic wave (in meters): ";
    std::cin >> wavelength;

    // Determine the type of radiation based on the wavelength
    if (wavelength >= 1e-2) {
        std::cout << "Radio Waves" << std::endl;
    } else if (wavelength >= 1e-3) {
        std::cout << "Microwaves" << std::endl;
    } else if (wavelength >= 7e-7) {
        std::cout << "Infrared" << std::endl;
    } else if (wavelength >= 4e-7) {
        std::cout << "Visible Light" << std::endl;
    } else if (wavelength >= 1e-8) {
        std::cout << "Ultraviolet" << std::endl;
    } else if (wavelength >= 1e-11) {
        std::cout << "X Rays" << std::endl;
    } else {
        std::cout << "Gamma Rays" << std::endl;
    }

    return 0;
}
