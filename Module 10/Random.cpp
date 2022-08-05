// Random.cpp
// Module 10 Project 4
// Author: Kevin Hu
// Problem Statement - Generating random numbers through a function with multiple parameters
/* 
    Algorithm:
        1. Pass min, max, and quantity to printRandom()
        2. Generate n random numbers between min and max 
        3. Print the numbers out
*/

#include <iostream>
using namespace std;

void printRandom(int, int, int);

int main()
{
    printRandom(100, 200, 25) ; 
    printRandom(1, 6, 40) ;
    printRandom(-6, 6, 10) ;   // negative min  
    printRandom(10, 10, 10) ;  // min>= max
    printRandom(20, 30, -2) ;  // count <= 0  
}

void printRandom(int min, int max, int count)
{

    // Error handling
    if (min < 0) // minimum less than 0
    {
        cout << "The minimum is less than 0" << endl;
        return;
    }
    else if (min >= max) // minimumn greater than or equal to max
    {
        cout << "The minimum is greater than or equal to 0" << endl;
        return;
    }
    else if ( count < 0) // count is negative
    {
        cout << "The requested # of numbers is negative" << endl;
        return;
    }

    cout << "Here are " << count << " numbers between " << min << " and " << max << endl;
    for (int i = 0; i < count; i++)
    {
        cout << min + ( rand() % ( max - min + 1 ) ) << " ";
    }
    cout << endl;
    
}