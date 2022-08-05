// Fibonacci.cpp - Prints out a requested # of numbers from a Fibonacci sequence
// Module 10 Project 3
// Author: Kevin Hu
// Problem Statement - Using function to print arbitrary # of numbers
/* 
    Algorithm:
        1. Promput user for number from 1-25
        2. Pass number to fibonacci as an int
        3. Use the following rules to computer the next numbers in the sequence and print them
            a. The first number in the sequence is 0 and second numbers is 1.
            b. Any other number in the sequence is the sum of the prior 2 numbers.
*/

#include <iostream>
using namespace std;

void fibonacci (int);

int main()
{
    int selection;
    do
    {
        cout << "Enter a number from 1 to 25: ";
        cin >> selection;
        if (selection < 0 || selection > 25)
        {
            cout << "Invalid number. Try again." << endl;
            continue;
        } 
        else if ( selection == 0 )
        {
            return 0;
        }

        fibonacci(selection);

    } while (true);
    
}

void fibonacci(int seq)
{
    // temp vars to store previous 2 nums
    int a = 0; 
    int b = 1;

    for (int i = 0; i < seq; i++)
    {
        if (seq == 1 || seq == 2) // don't print comma
        {
            if (seq == 1)
            {
                cout << "That Fibonacci sequence is: 0" << endl;
                break;
            }
            cout << "That Fibonacci sequence is: 0, " << a + b << endl;
            break;
        }
        else if (i == seq - 1)
        {
            cout << a + b << endl;
        }
        else if (i == 0) // first num
        {
            cout << "That Fibonacci sequence is: 0";
            a = 0;
        }
        else if (i == 1) // second num
        {
            cout << ", 1, ";
        }
        else 
        {
            cout << a + b << ", "; // next number is sum of previous two numbers
            a = b; // update first number
            b = a + b; // update second number
        }
    }

}