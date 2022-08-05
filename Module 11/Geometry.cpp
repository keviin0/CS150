// Geometry.cpp - Use a menu to prompt for a specific figure and using specifications that are prompted for, calculate and display the figure's surface area and volume
// Module 11 Project 1
// Author: Kevin Hu
// Problem Statement - Use functions to display the initial menu and call another function to determine area and volume of selected figure
/* 
    Algorithm:
        1. Initialize constants and variables
        2. Prompt user to determine how to proceed using cout for menu and cin
        3. Use a switch statement to determine which geometric figure to calculate the area and volume of or to quit
        4. Prompt user for necessary parameters for calculations
        5. Compute geometric calculation
        6. Print calculation
*/


#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

const string SHAPE_SPHERE = "sphere", SHAPE_CUBE = "cube", SHAPE_PYR = "pyramid";

char menu();
void sphere();
void cube();
void pyramid();

int main ()
{

    char selection; // keep track of selection from menu

    do
    {

        selection = menu();

        switch (selection) // Use a switch statement to determine which geometric figure to calculate the area of or to quit
        {
            case 'S':
                sphere();
                break;
            case 'C':
                cube();
                break;
            case 'P':
                pyramid();
                break;      
            case 'Q':
                exit(0);
            default:
                cout << "Invalid case.";
                break;
        }
    } while (true);
    
    return 0;
    
}

char menu()
{
    char selection;

    // Prompt user to determine how to proceed
    cout 
    << "****** Geometric Figure Calculator *******\n"
    << "  S - Calculate the area and volume of a Sphere\n"
    << "  C - Calculate the area and volume of a Cube\n"
    << "  P - Calculate the area and volume of a Pyramid\n"
    << "  Q - Quit\n"
    << "         Enter your choice:"
    << endl;
    cin >> selection;

    return toupper(selection);

}

void sphere()
{

    // Initialize constants and variables
    double area, volume, radius;
    string shape;

    shape = SHAPE_SPHERE;
    while(true)
    {
        cout << "Please enter the radius of the circle: "; // Prompt user for necessary parameters for calculations
        cin >> radius;
        if (radius <= 0) // error handling to make sure a positive number is added
        {
            cout << "Please enter a positive number." << endl;
            continue;
        }
        break;
    }
    area = 4 * M_PI * pow(radius, 2.0); // Compute geometric calculation
    volume = 4.0 / 3.0 * (M_PI * pow(radius, 3));
    
    // Print calculation
    cout << fixed << setprecision(6);
    cout << "The area of a " << shape << " with radius " << radius << " is " << area << " and its volume is " << volume << endl;

}

void cube()
{
    // Initialize constants and variables
    double area, volume, side;
    string shape;

    shape = SHAPE_CUBE;
    while(true)
    {
        cout << "Please enter the cube's side length: "; //Prompt user for necessary parameters for calculations
        cin >> side;
        if (side <= 0) // error handling to make sure a positive number is added
        {
            cout << "Please enter a positive number." << endl;
            continue;
        }
        break;
    }
    area = 6.0 * pow(side, 2); // Compute geometric calculation
    volume = pow(side, 3);
    
    // Print calculation
    cout << fixed << setprecision(6);
    cout << "The area of a " << shape << " with side length " << side << " is " << area << " and its volume is " << volume << endl;
}

void pyramid()
{
    // Initialize constants and variables
    double area, volume, base, height;
    string shape;

    shape = SHAPE_PYR;
    while(true)
    {
        cout << "Please enter the triangle's base: "; //Prompt user for necessary parameters for calculations
        cin >> base;
        cout << "Please enter the triangle's height: ";
        cin >> height;
        if (base <= 0 || height <= 0) // error handling to make sure a positive number is added
        {
            cout << "Please enter a positive number." << endl;
            continue;
        }
        break;
    } 
    area = pow(base, 2) + 2.0 * base * sqrt((pow(base, 2)/4.0) + pow(height, 2)); // Compute geometric calculation  
    volume = pow(base, 2) * height / 3.0;

    // Print calculation
    cout << fixed << setprecision(6);
    cout << "The area of a " << shape << " with base " << base << " and height " << height << " is " << area << " and its volume is " << volume << endl;
}