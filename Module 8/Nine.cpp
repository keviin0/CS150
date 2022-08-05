// Nine.cpp - Determines if a number is evenly divisible by 9
// Lab 8 Project 2
// Author: Kevin Hu
// Problem Statement - Using loops to parse a string
/*
    Algorithm:
        1. Prompt for a whole number and read the user’s input into a  string.
        2. Calculate the sum of the digits in the number by looping through each character (each digit) in the  string,  converting it to a number, and adding it to the sum.
        3. If the sum of the digits is 0, then exit the program
        4. Otherwise, determine if the sum of the digits in the number is evenly divisible by 9.
        5. Using that result, print a message to the user indicating whether or not the original number is divisible by 9.
        6. Go back to step 1.
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    do
    {
        // Initialize variables and reset with each loop
        string number = ""; // number to be determined whether or not divisible by 9
        int sum = 0; // sum of the digits in "number"

        // Prompt for a whole number and read user's input into a string
        cout << "Input a whole number: ";
        cin >> number;

        if (number[0] - '0' == 0)
        {
            return 0;
        }

        for(int i = 0; i < number.length(); i++)
        {
            sum += number[i] - '0';
        }

        if (sum % 9 == 0)
        {
            cout << "The original number " << number << " is divisible by 9." << endl;
        }
        else
        {
            cout << "The original number " << number << " is NOT divisible by 9." << endl;
        }


    } while (true);
    


}