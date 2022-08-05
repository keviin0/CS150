// ReverseFib.cpp - Prints out a requested # of numbers from a Fibonacci sequence in reverse
// Lab 14 Project 1
// Author: Kevin Hu
// Problem Statement - Populate an array and print it out in reverse
/* 
    Algorithm:
        1. Create a function fillFibonacci(int, int) that takes an integer array and the size of the array as the second parameter
        2. Using a loop fill the array with Fibonacci numbers in order
        3. Write a second function showReverse(string, int array[], int size) that uses a for loop to print the elements of the array in reverse order
*/

#include <iostream>
#include <string>
using namespace std;

void fillFibonacci(int array[], int size);
void showReverse(string heading, int array[], int size);

int main()
{
    int test[15]; // Create array of size 15
    string header = "First " + to_string(sizeof(test) / sizeof(int)) + " numbers of the Fibonacci sequence: "; // header
    fillFibonacci(test, sizeof(test)/sizeof(int)); // populate test array with the first size of array numbers of fibonacci
    showReverse(header, test, sizeof(test) / sizeof(int) ); // print out the arary in reverse

    return 0;
}

void showReverse(string heading, int array[], int size)
{
    cout << heading << endl;
    for(int i = size - 1; i >= 0 ; i--) // Start from last element and work backwards 
    {
        cout << array[i] << " ";
    }
}

void fillFibonacci(int array[], int size)
{
    for(int i = 0; i < size; i++)
    {
        if ( i == 0 ) // First # of fib
        {
            array[i] = 0;
        }
        else if ( i == 1 ) // Second # of fib
        {
            array[i]= 1;
        }
        else
        {
            array[i] = array[i - 1] + array[ i - 2 ]; // Sum of previous 2 elements
        }
    }
    return;
}
