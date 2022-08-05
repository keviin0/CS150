// FloorToCeiling.cpp - Displays floor, ceiling, and absolute value of a number
// Module 4 Project 2
// Author: Kevin Hu

#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    // Establish floating number to analyze
    double floatingNum;
    cout << "Input floating point number: ";
    cin >> floatingNum;

    // Print floor value of floating number
    cout << "Floor value of " << floatingNum << " is " << floor(floatingNum) << endl;

    // Print ceiling value of floating number
    cout << "Ceiling value of " << floatingNum << " is " << ceil(floatingNum) << endl;

    // Print absolute value of floating number
    cout << "Absolute value of " << floatingNum << " is " << abs((int)floatingNum) << endl;





    return 0;
}