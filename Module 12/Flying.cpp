// Flying.cpp - Describes a passenger plane's properties and allows the plane to fly, land, board, and disembark passengers
// Lab 12
// Author: Kevin Hu
// Problem Statement - Using classes in C++
/*
    Algorithm:
        1. Develop a class named Plane that has the following properties represented by instance variables (all data member variables should be private)    
            a. inflight – a boolean variable indicating whether the plane is currently in flight
            b. passengers – an  unsigned int for the number of passengers currently onboard plane
            c. capacity – an  unsigned int  for the maximum number of passengers the plane can hold
            d. description - a  string  with the name of the current owner / operator of the plane and its model (for example, Air Canada 747).
        2. Create the following member functions in Plane (all functions should be public)
            a. Plane(unsigned int, string)
                i. constructor
            b. Accessors
                i. getter functions for each instance variable
                ii. defined internally
            c. Modifiers/mutators
                i. setter functions only for description and capacity of instance variables
                ii. defined internally
            d. void fly()
                i. sets value of inflight to true
                ii. if plane is flying, error
                iii. defined externally
            e. void land()
                i. sets value of inflight to false
                ii. if plane is not flying, error
                iii. defined externally
            f. void board(unsigned int)
                i. If plane is flying, error
                ii. otherwise add number passed as argument to # of passengers on board
                iii. verify that the number of pasengers after adding does not exceed capacity of plane
                    1. if # of passenger > capacity of plane, print error error message and set # of passengers to capacity
                iv. defined externally
            g. void disembark(unsigned int)
                i. If plane is flying, error
                ii. otherwise subtract number passed as argument from # of passengers on board
                iii. If resulting number of passengers < 0, set passengers to 0 (not an error)
                iv. defined externally
            h. show()
                i. displays all properties of the plane
                ii. defined externally
*/

#include <iostream>
#include <string>
using namespace std;

class Plane
{
    private:
    bool inflight;
    unsigned int passengers, capacity;
    string description;

    public:
    Plane(unsigned int a = 10, string b = "(none");

    // Accessors/"getters"
    bool getInflight() { return inflight; };
    unsigned int getPassengers() { return passengers; };
    unsigned int getCapacity() { return capacity; };
    string getDescription() { return description; };

    // Modifiers (or mutators) "setters"
    void setInflight(bool a) { inflight = a; };
    void setPassengers(unsigned int a) { passengers = a; };
    void setCapacity(unsigned int a) { capacity = a; };
    void setDescription(string a) { description = a; };

    // functional member functions
    void fly(), land(), show();
    void board(unsigned int);
    void disembark(unsigned int);

};

// constructor
Plane::Plane(unsigned int a, string b)
{
        capacity = a;
        description = b;
        inflight = false;
        passengers = 0;
}

// External definition for Plane's member functions

void Plane::fly()
{
    if (inflight)
    {
        cout << "Error. Plane is already in flight." << endl;
    }
    else
    {
        setInflight(true);
    }
}

void Plane::land()
{
    if (!inflight)
    {
        cout << "Error. Plane is already landed." << endl;
    }
    else
    {
        setInflight(false);
    }
}

void Plane::board(unsigned int a)
{
    if (inflight)
    {
        cout << "Error. Plane is currently in flight. Action skipped." << endl;
    } 
    else if (passengers + a > capacity)
    {
        cout << "Error. Number of passengers attempted to be boarded exceeds capacity of plane. Setting # of passengers to capacity of plane." << endl;
        passengers = capacity;
    }
    else
    {
        passengers = passengers + a;
    }
}

void Plane::disembark(unsigned int a)
{
    int f = passengers - a; // typecast from unsigned to signed
    if (inflight)
    {
        cout << "Error. Plane is currently in flight. Action skipped." << endl;
    } 
    else if (f < 0)
    {
        passengers = 0;
    }
    else
    {
        passengers = passengers - a;
    }
}

void Plane::show()
{
    string s;
    string t;
    cout << "The " << description << " (cap. " << capacity << ") is " << s.append(string((inflight) ? "in flight with ": "landed with ")) << t.append(string((passengers == 0)? "no" : to_string(passengers))) << " passengers" << endl;
}


int main()
{

    Plane a, b;
    a = Plane( 285, "United 737" );
    a.board(20);
    a.board(100);
    a.board(131);
    a.fly();
    cout << "The status of the first plane is:" << endl;
    a.show();

    a.land();
    a.disembark(9999);
    cout << "After landing and disembarking, the status of the plane is:" << endl;
    a.show();

    cout << endl; // separator for ease of reading

    b = Plane();
    b.setDescription("Error plane");
    b.setCapacity(5);
    b.land();
    b.board(20);
    b.disembark(3);
    b.fly();
    b.board(2);
    b.disembark(2);
    b.land();
    b.land();
    cout << b.getPassengers() << endl;
    b.disembark(2);
    b.show();

}