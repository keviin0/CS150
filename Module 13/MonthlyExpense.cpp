// MonthlyExpense.cpp - Calculates budgets
// Author: Kevin Hu
// Module 13 Project 2
// Problem statement - Using an initialization list from a structure
/*
    Algorithm:
        1. Create a struct for MonthlyExpense with the following double variables
            a. Rent & Household
            b. Transportation
            c. Books & Supplies
            d. Food & Entertainment
            e. Miscellaneous
        2. Initialize an object of the MonthlyExpense struct with the hardcoded expenses
        3. Prompt user for inputs to create another MonthlyExpense object
        4. Format the two objects and print out
        5. Determine whether the actual monthly expense was over or under budget
*/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct MonthlyExpense
{
    double  rent_and_household,
            transportation,
            books_and_supplies,
            food_and_entertainment,
            misc;
};

MonthlyExpense budget = {1125.00, 180.00, 65.00, 730.00, 390.00};

// setters
double setValue(int);
void setExpense(MonthlyExpense &a);
void printBudgets(MonthlyExpense, MonthlyExpense);

int main()
{

    MonthlyExpense actual; // Initialize actual monthly expense object
    setExpense(actual); // Prompt user for values of actual monthly expense
    printBudgets(budget, actual); // Formats and prints the two budgets and does some calculations

}

void printBudgets(MonthlyExpense b, MonthlyExpense a) // b for budget, a for actual
{
    double budgetAmt = b.rent_and_household + b.transportation + b.books_and_supplies + b.food_and_entertainment + b.misc;
    double actualSpent = a.rent_and_household + a.transportation + a.books_and_supplies + a.food_and_entertainment + a.misc;
    double diff = budgetAmt - actualSpent;
    string buffer = string(57, '-');
    string outcome;
    cout << fixed << setprecision(2);
    cout << "                       Budget       Actual" << endl;
    cout << " Category              Amount       Spent      Difference" << endl;
    cout << buffer << endl;
    cout << setw(22) << left << "Rent & Housing" << "$" << right << setw(8) << b.rent_and_household << "   $" << right << setw(8) << a.rent_and_household << "   $" << right << setw(8) << b.rent_and_household - a.rent_and_household << endl;
    cout << setw(22) << left << "Transportation" << "$" << right << setw(8) << b.transportation << "   $" << right << setw(8) << a.transportation << "   $" << right << setw(8) << b.transportation - a.transportation << endl;
    cout << setw(22) << left << "Books & Supplies" << "$" << right << setw(8) << b.books_and_supplies << "   $" << right << setw(8) << a.books_and_supplies << "   $" << right << setw(8) << b.books_and_supplies - a.books_and_supplies << endl;
    cout << setw(22) << left << "Food" << "$" << right << setw(8) << b.food_and_entertainment << "   $" << right << setw(8) << a.food_and_entertainment << "   $" << right << setw(8) << b.food_and_entertainment - a.food_and_entertainment << endl;
    cout << setw(22) << left << "Miscellaneous" << "$" << right << setw(8) << b.misc << "   $" << right << setw(8) << a.misc << "   $" << right << setw(8) << b.misc - a.misc << endl;
    cout << setw(22) << left << "Totals" << "$" << right << setw(8) << budgetAmt << "   $" << right << setw(8) << actualSpent << "   $" << right << setw(8) << diff << endl;
    cout << endl;
    cout << outcome.append(string((budgetAmt - actualSpent < 0)? "You were over budget this month": "You were under budget this month")) << endl;
}   

void setExpense(MonthlyExpense &a)
{
    // Set values of actual monthly spending values
    cout << "Enter your actual monthly spending values: " << endl;
    a = (MonthlyExpense){.rent_and_household = setValue(1), 
                            .transportation = setValue(2), 
                            .books_and_supplies = setValue(3), 
                            .food_and_entertainment = setValue(4),
                            .misc = setValue(5)};
}

double setValue(int selection)
{
    string value;
    switch (selection) // Determines type of value to be prompted for
    {
    case 1:
        value = "rent";
        break;
    case 2:
        value = "transportation";
        break;
    case 3:
        value = "supplies";
        break;
    case 4:
        value = "food";
        break;
    case 5:
        value = "miscellaneous";
        break;
    default:
        break;
    }

    while (true)
    {
        double input;
        cout << "Enter " << value << " value: ";
        cin >> input;

        if (input < 0 || input > 10000) // error handling
        {
            cout << "Value must be between 0 and 10,000" << endl;
            continue;
        }
        else
        {
            return input;
        }
    }
}


