// Geometric.cpp - Calculates some geometric problem chosen by user
// Author: Kevin Hu
// Module 7 Project 1 
// Problem Statement - Using switch cases and properly format numbers
/* 
    Algorithm:
        1. Initialize constants and variables
        2. Prompt user to determine how to proceed using cout for menu and cin
        3. Use a switch statement to determine which geometric figure to calculate the area of or to quit
        4. Prompt user for necessary parameters for calculations
        5. Compute geometric calculation
        6. Print calculation
*/

#include <cmath>
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main ()
{

    // Initialize constants and variables
    const string SHAPE_CIRCLE = "circle", SHAPE_REC = "rectangle", SHAPE_TRI = "triangle";
    char selection;
    double area, base, height, radius, length, width;
    string shape;

    // Prompt user to determine how to proceed
    cout 
    << "****** Geometric Figure Calculator *******\n"
    << "  C - Calculate the area of a Circle\n"
    << "  R - Calculate the area of a Rectangle\n"
    << "  T - Calculate the area of a Triangle\n"
    << "  Q - Quit\n"
    << "         Enter your choice:"
    << endl;
    cin >> selection;
    selection = toupper(selection);

    // Use a switch statement to determine which geometric figure to calculate the area of or to quit
    switch (selection)
    {
        case 'C':
            shape = SHAPE_CIRCLE;
            cout << "Please enter the radius of the circle: "; // Prompt user for necessary parameters for calculations
            cin >> radius;
            area = M_PI * pow(radius, 2.0); // Compute geometric calculation
            break;
        case 'R':
            shape = SHAPE_REC;
            cout << "Please enter the rectangle's length: "; //Prompt user for necessary parameters for calculations
            cin >> length;
            cout << "Please enter the rectangle's width: ";
            cin >> width;
            area = length * width; // Compute geometric calculation
            break;
        case 'T':
            shape = SHAPE_TRI;
            cout << "Please enter the triangle's base: "; //Prompt user for necessary parameters for calculations
            cin >> base;
            cout << "Please enter the triangle's height: ";
            cin >> height;
            area = 0.5 * base * height; // Compute geometric calculation  
            break;      
        case 'Q':
            exit(0);
        default:
            cout << "Invalid case.";
            exit(1);
    }

    // Print calculation
    cout << fixed << setprecision(6);
    if (shape == SHAPE_REC)
    {
        cout << "The area of a " << shape << " with length " << length << " and width " << width << " is " << area;
    } 
    else if (shape == SHAPE_CIRCLE)
    {
        cout << "The area of a " << shape << " with radius " << radius << " is " << area;
    }
    else
    {
        cout << "The area of a " << shape << " with base " << base << " and height " << height << " is " << area;
    }

    return 0;
}