// LazyCaterer.cpp - Executes the Lazy Caterer's Sequence
// Lab 11 Project 1
// Author: Kevin Hu
// Problem Statement: Having main call a recursive function
/* 
    Algorithm:
        1. Create a variable that will be used to store the number of cuts that is prompted from user
        2. Prompt user for number of cuts
            a. If user enters a negative number, terminate the program and return 0
            b. If the user enters a number > 20 then main displays an error message and prompts for another mumber
        3. Otherwise, call a function lazy that is of type long long and takes an int parameter named cuts
            a. Said function will return the maximum number of pieces to the calling program using the following formula
                i. If n = 0, then the number of pieces is 1
                ii. If n > 0, then the number of pieces is  n  plus the number of pieces for (n - 1)
        4. Print results
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

long long lazy (int);

int main ()
{

    do
    {

        // Initialize variables
        int n = 0; // n is the number of cuts
        long long result; // where the return value of lazy will be stored

        // Prompt use for hnumber of cuts
        cout << "Enter a number between 0 and 20 (or -1 to exit): ";
        cin >> n;
        cin.clear();
        
        // Check for exit or error
        if ( n < 0 )
        {
            return 0;
        }
        else if ( n > 20 )
        {
            cout << "Invalid number. Enter a valid number within the range of 1 - 20." << endl;
            continue;
        }
        else 
        {
            result = lazy(n);
        }

        // Print the results
        cout << "With " << n << " cuts, you can create " << result << " pieces." << endl;

    } while (true);
    
}

long long lazy (int cuts)
{

    int temp = cuts; // temp var to be modified in loop
    long long runningTotal = 0; // running total to keep track of number of pieces

    do
    {
        
        for (int i = 0; i <= cuts; i++)
        {
            if (i == 0) 
            {
                runningTotal += 1;
            }
            else if (i == cuts)
            {               
                runningTotal += cuts;
            }
            else
            {
                runningTotal += i;
            }
            
            
        }

        return runningTotal;

    } while (true);
    

}