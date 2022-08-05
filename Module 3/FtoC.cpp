// FtoC.cpp - converts degrees Fahrenheit to Celsius
// Author: Kevin Hu
// Module 3 Project 1
#include <iostream>
using namespace std;

int main()
{

    int degreesFahrenheit;
    cout << "Please enter a temperature (in Fahrenheit): ";
    cin >> degreesFahrenheit;
    
    double degreesCelsius = 5.0 * (degreesFahrenheit - 32.0)/9.0;
    cout << degreesFahrenheit << " degrees Fahrenheit = " << degreesCelsius << " Celsius" << endl;

    return 0;

}