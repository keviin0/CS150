// Soccer.cpp - Keeps track of a girls soccer team's performances
// Author: Kevin Hu
// Module 14 Project 2
// Problem Statement - creating, manipulating, and displaying arrays from a text file
/*
    Algorithm:
        1. Read information from a given text file into three arrays of up to 20 elements
            a. an array of strings that holds the names of the players;
            b. an array of the number of goals scored by each player; and
            c. an array of the number of assists for each player.
        2. Calculate performance by adding the # of assists and 3 * # of goals
        2. Use the arrays to print a columnar report showing:
            a. full name
            b. assists
            c. goals
            d. performance
*/
#include <fstream>
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

const int ISIZE = 20;
const string INPUT_FILE_NAME = "Players.txt";
string name[ISIZE];
int goals[ISIZE];
int assists[ISIZE];

int main()
{
    ifstream search_file;
    string firstnameTemp;
    string secondnameTemp;
    int goalsTemp;
    int assistsTemp;
    int i = 0;
    search_file.open(INPUT_FILE_NAME);

    while(search_file >> firstnameTemp)
    {
        search_file >> secondnameTemp;
        name[i] = firstnameTemp + " " + secondnameTemp;
        search_file >> goals[i];
        search_file >> assists[i];
        i++;
    }

    // Print header
    cout << setw(20) << left << "Name" << "  " << setw(8) << "Goals" <<  "  " << setw(8) << "Assists" << "  " << setw(8) << "Performance" << endl;
    cout << string(53, '*') << endl;

    for (int i = 0; i < sizeof(name)/sizeof(string); i++)
    {
        if (name[i] == "")
        {
            break;
        }
        cout << setw(20) << left << name[i] << "  " << setw(8) << right << goals[i]  <<  "  " << setw(8) << right << assists[i] << "  " << setw(11) << right << goals[i] * 3 + assists[i] << endl;
    }

    search_file.close();



}