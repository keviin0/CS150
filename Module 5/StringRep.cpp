// StringRep.cpp - Replacing a string with some other string
// Lab 5 Project 1
// Author: Kevin Hu

#include <iostream>
using namespace std;

int main()
{

    /* Step 1: Create three  string  identifiers and initialize as follows:
        A variable named  original_string  initialized with the empty string " ".
        A named constant  hate  initialized with the string "hate".
        A named constant  like  initialized with the string "really like".
    */
    string original_string = "";
    const string hate = "hate";
    const string like = "really like";

    // Step 2:  Prompt for a sentence with the word "hate" in it and assign the sentence to the variable  original_string.
    cout << "Enter a sentence with the word hate" << endl;
    getline(cin, original_string);

    // Step 3:  Find the starting index of the word "hate" in the string referenced by  original_string.  This can be done using the  find  function
    int start = original_string.find(hate);

    // Step 4:  Determine the length of the string to be replaced:
    int length = hate.length();

    // Step 5: Use the  replace  function to replace "hate" with "really like" in the string referenced by the  original_string  variable.
    original_string.replace(start, length, like);
    
    // Print the new value in the  original_string  variable.  A sample dialog might look like the following, where the user's input is in italics. 
    cout 
    << "The word \"hate\" starts at position " << start << " in that sentence.\n" 
    << "It has been changed to: " << original_string << endl;

    return 0;
}