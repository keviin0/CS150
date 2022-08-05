// Rental.cpp - Determines the total price to rent a car based on certain parameters
// Author: Kevin Hu
// Module 7 Lab 7
// Problem Statement - Ensuring amount of code is minimized meaning that the code which performs the same function isn't repeated several times in the program.
/* Algorithm:
    1. Initialize constants and variables
    2. Use cout and cin to prompt user to input parameters and store them in variables
    3. Compute two quotes using switch case with the type of car as the case
        a. one quote which is the number of complete weeks multiplied by the weekly rate plus the number of leftover days times the daily rate.
        b. the second quote will be the number of complete weeks plus 1, and that number multiplied by the weekly rate.
    4. Compare two rates and use if/else statements to determine which quote is more favorable and print it out
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
using namespace std;

int main() 
{

    // Initialize constants and variables
    const string ECON_SIZE = "Economy", FULL_SIZE = "Full-size", COLOR_BLACK = "Black", COLOR_WHITE = "White", COLOR_RED = "Red";
    const double ECON_DAILY_RATE = 25.50, ECON_WEEKLY_RATE = 120.50, FULL_DAILY_RATE = 37.40, FULL_WEEKLY_RATE = 216.85;
    string selectedCarSize, selectedCarColor;
    int selection, numberOfDays, numberOfWeeks, totalNumberOfDays;
    double weeklyRate, dailyRate;

    // Prompt user for desired car size
    cout << "What is your desired car size (1. full or 2. economy)?" << endl;
    cin >> selection;
    if (selection == 1)
    {
        selectedCarSize = FULL_SIZE;
        weeklyRate = FULL_WEEKLY_RATE;
        dailyRate = FULL_DAILY_RATE;
    }
    else if (selection == 2)
    {
        selectedCarSize = ECON_SIZE;
        weeklyRate = ECON_WEEKLY_RATE;
        dailyRate = ECON_DAILY_RATE;
    }
    else
    {
        cout << "Invalid car size. Try Again." << endl;
        exit(1);
    }
    selection = 0; // resets selection var

    // Prompt user for desired color of car 
    cout << "What is your desired car color (1. Black or 2. White or 3. Red w/ %15 surcharge)?" << endl;
    cin >> selection;
    if (selection == 1)
    {
        selectedCarColor = COLOR_BLACK;
    }
    else if (selection == 2)
    {
        selectedCarColor = COLOR_WHITE;
    }
    else if (selection == 3)
    {
        selectedCarColor = COLOR_RED;
        weeklyRate *= 1.15;
        dailyRate *= 1.15;
    } 
    else
    {
        cout << "Invalid car color. Try Again." << endl;
        exit(1);
    }
    
    // Prompt user for desired number of days to rent
    cout << "How many days would you like to rent the car? " << endl;
    cin >> totalNumberOfDays;
    numberOfWeeks = totalNumberOfDays / 7;
    numberOfDays = totalNumberOfDays % 7;

    // Compute two quotes depending on desired car size
    double firstQuote, secondQuote;
    firstQuote = numberOfWeeks * weeklyRate + numberOfDays * dailyRate; // one quote which is the number of complete weeks multiplied by the weekly rate plus the number of leftover days times the daily rate.
    secondQuote = (numberOfWeeks + 1) * weeklyRate; // the second quote will be the number of complete weeks plus 1, and that number multiplied by the weekly rate.

    // Compare two rates and use if/else statements to determine which quote is more favorable
    double bestQuote;
    int flag;
    if (firstQuote < secondQuote) 
    {
        bestQuote = firstQuote;
        flag = 1;
    }
    else if (secondQuote < firstQuote)
    {
        bestQuote = secondQuote;
        numberOfWeeks += 1;
        flag = 2;
    }

    // Print more favorable quote out
    cout << fixed << setprecision(2);
    switch(flag)
    {
        case 1:
            cout << "Quote for a " << selectedCarColor << " for " << totalNumberOfDays << " days:\n" << numberOfWeeks << " weeks at $" << weeklyRate << "/wk and " << totalNumberOfDays << " days at $" << dailyRate <<  "/day, total $" << bestQuote << endl;
            break;
        case 2:
            cout << "Quote for a " << selectedCarColor << " for " << totalNumberOfDays << " days:\n" << numberOfWeeks << " weeks at $" << weeklyRate << "/wk, total $" << bestQuote << endl;
            break;
    }       
    
    return 0;
}
