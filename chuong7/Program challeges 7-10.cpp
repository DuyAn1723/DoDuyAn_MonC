#include <iostream>
using namespace std;

const int SIZE = 7;

int main() {
    long empId[SIZE] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 7580489};
    int hours[SIZE];
    double payRate[SIZE];
    double wages[SIZE];

    // Input employee hours and pay rates
    for (int i = 0; i < SIZE; i++) {
        cout << "Enter hours worked for employee " << empId[i] << ": ";
        cin >> hours[i];

        // Input validation for hours
        while (hours[i] < 0) {
            cout << "Hours worked cannot be negative. Enter hours worked for employee " << empId[i] << ": ";
            cin >> hours[i];
        }

        cout << "Enter hourly pay rate for employee " << empId[i] << ": $";
        cin >> payRate[i];

        // Input validation for pay rate
        while (payRate[i] < 15.00) {
            cout << "Pay rate must be at least $15.00. Enter hourly pay rate for employee " << empId[i] << ": $";
            cin >> payRate[i];
        }

        // Calculate gross wages
        wages[i] = hours[i] * payRate[i];
    }

    // Display employee identification numbers and gross wages
    cout << "\nEmployee Gross Wages:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "Employee " << empId[i] << ": $" << wages[i] << endl;
    }

    return 0;
}