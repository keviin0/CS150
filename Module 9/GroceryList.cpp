// GroceryList.cpp - Reads a grocery list from a text file and creates another text file that formats the item from that list
// Module 9 Lab 9
// Author: Kevin Hu
// Problem Statement - Formatting file streams
/*
    Algorithm:
        1. Establish file name constants
        2. Open input file grocery.txt and output file output.txt
        3. Use a while loop to read each grocery item on the list
            a. Use getline to read description of grocery item into a temp string var
            b. Using >> read quantity of item to purchase into a temp int var
            c. Using >> read estimated unit price into a double
            d. Using getline function, read the unit of measure into a temp string var
        4. Close input file and output file after loop is finished
*/

#include <fstream>
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

const string INPUT_FILE_NAME = "grocery.txt";
const string OUTPUT_FILE_NAME = "output.txt";

int main()
{

    // Open i/o files
    ifstream input_file;
    ofstream output_file;
    input_file.open(INPUT_FILE_NAME);
    output_file.open(OUTPUT_FILE_NAME);

    // temp vars
    string description, unit_of_measure;
    int quantity;
    double unit_price;
    double running_total = 0;

    // create header of output file
    output_file << "***************** My Grocery List **************" << endl;
    output_file << "                                   Est.    Item " << endl;
    output_file << "---------Item-------  Qnty  Unit  Unit-$   Total" << endl;

    // While loop to read info and format
    do
    {
        if ( !getline(input_file, description) )
        {
            break;
        }
        else
        {
            input_file >> quantity;
            input_file >> unit_price;
            getline(input_file, unit_of_measure); // flush new line
            getline(input_file, unit_of_measure);
            output_file << setw(20) << left << description << "  ";
            output_file << setw(4) << right << quantity << "  ";
            output_file << setw(4) << left << unit_of_measure << "  ";
            output_file << fixed << setprecision(2) << setw(6) << right << unit_price << "  ";
            output_file << fixed << setprecision(2) << setw(5) << right << quantity * unit_price << endl;
            running_total += quantity * unit_price;
        }
    } while (true);

    output_file << "                                         -------" << endl;
    output_file << "Grocery Total                            " << fixed << setprecision(2) << setw(7) << right << running_total << endl;

    input_file.close();
    output_file.close();
    


}