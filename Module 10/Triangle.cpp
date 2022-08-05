// Triangle.cpp - Printing triangles
// Module 10 Project 1
// Author: Kevin Hu
// Problem Statement - Relocating code into functions
/*
    Algorithm:
        1. Create the outside loop that initializes variables and prompts user for the size of the triangle, prints triangle for that size, and loop back prompting for next triangle's size. One triangle per iteration (A request for 0 should terminate the program)
        2. Middle loop should print each row of the triangle whose parameters should be established by outer loop. One row per each iteration
        3. Inside loop should print the asteriks in each row. One iteration per asterik

*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void triangle (int);

int main()
{

    do // outer loop
    {
        int size = 0; // resets triangle size every loop

        cout << "How large of a triangle would you like? (Input a number from 1 - 20)" << endl;
        cin >> size;

        triangle(size);

    } while (true);
}

void triangle(int width)
{
    int j = 1; // inner loop increment/decrement
    if (width == 0) { // terminate loop if triangle size set to 0
            exit(0);
        }
        else
        {
            for (int i = 1; i <= width * 2 - 1; i++) // middle loop
            {
                if (i <= width) {
                    for (j = 1; j < i + 1; j++) // inner loop
                    {
                        
                        cout << "*";

                    } 
                } 
                else 
                {
                    for (j = width; j > i % width; j--) // inner loop
                    {
                        
                        cout << "*";

                    } 
                }
                cout << endl;
            }
        }
}