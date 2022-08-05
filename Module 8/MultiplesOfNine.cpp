// MultiplesOfNine.cpp - Calculates the first nine multiples of 9
// Lab 8 Project 3
// Author: Kevin Hu
// Problem statement - Going from int to string
/* Algorithm
    1. Prompt for a number 0 - 9
    2. Use if-else statement to validate that the number is valid and handle the 0 case
    3. Subtract 1 from number taken and append the difference between that number and 9 to the end
    4. Print out the calculated multiple of 9
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{

    do
    {

        // Initialize variables
        int number = 0; // holds user inputted number
        int multiple = 0; // holds final multiple

        // Prompt for number
        cout << "Enter a number from 0-9 whose multiple of 9 you wish to calculate (-1 to exit): ";
        cin >> number;

        // if else checks
        if (number == -1)
        {
            return 0; // sentinel case
        }
        else if (number > 9) // Number is too large error case
        {
            cout << "Number is too large. Input a number in the valid range 0-9." << endl;
            continue;
        }
        else if (number < -1) // Number is too small error case
        {
            cout << "Number is too small. Input a number in the valid range 0-9." << endl;
            continue;
        }
        else if (number == 0) // Zero case
        {
            cout << "The multiple of 9 and " << number << " is 0." << endl;
        }
        else
        {
            multiple = (number - 1) * 10 + (9 - (number - 1));
            cout << "The multiple of 9 and " << number << " is " << multiple << "." << endl;
        }
    } while (true);



}