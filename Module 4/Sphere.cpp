// Sphere.cpp - prompts for the radius of a sphere and store it in a  double  variable named  "radius", calculates and displays the sphere's area, calculates and displays the sphere's volume
// Module 5 Project 1
// Author: Kevin Hu

#include <iostream>
#include <cmath>
using namespace std;

int main()
{

    // Get radius of sphere
    double radius;
    cout << "Input radius: ";
    cin >> radius;
    
    // Calculate r^2 and r^3 and print their values
    double rSquared = pow(radius, 2);
    double rCubed = pow(radius, 3);
    cout << "r^2 = " << rSquared << endl;
    cout << "r^3 = " << rCubed << endl;

    // Calculate surface area of sphere and print value
    cout << "Surface area of sphere with radius " << radius << " is " << 4 * M_PI * rSquared << endl;

    // Calculate volume of sphere and print value
    cout << "Volume of sphere with radius " << radius << " is " << 4 * M_PI * rCubed / 3 << endl;




    return 0;
}