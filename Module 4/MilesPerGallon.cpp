// MilesPerGallon.cpp - Calculates a car's mileage
// Lab 4 Project 1
// Author: Kevin Hu

#include <iostream>
using namespace std;

int main()
{

    // Establishes number of gallons car can hold
    int gasTank;
    cout << "Enter the number of gallons the car's gas tank can hold: ";
    cin >> gasTank;
    
    // Establishes miles that can be driven by car on a tank of gas 
    int maxRangeInMiles;
    cout << "Enter the number of miles that can be driven on a tank of gas: ";

    // Calculates and displays mpg the car gets
    cin >> maxRangeInMiles;
    cout << "The mpg this car gets is " << maxRangeInMiles / (double)gasTank << endl;



    return 0;
}