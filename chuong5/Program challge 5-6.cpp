#include <iostream>
using namespace std;

int main() {
    double speed;
    int hours;

    cout << "What is the speed of the vehicle in mph? ";
    cin >> speed;

    if (speed < 0) {
        cout << "Please enter a non-negative speed." << endl;
        return 1; // Exit the program with error code 1
    }

    cout << "How many hours has it traveled? ";
    cin >> hours;

    if (hours < 1) {
        cout << "Please enter a positive number of hours." << endl;
        return 1; // Exit the program with error code 1
    }

    cout << "Hour\tDistance Traveled" << endl;
    cout << "-----------------------" << endl;

    for (int hour = 1; hour <= hours; hour++) {
        double distance = speed * hour;
        cout << hour << "\t" << distance << endl;
    }

    return 0;
}