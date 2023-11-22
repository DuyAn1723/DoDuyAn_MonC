#include <iostream>
using namespace std;

int main() {
    const int NUM_EMPLOYEES = 7;

    long empId[NUM_EMPLOYEES] = { 5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 7580489 };
    int hours[NUM_EMPLOYEES];
    double payRate[NUM_EMPLOYEES];
    double wages[NUM_EMPLOYEES];

    for (int i = 0; i < NUM_EMPLOYEES; i++) {
        cout << "Enter hours worked for employee #" << empId[i] << ": ";
        cin >> hours[i];

        // Input validation for hours
        while (hours[i] < 0) {
            cout << "Hours worked cannot be negative. Enter hours worked for employee #" << empId[i] << ": ";
            cin >> hours[i];
        }

        cout << "Enter hourly pay rate for employee #" << empId[i] << ": ";
        cin >> payRate[i];

        // Input validation for pay rate
        while (payRate[i] < 15.00) {
            cout << "Pay rate cannot be less than $15.00. Enter pay rate for employee #" << empId[i] << ": ";
            cin >> payRate[i];
        }

        wages[i] = hours[i] * payRate[i];
    }

    cout << "\nEmployee ID\tGross Wages" << endl;
    for (int i = 0; i < NUM_EMPLOYEES; i++) {
        cout << empId[i] << "\t\t$" << wages[i] << endl;
    }

    return 0;
}
