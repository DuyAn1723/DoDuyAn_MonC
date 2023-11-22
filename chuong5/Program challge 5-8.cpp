#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()
using namespace std;

int main() {
    int choice;

    // Seed the random number generator
    srand(time(0));

    do {
        cout << "Math Tutor Menu" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Quit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice < 1 || choice > 5) {
            cout << "Please enter a valid choice (1-5)." << endl;
            continue; // Display the menu again
        }

        if (choice == 5) {
            cout << "Goodbye!" << endl;
            break; // Exit the program
        }

        int num1 = rand() % 100; // Generate random numbers
        int num2 = rand() % 100;

        switch (choice) {
            case 1:
                cout << num1 << " + " << num2 << " = " << (num1 + num2) << endl;
                break;
            case 2:
                cout << num1 << " - " << num2 << " = " << (num1 - num2) << endl;
                break;
            case 3:
                cout << num1 << " * " << num2 << " = " << (num1 * num2) << endl;
                break;
            case 4:
                if (num2 == 0) {
                    cout << "Division by zero is not allowed." << endl;
                } else {
                    cout << num1 << " / " << num2 << " = " << (static_cast<double>(num1) / num2) << endl;
                }
                break;
        }
    } while (choice != 5);

    return 0;
}