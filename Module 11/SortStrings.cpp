// SortString.cpp - Sorts strings lexicographically
// Lab 11 Project 3
// Author: Kevin Hu
// Problem Statement - Using strings and functions to sort the strings lexicographically
/*
    Algorithm:
        1. Run function getStrings that prompts for three strings and stores them in three reference parameter variables
        2. Pass the strings stored in the variables by getStrings through the reference parameters in sortStrings and sort them in lexicographic order
        3. Replace the variables referenced to by the parameters according to the lexicographic order of the strings
        4. Print the three strings on the console in lexicographic order
*/

#include <string>
#include <iostream>
using namespace std;

void getStrings(string &a, string &b, string &c);
void sortStrings(string &a, string &b, string &c);

int main()
{
    do
    {
        // Initialize string variables to be referenced in functions
        string a, b, c;

        // getStrings
        getStrings(a, b, c);

        // sortStrings
        sortStrings(a, b ,c);

        cout << a << " " << b << " " << c << endl;

    } while (true);
    
    return 0;
    
}

void getStrings(string &first, string &second, string &third)
{

    // first string
    cout << "Enter your first string (type \"quit\" to end the program)): " << endl;
    getline(cin, first);

    // second string
    cout << "Enter your second string (type \"quit\" to end the program)): " << endl;
    getline(cin, second);

    // third string
    cout << "Enter your third string (type \"quit\" to end the program)): " << endl;
    getline(cin, third);

    return;

}

void sortStrings(string &low, string &mid, string &high)
{
    string temp; // temp var to hold strings while switching

    if (low == "quit" || mid == "quit" ||  high == "quit")
    {
        exit(0);
    }
    else if (low <= mid && mid <= high)          // 1 2 3
    {
        ; // do nothing
    }
    else if (low <= high && high <= mid)      // 1 3 2
    {
        temp = mid;
        mid = high;
        high = temp;
        
    }
    else if (mid <= low && low <= high)     // 2 1 3
    {
       temp = mid;
       mid = low;
       low = temp;
    }
    else if (mid <= high && high <= low)     // 2 3 1
    {
        temp = mid;
        mid = low;
        low = temp;
        temp  = mid;
        mid = high;
        high = temp;
    }
    else if (high <= low & low <= mid)      // 3 1 2
    {
        temp = mid;
        mid = high;
        high = temp;
        temp = mid;
        mid = low;
        low = temp;
    }
    else                                                   // 3 2 1
    {
        temp = low;
        low = high;
        high = temp;
    }

    return;
}