// Lab3.cpp - string -> number -> string
// Author: Kevin Hu

#include <iostream>
using namespace std;

int main()
{
    // Determine and print the ASCII value of the character ‘2’ (two) and store in an  int  named constant two_char.  
    const int zeroChar = '0';
    cout << zeroChar << endl;

    // Define a  string  variable named  digits  and assign it to a 2-digit character string
    string digits = "06";
    
    // Calculate the equivalent numeric value of the first digit in the string in the digits variable, and store that value in an  int  variable.
    // First, identify the first character from the input string and store it in a  char.
    char firstCha = digits[0];
    
    // Convert it to an  int  by subtracting the ASCII value of the "zero" character:
    int firstChar = firstCha - zeroChar;
    
    // Do the same thing for the second character in the  string.
    int secondChar = digits[1] - '0';

    // Using a  cout  statement, print a message on the console telling the user what the first and second digits of the number are using the  int  values calculated in steps 3 and 4 above.
    cout << "The first digit of the number is " << firstChar << " and the second digit is " << secondChar << endl;

    // Print a message on the console showing the user the sum of the first and second digits.
    cout << "The sum of the two digits are " << firstChar + secondChar << endl;

    // Print another message showing the user the product of the first and second digits.
    cout << "The product of the two digits are " << firstChar * secondChar << endl;

    // Increment the  int  holding the value of the first digit by 1.  Use the += operator.
    firstChar += 1;

    // Create a new  int  variable, and assign it a value by multiplying the first digit (from step #8 above) by 10, then adding the second digit (from step #4).
    int newVar = firstChar * 10 + secondChar;

    //Print a message telling the user the value of the new number (from step 9 above), and notice that it’s the number defined in step #2 plus 10.
    cout << "When 1 is added to the first digit, the new number is " << newVar << endl;
    
    return 0;

}