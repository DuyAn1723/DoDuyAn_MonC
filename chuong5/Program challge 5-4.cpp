#include <iostream>
using namespace std;

int main() {
    const double CALORIES_PER_MINUTE = 3.6;
    int minutes;

    cout << "Minutes\tCalories Burned" << endl;
    cout << "-----------------------" << endl;

    for (minutes = 5; minutes <= 30; minutes += 5) {
        double calories = minutes * CALORIES_PER_MINUTE;
        cout << minutes << "\t" << calories << endl;
    }

    return 0;
}