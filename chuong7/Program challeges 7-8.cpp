#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inputFile;
    string filename;
    double number;
    double sum = 0;
    double min = 0;
    double max = 0;
    int count = 0;

    // Get the filename from the user
    cout << "Enter the filename: ";
    cin >> filename;

    inputFile.open(filename);

    if (!inputFile) {
        cerr << "Error opening the file." << endl;
        return 1;
    }

    // Read and analyze the numbers
    inputFile >> number;
    min = max = number;

    while (inputFile) {
        sum += number;
        count++;

        if (number < min) {
            min = number;
        }

        if (number > max) {
            max = number;
        }

        inputFile >> number;
    }

    // Calculate the average
    double average = (count > 0) ? sum / count : 0;

    // Display the results
    cout << "Minimum: " << min << endl;
    cout << "Maximum: " << max << endl;
    cout << "Total: " << sum << endl;
    cout << "Average: " << average << endl;

    inputFile.close();

    return 0;
}