// Baby.cpp - Prompt for a name and see if that name is in a list of the 1,000 most common boy or girl names.
// Module 9 Project 1
// Author: Kevin Hu
// Problem Statement - Looping through given files 
/*
    Algorithm:
        1. Create a execution loop that is only terminated when the user types "quit" as the name
        2. In this execution loop, prompt user for a name
        3. Create two loops, each scanning one of the two provided text files, and do the following
            a. If the name is found, then show the user the rank and number or registered births for that name.
            b. If the name isn't found in the file, tell the user that it isn't one of the ranked names.
            c. Close the file
*/

#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{

    const string BOYS_FILE_NAME = "BoyNames2021.txt";
    const string GIRLS_FILE_NAME = "GirlNames2021.txt";
    
    do
    {

        // Creating search file object
        ifstream search_file;
        

        // Initialize and establish variables 
        string name, search; // search and name vars to compare in order to determine rank and such
        string gender = "girl"; //  gender var to help consolidate loop
        int counter = 0;
        int births;

        cout << "Enter the name to search for: "; // prompt user for baby name
        getline(cin, name);

        if ( name == "quit" ) // sentinel
        {
            return 0;
        }

        do
        {       
            if (gender == "girl")
            {
                search_file.open(GIRLS_FILE_NAME); // open girl name file
            }
            else
            {
                search_file.close();
                search_file.open(BOYS_FILE_NAME); // open boy name file
                counter = 0; // reset counter for boys
            }
            do
            {
                search_file >> search;

                if ( search == name ) // If input is the same as name being searched for
                {
                    counter += 2;
                    search_file >> births;
                    cout << name << " is ranked " << counter / 2 << " among " << gender << "s with " << births << " registered births." << endl;
                    if ( gender == "girl" )
                    {
                        gender = "boy";
                        break;
                    }
                    else
                    {
                        gender = "none"; // terminate outside while loop
                        break;
                    }
                }
                else if (!search_file.eof()) // Increment counter for rank if input name isn't the same as name being searched for
                {
                    counter++;
                    continue;   
                }
                else
                {
                    if ( gender == "girl" )
                    {
                        cout << name << " is not ranked among the top 1000 " << gender << " names." << endl;
                        gender = "boy";
                        continue;
                    }
                    else
                    {
                        cout << name << " is not ranked among the top 1000 " << gender << " names." << endl;
                        gender = "none"; // terminate outside while loop
                        break;
                    }
                } 
            } while (true);
        } while (gender != "none");
        
        search_file.close();

    } while (true);
    







}