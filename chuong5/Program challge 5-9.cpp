#include <iostream>
using namespace std;

int main() {
    int numFloors;

    cout << "Enter the number of floors in the hotel: ";
    cin >> numFloors;

    if (numFloors < 1) {
        cout << "Please enter a number of floors greater than or equal to 1." << endl;
        return 1; // Exit the program with error code 1
    }

    int totalRooms = 0;
    int totalOccupied = 0;

    for (int floor = 1; floor <= numFloors; floor++) {
        int numRooms, numOccupied;
        cout << "Enter the number of rooms on floor " << floor << ": ";
        cin >> numRooms;
        cout << "Enter the number of occupied rooms on floor " << floor << ": ";
        cin >> numOccupied;
        
        totalRooms += numRooms;
        totalOccupied += numOccupied;
    }

    int totalUnoccupied = totalRooms - totalOccupied;
    double occupancyRate = (static_cast<double>(totalOccupied) / totalRooms) * 100;

    cout << "Total rooms: " << totalRooms << endl;
    cout << "Total occupied: " << totalOccupied << endl;
    cout << "Total unoccupied: " << totalUnoccupied << endl;
    cout << "Occupancy rate: " << occupancyRate << "%" << endl;

    return 0;
}