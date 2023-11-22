#include <iostream>
using namespace std;

int main() {
    char employed, recentGrad;

    cout << "Answer the following questions\n";
    cout << "with either Y for Yes or ";
    cout << "N for No.\n";
    cout << "Are you employed? ";
    cin >> employed;
    cout << "Have you graduated from college ";
    cout << "in the past two years? ";
    cin >> recentGrad;

    if (employed == 'Y') {
        if (recentGrad == 'Y') {
            cout << "You qualify for the special ";
            cout << "interest rate.\n";
        }
        else {
            cout << "You must have graduated from ";
            cout << "college in the past two\n";
            cout << "years to qualify.\n";
        }
    }
    else {
        cout << "You must be employed to qualify.\n";
    }

    return 0;
}
