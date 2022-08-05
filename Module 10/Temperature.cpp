// Temperature.cpp - Converting temps from Farenheit to Celsius
// Module 10 Project 2
// Author: Kevin Hu
// Problem Statement - Writing a function which can convert temperatures in either direction

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void convert(double, char);

int main()
{

    convert(100.0, 'C') ;
    convert(32.0, 'F') ;  
    convert(-40, 'C') ;
    convert(0, 'X') ;

    return 0;

}

void convert (double degrees, char scale)
{
    if ( tolower(scale) == 102 ) // check if lowercase scale ascii value if 102 which is equivalent to "f"
    {
        double degreesConverted = 5.0 * (degrees - 32.0)/9.0;
        cout << fixed << setprecision(1) << degrees << " degrees Fahrenheit = " << degreesConverted << " Celsius" << endl;
    }
    else if (tolower(scale) == 99) // check if lowercase scale ascii value if 99 which is equivalent to "c"
    {
        double degreesConverted = (9.0 * degrees/5.0) + 32;
        cout << fixed << setprecision(1) << degrees << " degrees Celsius = " << degreesConverted << " Farenheit" << endl;
    }
    else
    {
        cout << "INVALID SCALE";
        return;
    }
}

