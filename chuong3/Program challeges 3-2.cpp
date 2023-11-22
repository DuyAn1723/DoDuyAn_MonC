#include <iostream>
#include <iomanip> // Needed for formatting output
using namespace std;

int main() {
    // Constants for ticket prices
    const double CLASS_A_PRICE = 15.0;
    const double CLASS_B_PRICE = 12.0;
    const double CLASS_C_PRICE = 9.0;

    // Variables to store the number of tickets sold for each class
    int classA_tickets, classB_tickets, classC_tickets;

    // Prompt the user to enter the number of tickets sold for each class
    cout << "Enter the number of Class A tickets sold: ";
    cin >> classA_tickets;
    cout << "Enter the number of Class B tickets sold: ";
    cin >> classB_tickets;
    cout << "Enter the number of Class C tickets sold: ";
    cin >> classC_tickets;

    // Calculate the total income from ticket sales
    double totalIncome = (classA_tickets * CLASS_A_PRICE) +
        (classB_tickets * CLASS_B_PRICE) +
        (classC_tickets * CLASS_C_PRICE);

    // Display the income with formatting
    cout << fixed << showpoint << setprecision(2);
    cout << "Total income generated from ticket sales: $" << totalIncome << endl;

    return 0;
}
