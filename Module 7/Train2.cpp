// Train2.cpp - Calculates and displays best purchase strategy for any number of trips from (1-20) that you expect to make during a month
// Author: Kevin Hu
// Homework 7 Project 2
// Problem Statement - Calculating the best purchase strategy between single tickets, a pack of 10 tickets, or a monthly pass for a predicted 1-20 trips
/* 
    Algorithm:
        1. Initialize constants and variables
        2. Using a for loop and some counter i where i is the expected number of trips, iterate from 1 - 20 to calculate outcomes for all possible number of trips
        3. Within the for loop use three if else checks
            a. if i * single ticket price < pack of ten price
                i. then only i single tickets are needed
            b. else if i * single ticket price > pack of ten price && i * n < monthly pass price
                i. then a pack of 10 tickets + i % 10 tickets are needed
                ii. if check to see how many individual tickets once trips exceeds 10.
            c. else 
                i. only a monthly pass is needed
*/

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;

int main()
{

    // Initialize constants
    const double SINGLE_TICKET_PRICE = 5.40, PACK_OF_TEN_PRICE = 36.50, MONTHLY_PASS_PRICE = 61.95;
    double totalPrice;
    
    // Print the column headers
    cout
    << "# of   Single    10    Monthly    Total \n"
    << "Trips  Tickets  pack?   pass?     Price \n"
    << "-----  -------  -----  -------   ------- \n"
    << endl;

    // Set decimal precision
    cout << fixed << setprecision(2);

    // Implement Algorithm
    for (int i = 1; i <= 20; i++) // iterating from 1-20 expected number of trips
    {
        int numOfSingleTickets = 0, numberOfTrips = i;
        string tenPack = "no", monthlyPass = "no";
        if (numberOfTrips * SINGLE_TICKET_PRICE < PACK_OF_TEN_PRICE) // if i * single ticket price < pack of ten price, then only i single tickets are needed
        {
            numOfSingleTickets = numberOfTrips;
            totalPrice = (double)numberOfTrips * SINGLE_TICKET_PRICE;
        }
        else  // else if i * single ticket price > pack of ten price then a pack of 10 tickets + i % 10 tickets or a monthly pass are needed
        {
            if (numberOfTrips >= 10) // Check for single tickets
            {
                numOfSingleTickets = i - 10;
            }
            tenPack = "yes";
            totalPrice = PACK_OF_TEN_PRICE + numOfSingleTickets * SINGLE_TICKET_PRICE;
            if (totalPrice > MONTHLY_PASS_PRICE) // If the single tickets + pack of 10 > monthly pass price then only a monthly pass is needed
            {
                monthlyPass = "yes";
                tenPack = "no";
                totalPrice = MONTHLY_PASS_PRICE;
            }
        }
        cout << setw(5) << right << numberOfTrips << "     " << setw(4) << left << numOfSingleTickets << "   " << setw(5) << left << tenPack << "    " << setw(5) << monthlyPass << setw(7) << right << totalPrice << endl; // looped print statement
    }

    return 0;
}