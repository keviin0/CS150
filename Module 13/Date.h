// Date.h - Header file for a date 
// Author: Kevin Hu
// Module 13 Lab 13
/*  Description: Header file for Date class (data members and function prototypes)
    
    Data Member variables
    int month
    int day
    int year

    Functions
    constructor(month = 1, day = 1, year = 2000)
    setters and getters
*/

#ifndef DATE_H
#define DATE_H

#include <string>
using namespace std;

class Date
{

    // Instance variables (private)
    private:
        int month, day, year;
        string month_string;

    // Member functions (public)
    public:

    // constructor
        Date(int = 1, int = 1, int = 2000);
        
    // getters and setters 
        int getMonth() { return month; }
        int getDay() { return day; }
        int getYear() { return year; }
        string getMonthString() { return month_string; }
        void setMonth(int);
        void setDay(int);
        void setYear(int);
        void setMonthString(string);

    // member functions to print date in four formats
        void printDateOne(); // prints in x/y/z
        void printDateTwo(); // prints in x(word).y.z
        void printDateThree(); // prints y.x(word).z
        void printDateFour(); // prints z.x.y

    // helper function to set values to default if errant object instantiation
        void setDefault();

};



#endif