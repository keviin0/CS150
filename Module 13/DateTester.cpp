// DateTester.cpp - Creates test instances of Date.h and Date.cpp
// Author: Kevin Hu
// Module 13 Lab 13
// Problem statement: Using a header and definition file to create objects in a separate instance file

#include <iostream>
#include "Date.h"
#include "Date.cpp"
using namespace std;

int main()
{

    Date a(1, 5, 2022);
    a.printDateOne();
    a.printDateTwo();
    a.printDateThree();
    a.printDateFour();
    cout << endl;

    Date b(9, 14, 1970);
    b.printDateOne();
    b.printDateTwo();
    b.printDateThree();
    b.printDateFour();
    cout << endl;

    Date c(12, 31, 2023);
    c.printDateOne();
    c.printDateTwo();
    c.printDateThree();
    c.printDateFour();
    cout << endl;

    Date d(4, 31, 2022); 
    d.printDateOne();
    d.printDateTwo();
    d.printDateThree();
    d.printDateFour();
    cout << endl;

    Date e(13, 1, 1970);
    e.printDateOne();
    e.printDateTwo();
    e.printDateThree();
    e.printDateFour();
    cout << endl;

    Date f(8, 15, 2100);
    f.printDateOne();
    f.printDateTwo();
    f.printDateThree();
    f.printDateFour();

    

    return 0;
}