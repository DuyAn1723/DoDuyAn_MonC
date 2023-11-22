#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // Constants
    const double SENIOR_EXEMPTION = 5000.0;

    // Variables
    double propertyValue, taxRate, assessedValue, annualTax, quarterlyTax;

    // Prompt the user to input the property value and tax rate
    cout << "Enter the actual value of the property: $";
    cin >> propertyValue;
    cout << "Enter the current tax rate for each $100 of assessed value: ";
    cin >> taxRate;

    // Calculate the assessed value
    assessedValue = propertyValue * 0.6;

    // Calculate the annual tax (considering the senior exemption)
    annualTax = (assessedValue - SENIOR_EXEMPTION) * (taxRate / 100.0);

    // Calculate the quarterly tax bill
    quarterlyTax = annualTax / 4;

    // Display the results with formatting
    cout << fixed << showpoint << setprecision(2);
    cout << "Annual property tax for senior homeowner: $" << annualTax << endl;
    cout << "Quarterly tax bill for senior homeowner: $" << quarterlyTax << endl;

    return 0;
}
