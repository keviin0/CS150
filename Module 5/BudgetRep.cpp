// BudgetRep.cpp - Formats a budget report
// Lab 5 Project 2
// Author: Kevin Hu

#include <string>
#include <iomanip>
#include <iostream>
using namespace std;

int main()
{

    // Create four  string  named constants for the item descriptions
    const string item1 = "Apartment";
    const string item2 = "Food";
    const string item3 = "Utilities and Gas";
    const string item4 = "Miscellaneous";

    // Four doubles representing respective expense amounts
    double rent = 1497.82;
    double food = 325.0;
    double util = 270.0;
    double misc = 91.40;

    // String for dashes separating column headings from actual data
    string dashes = "";
    dashes.assign(40, '-');

    // String for equals separating total expense
    string equals = "";
    equals.assign(20, '=');

    //title and column headings with dash separator
    cout
    <<  "      MONTHLY BUDGET REPORT\n"
    << setw(20) << left << "  Item  " << right << "  Price  \n"
    << dashes << endl;
    
    // Fixing the floats to two numbers after decimal
    cout << fixed << setprecision(2);

    // Aligning each item to the left with a buffer of 20 and aligning prices to the right with a buffer of 10.
    cout << setw(20) << left << item1 << "$" << setw(10) << right << rent << endl;
    cout << setw(20) << left << item2 << "$" << setw(10) << right << food << endl;
    cout << setw(20) << left << item3 << "$" << setw(10) << right << util << endl;
    cout << setw(20) << left << item4 << "$" << setw(10) << right << misc << endl;

    // equal sign separator for total expense
    cout << setw(40) << right << equals << endl;

    // printing total expesnse
    cout << setw(20) << left << "      (Total)" << "$" << setw(10) << right << rent + food + util + misc << endl;

    return 0;
}
