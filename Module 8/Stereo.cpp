// Stereo.cpp - Calculates time needed to pay off loan and interest paid over life of the loan for a stereo system
// Module 8 Project 2
// Author: Kevin Hu
// Problem statement - Arbitrary loop sizes
/*
    Algorithm:
        1. Initialize constants and variables
        2. Run a loop of arbitrary size terminated by when the loan is paid off (when the remaining debt is less than 0.01 otherwise it will be run indefinitely) iterated by the month
            a. Keep a track of interest paid over life of the loan
            b. Take difference of interest paid from monthly payment and deduct from outstanding debt
            c. Increment the number of months needed to pay off loan
        3. Report all tracked information
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{

    // Initialize constants and variables
    const double INITIAL_VALUE = 1000.0, MONTHLY_PAYMENT = 50.0, ANNUAL_INTEREST = 0.18;
    int months = 0; // month counter per iteration of loop
    double totalInterest = 0.0; // variable to keep track of total amt of interest paid over lifetime of loan
    double outstandingDebt = 1000.0; // variable to keep track of remaining debt after every payment

    do // Monthly loan payment and interest calculations
    {
        if (outstandingDebt < 0.01) {
            break;
        }
        else
        {
            totalInterest += ANNUAL_INTEREST / 12 * outstandingDebt;
            outstandingDebt -= MONTHLY_PAYMENT - (ANNUAL_INTEREST / 12 * outstandingDebt);
            months++;
            //cout << "total interest: " << totalInterest << " outstandingdebt: " << outstandingDebt << endl;
        }
        
    } while (true);

    // Print out final calculations
    cout << fixed << setprecision(2);
    cout << "The number of months it took to pay off the loan was " << months << "." << endl;
    cout << "The total interest paid over the " << months << " months was $" << totalInterest << "." << endl;
    





}