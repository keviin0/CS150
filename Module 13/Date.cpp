// Date.cpp - Defines all functions of the Date class
// Module 13 Lab 13
// Author: Kevin Hu
/* Description: Implementation of functions for Date class

    Constructor should only accept reasonable values for month, day, and year.
    If user tries to create a Date object with any invalid argument, create the Date object with default values.

*/

#include "Date.h"
#include <string>
#include <iomanip>
#include <iostream>
using namespace std;


// Constructor
Date::Date(int selected_month, int selected_day, int selected_year) 
{
    int daysInMonth; // Used to verify days in month

    cout << "The Date object is being created with month " << selected_month << ", day " << selected_day << ", and year " << selected_year << endl;
    if (selected_month < 1 || selected_month > 12) // Verify that inserted month is valid
    {
        setDefault();
        return;
    }

    switch(selected_month) // establish max days in selected month and sets a string for later print functions
    {
        case 1:
            daysInMonth = 31;
            setMonthString("January");
            break;
        case 2:
            daysInMonth = 29;
            setMonthString("February");
            break;
        case 3:
            daysInMonth = 31;
            setMonthString("March");
            break;
        case 4:
            daysInMonth = 30;
            setMonthString("April");
            break;
        case 5:
            daysInMonth = 31;
            setMonthString("May");
            break;
        case 6:
            daysInMonth = 30;
            setMonthString("June");
            break;
        case 7:
            daysInMonth = 31;
            setMonthString("July");
            break;
        case 8:
            daysInMonth = 31;
            setMonthString("August");
            break;
        case 9:
            daysInMonth = 30;
            setMonthString("September");
            break;
        case 10:
            daysInMonth = 31;
            setMonthString("October");
            break;
        case 11:
            daysInMonth = 30;
            setMonthString("November");
            break;
        case 12:
            daysInMonth = 31;
            setMonthString("December");
            break;
    }

    if (selected_day > daysInMonth || selected_day < 1 || selected_year < 1900 || selected_year > 2099) // Errant day and year checks
    {
        setDefault();
        return;
    }   
    else
    {
        month = selected_month;
        day = selected_day;
        year = selected_year;
    }
}

// setter definitions
void Date::setDay(int inputDay)
{
    day = inputDay;
}

void Date::setMonth(int inputMonth)
{
    month = inputMonth;
}

void Date::setYear(int inputYear)
{
    year = inputYear;
}

void Date::setMonthString(string inputMonthString)
{
    month_string = inputMonthString;
}

// member function print definitions
void Date::printDateOne()
{ 
    cout << month << "/" << day << "/"<< year << endl; // prints in x/y/z
}

void Date::printDateTwo()
{
    cout << month_string << " " << day << ", " << year << endl; // prints in x(word).y.z
}

void Date::printDateThree()
{
    cout << day << "." << month_string << "." << year << endl; // prints y.x(word).z
}

void Date::printDateFour()
{
    string s;
    string m;
    cout << year << "." << s.append(string((month < 10) ? "0" + to_string(month): to_string(month))) << "." << m.append(string((day < 10) ? "0" + to_string(day): to_string(day))) << endl; // prints z.x.y
}

void Date::setDefault() // sets default arguments in case of errant instantiation
{
    month = 1;
    day = 1;
    year = 2000;
    setMonthString("January");
}

