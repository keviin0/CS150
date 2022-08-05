// Deduplication.cpp
// Module 9 Project 2
// Author: Kevin Hu
// Problem Statement - Using loops and file streams to cache information from file without multi element data structures
/*
    Algorithm:
        1. Open numbers.txt as a file and read every number as an int in a loop
        2. Store the first number in a temporary variable and write it to the output file
        3. For every iteration of the loop compare the input number with the temp var number and if it's a new number replace the temp var with the new number and write that number to the output file
        4. Repeat until EOF of numbers.txt
        5. Close files
*/

#include <fstream>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    
    // Establish and initialize variables
    string input_file_name, output_file_name;
    ifstream input_file;
    ofstream output_file;
    int counter = 0; // Keep track of # of numbers inputted
    int duplicate = 0; // Keep track of # of duplicates
    int output = 0; // Keep track of # of outputs

    // Prompt user for input and output files
    cout << "Enter input file name or full path: ";
    getline(cin, input_file_name);
    cout << "Enter output file name or full path: ";
    getline(cin, output_file_name);

    int cache, inputNum; // temp var to keep track of variables
    input_file.open(input_file_name); // input file
    output_file.open(output_file_name); // output file

    while( input_file >> inputNum )
    {
        if ( inputNum != cache )
        {
            cache = inputNum;
            output++;
            counter++;
            output_file << cache << endl;
        }
        else
        {
            counter++;
            duplicate++;
            continue;
        }
    }

    cout << "There were " << counter << " numbers inputs, " << output << " ouput, and " << duplicate << " duplicates." << endl;

    input_file.close();
    output_file.close();


}