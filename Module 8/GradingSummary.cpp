// GradingSummary.cpp - Reads from the user a list of exam scores and outputs some information regarding the list
// Module 8 Project 1
// Author: Kevin Hu
// Problem Statement - Looping user input and parsing that information
/*
    Algorithm:
        1. Execute loop that prompts user for input of grades. 
            a. With each grade, increment category of grades
            b. Terminate loop with a negative grade
        2. After terminating loop, calculate distribution of grades for each letter-grade category
        3. Print out 
            a. the total number of grades entered
            b. the number of grades in each letter-grade category (90 - 100 = A, 80 - 89 = B, 70 - 79 = C, 60 - 69 = D, and 0 - 59 = F)
            c. the percentage of the total grades each letter grade represents
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{

    // Initialize variables
    int aGrades = 0, bGrades = 0, cGrades = 0, dGrades = 0, fGrades = 0, totalGrades = 0;
    int i = 0; // grade counter
    double aDist, bDist, cDist, dDist, fDist;

    // Print header
    cout << "********** Grade Counter **********" << endl;
    cout 
    << "Enter each grade on a separate line\n"
    << " (A negative grade will end entry) \n"
    << endl;

    do // Execute loop that prompts user for input of grades. 
    {
        int temp = 0; // temporary grade var

        cout << "      Enter grade #" << i + 1 << ": ";
        cin >> temp;

        if (temp < 0) // Sentinel
        {

            if (totalGrades == 0) { // No scores entered edge case
                cout << "No scores were entered. No percentages available." << endl;
                return 0;
            }

            break;
        }
        else if (temp >= 90) { // A grade range
            aGrades += 1;
        }
        else if (temp >= 80 && temp < 90) // B grade range
        {
            bGrades += 1;
        }
        else if (temp >= 70 && temp < 80) // C grade range
        {
            cGrades += 1;
        }
        else if (temp >= 60 && temp) // D grade range
        {
            dGrades += 1;
        }
        else if (temp < 60)
        {
            fGrades += 1;
        }

        totalGrades += 1;
        i++;
    } while (true);
    
    // Calculate distribution of grades
    aDist = (double)aGrades / totalGrades * 100;
    bDist = (double)bGrades / totalGrades * 100;
    cDist = (double)cGrades / totalGrades * 100;
    dDist = (double)dGrades / totalGrades * 100;
    fDist = (double)fGrades / totalGrades * 100;

    // Print out all data
    cout << fixed << setprecision(1); // set precision to 1 decimal point
    cout << "Total number of grades is " << totalGrades << endl;
    cout << "Number of A's = " << setw(2) << right << aGrades << " which is " << setw(5) << right << aDist << "%" << endl;
    cout << "Number of B's = " << setw(2) << right << bGrades << " which is " << setw(5) << right << bDist << "%" << endl;
    cout << "Number of C's = " << setw(2) << right << cGrades << " which is " << setw(5) << right << cDist << "%" << endl;
    cout << "Number of D's = " << setw(2) << right << dGrades << " which is " << setw(5) << right << dDist << "%" << endl;
    cout << "Number of F's = " << setw(2) << right << fGrades << " which is " << setw(5) << right << fDist << "%" << endl;

    return 0;

}