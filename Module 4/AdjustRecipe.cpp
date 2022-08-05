// AdjustRecipe.cpp - Adjusts recipe according to needed number of cookies
// Lab 4 Project 3
// Author: Kevin Hu

#include <iostream>
using namespace std;

int main()
{

    const double sugarAmt = 1.5;
    const double butterAmt = 1.0;
    const double flourAmt = 2.75;
    const int numOfCookies = 48;

    int requestedNumberOfCookies;
    cout << "How many cookies would you like to make? ";
    cin >> requestedNumberOfCookies;
    double multiplier = (double) requestedNumberOfCookies / numOfCookies;
    double newSugarAmt = sugarAmt * multiplier;
    double newButterAmt = butterAmt * multiplier;
    double newFlourAmt = flourAmt * multiplier;
    cout
    << "Ingredients needed for " << requestedNumberOfCookies << ":\n"
    << newSugarAmt << " cups of sugar,\n"
    << newButterAmt << " cups of butter, and \n"
    << newFlourAmt << " cups of flour.";


    return 0;
}