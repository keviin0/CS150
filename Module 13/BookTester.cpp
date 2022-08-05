// BookTester.cpp
// Author: Kevin Hu
// Module 13 Project 1
// Problem statement: Using a header and definition file to create objects in a separate instance file

#include "Book.h"
#include "Book.cpp"
#include <string>
#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    // Books using full constructor
    Book a,b;

    //Books using no argument constructor
    Book c,d;

    a = Book("Gone With The Wild", "Mitchell Margaret", 1532, 45.91);

    b = Book("Harry Potter In Hawaii", "J. K. Roller", 811, 19.24);

    c = Book();
    c.setTitle("Miserable");
    c.setAuthor("Stephen Kong");
    c.setPages(1047);
    c.setCost(37.25);

    d = Book();
    d.setTitle("Huckleberry Finn");
    d.setAuthor("Mark Twang");
    d.setPages(370);
    d.setCost(14.71);

    // header
    cout << "          Title                 Author         Pages     Cost" << endl;
    cout << "-----------------------  -------------------  -------  --------" << endl;
    printBook(a);
    printBook(b);
    printBook(c);
    printBook(d);
    cout << "                                             ========  ========" << endl;
    cout << "                             TOTAL            " << setw(7) << a.getPages() + b.getPages() + c.getPages() + d.getPages() << "  " << fixed << setprecision(2) << setw(8) << a.getCost() + b.getCost() + c.getCost() + d.getCost();

}