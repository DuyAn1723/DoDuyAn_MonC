#include <iostream>
using namespace std;

int main() {
    double budget;
    cout << "Enter your monthly budget: $";
    cin >> budget;

    double totalExpenses = 0.0;
    double expense;
    char anotherExpense = 'y';
    while (anotherExpense == 'y' || anotherExpense == 'Y') {
        cout << "Enter an expense: $";
        cin >> expense;

        totalExpenses += expense;

        cout << "Do you have another expense? (y/n): ";
        cin >> anotherExpense;
    }

    double budgetDifference = budget - totalExpenses;

    cout << "Budget Report" << endl;
    cout << "Monthly Budget: $" << budget << endl;
    cout << "Total Expenses: $" << totalExpenses << endl;

    if (budgetDifference < 0) {
        cout << "You are over budget by $" << -budgetDifference << endl;
    } else if (budgetDifference > 0) {
        cout << "You are under budget by $" << budgetDifference << endl;
    } else {
        cout << "You have exactly matched your budget." << endl;
    }

    return 0;
}
