// Trig.cpp - Calculates sine cosine and tangent values for a specified angle
// Module 4 Project 3
// Author: Kevin Hu

#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    // Get angle to be converted
    int degrees;
    cout << "Please enter an angle (in degrees): ";
    cin >> degrees;

    // Calculate sine cosine and tangent value for angle and print
    double radians = (M_PI * degrees) / 180.0;
    cout << "The sine of " << degrees << " degrees is " << sin(radians) << endl;
    cout << "The cosine of " << degrees << " degrees is " << cos(radians) << endl;
    cout << "The tangent of " << degrees << " degrees is " << tan(radians) << endl;
    cout << "(" << degrees << " in radians is " << radians << ".)" << endl;

    return 0;
}