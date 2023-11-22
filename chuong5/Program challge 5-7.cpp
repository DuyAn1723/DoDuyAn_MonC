#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int days;

    cout << "Enter the number of days: ";
    cin >> days;

    if (days < 1) {
        cout << "Please enter a number of days greater than or equal to 1." << endl;
        return 1; // Exit the program with error code 1
    }

    double totalPay = 0.0;
    double salary = 0.01; // One penny on the first day

    cout << "Day\tSalary" << endl;
    cout << "-----------------" << endl;

    for (int day = 1; day <= days; day++) {
        totalPay += salary;
        cout << day << "\t$" << fixed << setprecision(2) << salary << endl;
        salary *= 2; // Double the salary for the next day
    }

    cout << "Total pay over " << days << " days: $" << fixed << setprecision(2) << totalPay << endl;

    return 0;
}