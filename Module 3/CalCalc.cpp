// CalCalc.cpp - Calculates and prints the number of calories burned
// Author: Kevin Hu
// Module 3 Project 3
#include <iostream>
using namespace std;

int main()
{

    int minutesRunning = 30;
    int minutesBBalling = 30;
    int minutesSleeping = 360;
    double cpmRunning, cpmBBalling, cpmSleeping;
    int weightInPounds = 250;
    double weightInKg = weightInPounds / 2.2;

    cpmRunning = 0.0175 * 10.0 * weightInKg;
    cpmBBalling = 0.0175 * 8.0 * weightInKg;
    cpmSleeping = 0.0175 * 1.0 * weightInKg;

    double calsRunning, calsBBalling, calsSleeping, totalCals;
    calsRunning = cpmRunning * minutesRunning;
    calsBBalling = cpmBBalling * minutesBBalling;
    calsSleeping = cpmSleeping * minutesSleeping;
    totalCals = calsRunning + calsBBalling + calsSleeping;
    cout 
        << "Calories burned for-\n"
        << "Running: " << calsRunning << ",\n"
        << "Basketball: " << calsBBalling << ". and\n"
        << "Sleeping: " << calsSleeping << "\n"
        << "Total Cals: "<< totalCals << endl;

    return 0;

}