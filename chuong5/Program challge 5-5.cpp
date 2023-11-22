#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double INITIAL_FEE = 2500.0;
    const double INCREASE_RATE = 0.04; // 4% increase per year

    double fee = INITIAL_FEE;

    cout << "Year\tMembership Fee" << endl;
    cout << "-------------------" << endl;

    for (int year = 1; year <= 6; year++) {
        fee += fee * INCREASE_RATE;
        cout << year << "\t$" << fixed << setprecision(2) << fee << endl;
    }

    return 0;
}
