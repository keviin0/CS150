// Overload.cpp - Using overloading functions
// Lab 11 Project 2
// Author: Kevin Hu
// Problem Statement - Using functions with the same name but differing parameters
/*
    Algorithm:
        1. Create various functions with differing parameters but identically named
        2. Call each of the functions in main
        3. With each function print a statement that states the respective parameters of the function
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void action();
void action(double);
void action(int);
void action(int, int);

int main()
{

    action();
    action(1);
    action(1.0);
    action(1, 2);

    return 0;

}

void action()
{
    cout << "No parameter version called" << endl;
}

void action(int one)
{
    cout << "One int version called, received " << one << " as a parameter" << endl;
}

void action(double one)
{
    cout << fixed;
    cout << "One double version called, received " << one << " as a parameter" << endl;
}

void action(int one, int two)
{
    cout << "Two int version called, received " << one << " and " << two << " as parameters";
}