#include <iostream>
#include <string>
using namespace std;

int main() {
    const string salsaNames[] = {"mild", "medium", "sweet", "hot", "zesty"};
    int jarsSold[5] = {0};
    int highestSales = 0, lowestSales = INT_MAX, totalSales = 0;
    string highestSellingSalsa, lowestSellingSalsa;

    for (int i = 0; i < 5; ++i) {
        cout << "Enter the number of jars sold for " << salsaNames[i] << ": ";
        cin >> jarsSold[i];

        totalSales += jarsSold[i];

        if (jarsSold[i] > highestSales) {
            highestSales = jarsSold[i];
            highestSellingSalsa = salsaNames[i];
        }
        if (jarsSold[i] < lowestSales) {
            lowestSales = jarsSold[i];
            lowestSellingSalsa = salsaNames[i];
        }
    }

    cout << "\nSales Report:\n";
    for (int i = 0; i < 5; ++i) {
        cout << "Sales for " << salsaNames[i] << ": " << jarsSold[i] << " jars\n";
    }
    cout << "Total sales: " << totalSales << " jars\n";
    cout << "Highest selling product: " << highestSellingSalsa << " (" << highestSales << " jars)\n";
    cout << "Lowest selling product: " << lowestSellingSalsa << " (" << lowestSales << " jars)\n";

    return 0;
}