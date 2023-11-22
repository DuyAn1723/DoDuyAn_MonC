#include <iostream>
#include <fstream>
using namespace std;

const int NUM_MONTHS = 3;
const int NUM_DAYS = 30;

void readWeatherData(char weatherData[NUM_MONTHS][NUM_DAYS]) {
    ifstream inputFile("RainOrShine.txt");
    if (!inputFile) {
        cerr << "Error opening the file." << endl;
        exit(1);
    }

    for (int month = 0; month < NUM_MONTHS; ++month) {
        for (int day = 0; day < NUM_DAYS; ++day) {
            inputFile >> weatherData[month][day];
        }
    }

    inputFile.close();
}

void displayMonthlyWeather(const char weatherData[NUM_MONTHS][NUM_DAYS]) {
    const char* months[] = {"June", "July", "August"};
    const char* weatherTypes[] = {"Rainy", "Cloudy", "Sunny"};
    
    for (int month = 0; month < NUM_MONTHS; ++month) {
        int weatherCount[3] = {0};
        for (int day = 0; day < NUM_DAYS; ++day) {
            for (int i = 0; i < 3; ++i) {
                if (weatherData[month][day] == weatherTypes[i][0]) {
                    weatherCount[i]++;
                    break;
                }
            }
        }
        cout << "Month: " << months[month] << endl;
        cout << "Rainy days: " << weatherCount[0] << endl;
        cout << "Cloudy days: " << weatherCount[1] << endl;
        cout << "Sunny days: " << weatherCount[2] << endl;
        cout << "----------------------------------" << endl;
    }
}

int main() {
    char weatherData[NUM_MONTHS][NUM_DAYS];

    readWeatherData(weatherData);
    displayMonthlyWeather(weatherData);

    return 0;
}