// Arithemetic.cpp - Addition practice of four randomly generated numbers between 1-999
// Homework 5 Extra Credit
// Author: Kevin Hu

#include <random>
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{

    // Generate 4 random numbers between 1-999
    srand(time(0));
    int first_number = (rand() % 999) + 1;
    int second_number = (rand() % 999) + 1;
    int third_number = (rand() % 999) + 1;
    int fourth_number = (rand() % 999) + 1;

    // Calculate correct answer
    int correct_sum = first_number + second_number + third_number + fourth_number;

    // Print out 4 numbers
    cout << setw(15) << right << first_number << endl;
    cout << setw(15) << right << second_number << endl;
    cout << setw(15) << right << third_number << endl;
    cout << setw(10) << right << "+" << setw(5) << right << fourth_number << endl;

    // Print separator
    string dashes = "";
    dashes.assign(6, '-');
    cout << setw(15) << right << dashes << endl;

    // Ask for total
    int answer;
    cout << setw(9) << left << "Total?  ";
    cin >> answer;

    if (answer == correct_sum) {
        cout << "Correct!" << endl;
    } else {
        cout << "Incorrect." << endl;
    }



    return 0;

}