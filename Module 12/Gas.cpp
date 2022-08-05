// Gas.cpp - Gas tank simulator
// Module 12 Project 1
// Author: Kevin Hu
// Problem Statement - Using classes
/*
    Algorithm
        1. Define two global constants:
            a. static double DEFAULT_CAPACITY set to 30.0
            b. static double MINIMUM_CAPACITY set to 4.0
        2. Create a class GasTank with two instance variables:
            a. private double named capacity
            b. private double named level
        3. Define public functions in the GasTank class
            a. constructor with two parameters 
                i. double level with a default of 0.0
                ii. double capacity with default of DEFAULT_CAPACITY
                iii. print values of parameters recived from call
                iv. call setters to verify that parameters make sense and to establish values for capacity and level
            b. a single destructor which is not required to do anyting
        4. Define member functions outside GasTank
            a. getters for level and capacity 
            b. setters for level 
                i. If the value of its parameter is less than 0, then set level to 0.
                ii. if the value of the parameter is more than  capacity,  then set  level  to  capacity.
            c. setter for capacity 
                i. If the value of the parameter is less than  MINIMUM_CAPACITY,  then set capacity to  MINIMUM_CAPACITY.
            d. public function calcFill which returns a double with the value level / capacity
            e. public function showInfo which displays values of level and capacity (to 1 decimal place) and the calculated value returned by calcFill (to 2 decimal places)
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Defining global constants
const static double DEFAULT_CAPACITY = 30.0;
const static double MINIMUM_CAPACITY = 4.0;

class GasTank
{

    private:
    double capacity, level;

    public:

    // constructor
    GasTank(double l = 0, double c = DEFAULT_CAPACITY)
    {

        cout << fixed << setprecision(1);
        cout 
        << "The level inputted to be set for the gas tank is: " << l << "\n" 
        << "The capacity inputted to be set for the gas tank is: " << c << endl;

        setCapacity(c);
        setLevel(l);
        
    }

    // destructor
    ~GasTank() { }

    // member function prototypes
    double getLevel(), getCapacity();
    void setLevel(double), setCapacity(double);
    double calcFill();
    void showInfo();

};

// getters
double GasTank::getLevel() { return level; }
double GasTank::getCapacity() { return capacity; }

// setters
void GasTank::setLevel(double l) 
{ 
    if ( l < 0.0 )
    {
        level = 0.0;
    }
    else if ( l > capacity )
    {
        level = capacity;
    }
    else
    {
        level = l;
    }
}

void GasTank::setCapacity(double c)
{
    if ( c < MINIMUM_CAPACITY )
    {
        capacity = MINIMUM_CAPACITY;
    }
    else
    {
        capacity = c;
    }
}

// other functions
double GasTank::calcFill() { return level / capacity; }

void GasTank::showInfo()
{
    cout << fixed << setprecision(1);
    cout 
    << "Gas tank level: " << level << "\n"
    << "Gas tank capacity: " << capacity << endl;

    cout << fixed << setprecision(0);
    cout 
    << "Calculated fill percentage: %" << calcFill() * 100.0 << endl;
}

int main()
{

    GasTank a = GasTank();
    a.showInfo();

    cout << endl; // separator for ease of reading

    GasTank b = GasTank(13.5);
    b.showInfo();

    cout << endl; // separator for ease of reading

    GasTank c = GasTank(0, 58);
    c.showInfo();

    cout << endl; // separator for ease of reading

    GasTank d = GasTank(18.6, 45.2);
    d.showInfo();

    cout << endl; // separator for ease of reading

    GasTank e = GasTank(1, -30);
    e.showInfo();
    
    cout << endl; // separator for ease of reading

    GasTank f = GasTank(40, 30);
    f.showInfo();

    return 0;
}