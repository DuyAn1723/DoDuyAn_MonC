#include <iostream>
using namespace std;

int main() {
    const double MIN_INCOME = 35000.0;
    const int MIN_YEARS = 5;
    double income;
    int years;

    cout << "What is your annual income? ";
    cin >> income;

    cout << "How many years have you worked at your current job? ";
    cin >> years;

    if (income >= MIN_INCOME || years > MIN_YEARS) {
        cout << "You qualify.\n";
    } else {
        cout << "You must earn at least $" << MIN_INCOME << " or have been employed more than " << MIN_YEARS << " years.\n";
    }

    return 0;
}
