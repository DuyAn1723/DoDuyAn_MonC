#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double RISE_RATE = 1.5; // Ocean level rise rate (mm/year)
    const int NUM_YEARS = 25;    // Number of years to display

    cout << "Year\tRise (mm)" << endl;
    cout << "----------------" << endl;

    for (int year = 1; year <= NUM_YEARS; year++) {
        double rise = year * RISE_RATE;
        cout << year << "\t" << fixed << setprecision(1) << rise << endl;
    }

    return 0;
}