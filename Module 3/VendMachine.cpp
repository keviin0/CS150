// VendMachine.cpp - Determines the change to be dispensed from a vending machine
// Author: Kevin Hu
// Module 3 Project 2
#include <iostream>
using namespace std;

int main()
{

    int cost = 35;
    int change = 100 - cost;
    int numQuarters, numDimes, numNickels;
    numQuarters = change / 25;
    numDimes = (change % 25) / 10;
    numNickels = (change % 25) % 10 / 5;
    cout 
        << "The price of your item is " << cost << " cents and you gave me $1.00\n"
        << "Your change is " << change << " cents:\n"
        << numQuarters << " quarters,\n"
        << numDimes << " dimes, and\n"
        << numNickels << " nickels."
        << endl;

    return 0;

}