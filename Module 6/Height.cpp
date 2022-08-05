// Height.cpp - Predict a child's height
// Author: Kevin Hu
// Module 6 Project 1
// Problem statement - Predict a child's height using the height of the father and the mother along with the child's gender
/* Algorithm:
    1. Initialize constants and variables
    2. Prompt user for gender of child, height of their father in feet and inches and the height of the mother in feet and inches
    3. Use formulas to predict child's height and round to the nearest inch
    4. Print results
*/

#include <iomanip>
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main() {

    // Initialize constants and variables
    const string GENDER_MALE = "Male", GENDER_FEMALE = "Female";
    double father_total_inches, mother_total_inches, child_total_inches;

    // Prompt user for gender of child, height of their father in feet and inches and the height of the mother in feet and inches
    string gender, father_feet, father_inches, mother_feet, mother_inches;
    cout << "What is the gender of the child? (M/F): " << endl;
    cin >> gender;
    if (gender == "M") 
    {
        gender = GENDER_MALE;
    } 
    else if (gender == "F")
    {
        gender = GENDER_FEMALE;
    } 
    else
    {
        cout << "Invalid gender. Retry" << endl;
        exit(1);
    }
    cout << "What is the father's height? (just feet) " << endl;
    cin.clear();
    cin.sync();
    cin >> father_feet;
    cout << "What is the father's height? (just inches) " << endl;
    cin >> father_inches;
    cout << "What is the mother's height? (just feet) " << endl;
    cin >> mother_feet;
    cout << "What is the mother's height? (just inches) " << endl;
    cin >> mother_inches;
    
    // Calculate father and mother's height in inches
    father_total_inches = stoi(father_feet) * 12 + stoi(father_inches);
    mother_total_inches = stoi(mother_feet) * 12 + stoi(mother_inches);
    
    // Use formulas to predict child's height and round to the nearest inch
    if (gender == GENDER_MALE)
    {
        child_total_inches = (mother_total_inches * 13.0 / 12.0 + father_total_inches) / 2.0;
    } 
    else if (gender == GENDER_FEMALE)
    {
        child_total_inches = (mother_total_inches * 12.0 / 13.0 + father_total_inches) / 2.0;
    }
    int rounded_height = round(child_total_inches);

    // Print results
    int child_feet = rounded_height / 12;
    int child_inches = rounded_height % 12;
    cout << "The child's predicted height is " << child_feet << "' " << child_inches << "\"" << endl;

    return 0;
}