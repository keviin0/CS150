// Reverse.cpp - Reverses an array's elements
// Author: Kevin Hu
// Lab 14 Project 2
// Problem Statement - Reversing an array
/*
    Algorithm:
        1. Populate an array with random numbers between min and max
        2. Call a second function that reverses all elements in an array
            a. Swap first and last elements and work inwards
        3. Call a third function that prints the array with a heading
*/

#include <iostream>
#include <string>
using namespace std;

void fillRandom(int array[], int size, int min, int max);
void reverseElements(int array[], int size);
void printArrayAndTotal(string heading, int array[], int size);

int main()
{
    string heading;
    int userSelection;
    while(true)
    {
        cout << "Pick a number between 10 and 20: ";
        cin >> userSelection;
        if (userSelection < 10 || userSelection > 20)
        {
            cout << "Please input a valid integer between 0 and 20" << endl;
            continue;
        }
        else
        {
            break;
        }
    }
    
    int array[userSelection]; // Create array of the size inputted by user
    int sizeOfArray = sizeof(array) / sizeof(int); // Calculate size of array
    
    fillRandom(array, sizeOfArray, 100, 200); // Populate array with userSelection random numbers between 100 and 200

    heading = "Original array of size " + to_string(sizeOfArray) + ":";
    printArrayAndTotal(heading, array, sizeOfArray); // Print original array
    
    heading = "Reversed array of size " + to_string(sizeOfArray) + ":";
    reverseElements(array, sizeOfArray); // Reverse elements of array
    printArrayAndTotal(heading, array, sizeOfArray); // Print new reversed array

    return 0;
}

void fillRandom(int array[], int size, int min, int max) // Populates array with size random numbers
{
    for ( int i = 0; i < size; i++ )
    {
        array[i] = rand() % ((max + 1) - min) + min;
    }

    return;
}

void reverseElements(int array[], int size) // Reverses elements of array by swapping opposite elements
{
    int temp;
    for (int i = 0; i <= (size - 1) / 2; i++) {
        temp = array[i];
        array[i] = array[size - (i + 1)];
        array[size - (i + 1)] = temp;
    }

    return;
}

void printArrayAndTotal(string heading, int array[], int size) // Calculates sum and prints elements of given array
{
    int total;
    cout << heading << endl;
    for (int i = 0; i < size; i++ )
    {
        cout << array[i] << " ";
        total += array[i];
    }
    cout << endl;
    cout << "Total sum of array: " << total << endl;
    
    return;
}