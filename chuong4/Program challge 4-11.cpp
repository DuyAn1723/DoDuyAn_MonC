#include <iostream>
#include <ctime>
#include <cstdlib>

int main() {
    // Seed the random number generator with the current time
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // Generate two random numbers between 1 and 100
    int num1 = rand() % 100 + 1;
    int num2 = rand() % 100 + 1;

    // Calculate the correct answer
    int correctAnswer = num1 + num2;

    // Display the addition problem
    std::cout << "Math Tutor: What is " << num1 << " + " << num2 << "? ";
    
    // Prompt the student to enter their answer
    int userAnswer;
    std::cin >> userAnswer;

    // Check if the user's answer is correct
    if (userAnswer == correctAnswer) {
        std::cout << "Congratulations! That's the correct answer." << std::endl;
    } else {
        std::cout << "Sorry, the correct answer is " << correctAnswer << "." << std::endl;
    }

    return 0;
}
