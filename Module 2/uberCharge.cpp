// uberCharge.cpp - Calculates total charge for taking an Uber ride from the airport to your home
// Author: Kevin Hu
#include <iostream>
using namespace std;

int main() 
{
    
    double airportFee = 2.51;
    double upfrontCharge = 3.72;
    double fromAirportToHomeCharge = 19.86;
    double tip = 0.08 * (upfrontCharge + fromAirportToHomeCharge);
    double grandTotal = airportFee + upfrontCharge + fromAirportToHomeCharge + tip;

    cout << "The airport fee is $" << airportFee << endl;
    cout << "The Uber upfront charge is $" << upfrontCharge << endl;
    cout << "The airport to home charge by Uber is $" << fromAirportToHomeCharge << endl;
    cout << "The tip is $" << tip << endl;
    cout << "The grand total is $" << grandTotal << endl;

    return 0;

}