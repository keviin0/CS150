// Repeat.cpp - Repeats a word a specified number of times
// Lab 11 Project 4
// Author: Kevin Hu
// Problem Statement - Using defulat argument values in function prototype
/*
    Algorithm:
        1. Create a function prototype named repeat that has the following parameters
            a. a string named word with a default value of *
            b. a int named how_many with a default value of 5
        2. Call the function with different combinations of arguments and print to console
*/

#include <iostream>
#include <string>
using namespace std;

void repeat(string word = "*", int how_many = 5);

int main()
{

    repeat( );
    repeat( "$" );
    repeat ( "Rah", 3 );

    return 0;
}

void repeat(string word, int how_many)
{

    for (int i = how_many; i > 0; i--)
    {
        cout << word << " ";
    }
    cout << endl;

}