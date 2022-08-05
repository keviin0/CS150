// CCRevisit.cpp - Revisitng Calorie Counter from Module 3, Homework Assignment #1
// Author: Kevin Hu
// Module 6 Project 2
// Problem Statement - Recalculating calories based off person's lifestyle
/* Algorithm:
    1. Initialize constants and variables
    2. Prompt user for weight & lifestyle
    3. Change calories accordingly

*/
#include <iostream>
using namespace std;

int main()
{

    // Initialize constants and variables
    const double CONVERSION_FACTOR = 0.0175, RUNNING_MET = 10.0, BASKETBALL_MET = 8.0, SLEEPING_MET = 1.0;
    const string SED_LIFESTYLE = "Sedentary", SA_LIFESTYLE = "Somewhat active", A_LIFESTYLE = "Active", HA_LIFESTYLE = "Highly Active";
    const double SED_MODIFIER = 0.8, SA_MODIFIER = 1, A_MODIFIER = 1.2, HA_MODIFIER = 1.35;
    int minutesRunning = 30, minutesBBalling = 30, minutesSleeping = 360;
    double cpmRunning, cpmBBalling, cpmSleeping;

    // Prompt user for weight & calculate base calories burned
    int weightInPounds;
    int lifestyle;
    cout << "What is your weight in lbs? " << endl;
    cin >> weightInPounds;
    
    double weightInKg = weightInPounds / 2.2;

    cpmRunning = CONVERSION_FACTOR * RUNNING_MET * weightInKg;
    cpmBBalling = CONVERSION_FACTOR * BASKETBALL_MET * weightInKg;
    cpmSleeping = CONVERSION_FACTOR * SLEEPING_MET * weightInKg;

    double calsRunning, calsBBalling, calsSleeping, totalCals;
    calsRunning = cpmRunning * minutesRunning;
    calsBBalling = cpmBBalling * minutesBBalling;
    calsSleeping = cpmSleeping * minutesSleeping;
    
    
    // Prompt user for lifestyle that best fits and modify calorie count accordingly
    cout 
    << "Select the lifestyle that best fits you: \n"
    << "1 - Sedentary\n"
    << "2 - Somewhat active (exercises occasionally)\n"
    << "3 - Active (exercises 3-4 times a week)\n"
    << "4 - Highly Active (exercises every day)"
    << endl;
    cin >> lifestyle;
    if (lifestyle == 1) // Sedentary Lifetyle 
    {
        calsRunning *= SED_MODIFIER;
        calsBBalling *= SED_MODIFIER;
        calsSleeping *= SED_MODIFIER;
        
    }
    else if (lifestyle == 2) // Somewhat Active Lifestyle
    {
        calsRunning *= SA_MODIFIER;
        calsBBalling *= SA_MODIFIER;
        calsSleeping *= SA_MODIFIER;
    }
    else if (lifestyle == 3) // Active Lifestyle
    {
        calsRunning *= A_MODIFIER;
        calsBBalling *= A_MODIFIER;
        calsSleeping *= A_MODIFIER;
    }
    else if (lifestyle == 4) // Highly Active Lifestyle
    {
        calsRunning *= HA_MODIFIER;
        calsBBalling *= HA_MODIFIER;
        calsSleeping *= HA_MODIFIER;
    }
    else
    {
        cout << "Invalid lifestyle. Try again." << endl;
        exit(1);
    }

    // Calculate total calories burned
    totalCals = calsRunning + calsBBalling + calsSleeping;
    
    // Print final results 
    cout 
        << "Calories burned for-\n"
        << "Running: " << calsRunning << ",\n"
        << "Basketball: " << calsBBalling << ". and\n"
        << "Sleeping: " << calsSleeping << "\n"
        << "Total Cals: "<< totalCals << endl;

    return 0;

}