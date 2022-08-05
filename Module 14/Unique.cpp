// Unique.cpp - Allows use to enter up to 10 UNIQUE numbers into an array
// Author: Kevin Hu
// Lab 14 Project 3
// Problem Statement - Putting user input into an array
/*
    Algorithm:
        1. Create an array of 10 int's and a counter for number of unique elements being stored in the array
            a. Initialize counter to 0 and all of the elements in the array to 0
        2. Run a function exist which takes an array of ints as a parameter, the number of elements stored in the array, and an element to find in the array.
           If the array contains the element to find then the function returns true otherwise the function returns false
        3. Run a loop in main which prompts for #'s until either the user enters 0 a sentinel or until the array is full. 
        4. Print the number of unique elements in the array, followed by a list of the unique elements
*/
#include <iostream>
#include <string>
#include <iomanip>
#include <cstring>
#include <ctype.h>
using namespace std;

bool exist(int array[], int numberOfElements, int elementToFind);
void split(int array[], string inputStr);
void reset(int array[]);

int main()
{

    int uniqueNums[10] = {};
    for (int i = 0; i < 9; i++) // Initialize unique nums with 10 0's
    {
        uniqueNums[i] = 0;
    }
    int numsInput[10] = {};
    int counter = 0;
    string inputStr;
    bool flag = true;

    cout << "Enter (up to) 10 unique positive numbers separated by spaces (use 0 to stop):" << endl;
    while (flag)
    {
        getline(cin, inputStr); // Prompt for user input
        reset(numsInput); // Resets temp array used to parse user input
        split(numsInput, inputStr); // Parse user input
        for (int i = 0; i < (sizeof(numsInput)/sizeof(int)) + 1; i++)
        {
            if(numsInput[i] == -1) // Check if temp array is empty
            {
                break;
            }
            else if (numsInput[i] == 0 || counter == 10) // Check if sentinel entered or if final array is full at  a capacity of 10
            {  
                flag = false;
                break;
            }
            else if(exist(uniqueNums, sizeof(uniqueNums)/sizeof(int), numsInput[i])) // If the number exists error and prompt again
            {
                cout << "** " << numsInput[i] << " has already been entered **" << endl;
            }
            else // If the number is unique append to the unique nums int array
            {
                uniqueNums[counter] = numsInput[i];
                counter++;
            }
        }
    }
    cout << "The " << counter << " unique numbers inputted: " << endl;
        for (int i = 0; i < sizeof(uniqueNums)/sizeof(int); i++)
        {
            if(uniqueNums[i] == 0)
            {
                break;
            }
            cout << uniqueNums[i] << " ";
        }
    cout << endl;

    return 0;
}

bool exist(int array[], int numberOfElements, int elementToFind) // Checks if an element in a given array exists
{
    for (int i = 0; i < numberOfElements; i++)
    {
        if ( array[i] == elementToFind )
        {
            return true; // If element exists in array return true
        }
        else
        {
            continue; // if element does not exist in array return false
        }
    }
    return false;
}

void reset(int array[]) // used to reset temp array
{
    for (int i = 0; i < 10; i++)
    {
        array[i] = -1; // Resets temporary array used to parse user input
    }
}

void split(int array[], string inputStr) // Parse user input and return and populate a temp int array used to compare to final unique array
{
    int j = 0; // index for temp array
    string tempStr = "";
    for(int i = 0; i < inputStr.length(); i++)
    {
        if ( isspace(inputStr[i]) ) // If whitespace, that means a full number has been read so append the string as an integer to the int array and reset temp str
        {
            array[j] = stoi(tempStr);
            tempStr = "";
            j++;
        }
        else
        {
            tempStr.push_back(inputStr[i]); // Add the char to tempstr which will eventually include the number inputted
        }
    }
    array[j] = stoi(tempStr);
}