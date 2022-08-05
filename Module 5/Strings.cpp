// Strings.cpp - Looking at how to modify the string data type
// Homework 5 Project 2
// Author: Kevin Hu

#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main()
{

    // Create a string which contains your first name in lower case characters.
    string name = "kevin";

    // Using either the  +  or the  +=  operator, append your middle name (also in lower case) to that string.
    name += " jiayi";

    // Using the  append  function, append your last name (in lower case) to that string.
    name.append(" hu");

    // Print your entire name on the console (should be entirely in lower case).
    cout << "My name in lower case: " << name << endl;

    /* 
    Using either the  at  function or square bracket notation:
        - Extract any character that needs to be capitalized in the string created above.
        - Use the  toupper  function to convert that character to upper case.
        - Replace that character in the original string.
    */
    name[0] = toupper(name[0]);
    name[6] = toupper(name[6]);
    name[12] = toupper(name[12]);

    // Print name w/ capital letters
    cout << "My name capitalized: " << name << endl;

    // Use the  find  function to find the position of the first space in your name.  Save to a variable and prints its value.
    int first_space = name.find(" ");
    cout << "Index of first space in my name: " << first_space << endl;

    // Use the  rfind  function to find the last position of a space in your name.  Save to another variable and prints its value.
    int last_space = name.rfind(" ");
    cout << "Index of last space in my name: " << last_space << endl;

    // Using the  substr  function and the two variables defined in steps 7 and 8, extract your middle name.  Print your middle name on the console surrounded by double quotes, for example:  "James".
    string middle_name = name.substr(6, 5);
    cout << "My middle name is: " << middle_name << endl;

    // Using the  erase  function and the two variables defined in steps 7 and 8, remove your middle name from the string so there is only one space between your first and last names.  Print your shortened name on the console surrounded by double quotes, for example "Roberta Johanssen".
    string shortened_name = name.erase(6, 5);
    cout << "My shortened name is: " << shortened_name << endl; 

    return 0;
}