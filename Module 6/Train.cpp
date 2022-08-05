// Train.cpp - Menu to purchase train tickets
// Author: Kevin Hu
// Module 6 Lab 6
// Problem Statement: Minimizing size of program 
/* Algorithm:
    1. Initialize constants and variables
    2. Determine the destination
    3. Determine the fare type
    4. Determine the number of tickets to purchase
 */
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

int main() {

    // Initializing constants and variables.
    const string DEST_LOS_ANGELES = "Los Angeles", DEST_SANTA_MARIA = "Santa Maria", DEST_SAN_FRANCISCO = "San Francisco";
    const string FARE_TYPE_CHILD = "Child", FARE_TYPE_ADULT = "Adult", FARE_TYPE_SENIOR = "Senior";
    double child_fare = 0.0, adult_fare = 0.0, senior_fare = 0.0;

    // Print menu
    cout << "**** CHOOSE A DESTINATION ****" << endl;
    cout << endl;
    cout << left << "       1 - " << DEST_LOS_ANGELES << endl;
    cout << left << "       2 - " << DEST_SANTA_MARIA<< endl;
    cout << left << "       3 - " << DEST_SAN_FRANCISCO << endl;


    // Determine the destination and set fares accordingly
    string destination;
    int city_number;
    cin >> city_number;
    if (city_number == 1) {
        destination = DEST_LOS_ANGELES;
        child_fare = 25;
        adult_fare = 41;
        senior_fare = 28;
    } else if (city_number == 2) {
        destination = DEST_SANTA_MARIA;
        child_fare = 36;
        adult_fare = 58;
        senior_fare = 42;
    } else if (city_number == 3) {
        destination = DEST_SAN_FRANCISCO;
        child_fare = 45;
        adult_fare = 86;
        senior_fare = 61;
    } else { // invalid city error case
        cout << "Not a valid destination, retry." << endl;
        exit(1);
    }

    // Determine Fare Type and set fare choice
    int fare_type;
    int base_fare;
    string fare; // fare choice
    cout << "   Fares to Santa Maria are:  " << endl;
    cout << endl;
    cout << "       1 - " << FARE_TYPE_CHILD << " ($" << child_fare << ")" << endl;
    cout << "       2 - " << FARE_TYPE_ADULT << " ($" << adult_fare << ")" << endl;
    cout << "       3 - " << FARE_TYPE_SENIOR << " ($" << senior_fare << ")" << endl;
    cout << endl;
    cout << " Enter your ticket type (1-3):" << endl;
    cin >> fare_type;

    if (fare_type == 1) 
    {
        fare = FARE_TYPE_CHILD;
        base_fare = child_fare;
    } 
    else if (fare_type == 2) 
    {
        fare = FARE_TYPE_ADULT;
        base_fare = adult_fare;
    } 
    else if (fare_type == 3) 
    {
        fare = FARE_TYPE_SENIOR;
        base_fare = senior_fare;
    } 
    else 
    {
        cout << "Not a valid fare type, retry." << endl;
        exit(2);
    }

    // Determine the number of tickets to purchase and calculate final total price
    int numOfTickets;
    double finalPrice;
    cout << "How many tickets would you like to purchase (1-10)?: " << endl;
    cin >> numOfTickets;
    if (numOfTickets > 10 || numOfTickets < 0) 
    {
        cout << " Not a valid number of tickets, retry." << endl;
        exit(3);
    } 
    else if (numOfTickets == 0)
    {
        exit(0);   
    } 
    else
    {
        finalPrice = numOfTickets * base_fare;
    }

    // Print message showing total
    cout << "The total for " << numOfTickets << " " << fare << " to " << destination << " is $" << finalPrice << "." << endl;


    return 0;

}