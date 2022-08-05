// Lab1.cpp - Manipulating variables of different data types
// Author: Kevin Hu

#include <iostream>
#include <math.h>
using namespace std ;

int main()
{
    //1. Declare int and initialize it to the largest possible value of int
    int largestInt = 2147483647;
    cout << "value: " << largestInt << " size in bytes: " << sizeof(largestInt) << endl;
    //New value after adding 1 to the variable
    cout << "value (after adding 1): " << largestInt + 1 << endl;
    
    //2. Declare unsigned long long variable and initailized to smallest possible value
    unsigned long long smallestLongLong =  0;
    cout << "value: " << smallestLongLong << " size in bytes: " << sizeof(smallestLongLong) << endl;
    //New value after subtracting 1 from the unsigned long long variable
    cout << "value (after subtracting 1): " << smallestLongLong- 1 << endl;

    //3. Declare a double variable and set to a number close to the largest positive double
    double largestPositiveDouble = 1.7 * pow(10, 308);
    cout << "value: " << largestPositiveDouble << " size in bytes: " << sizeof(largestPositiveDouble) << endl;
    //Multiply the value by 2 
    cout << "value (after x2): " << largestPositiveDouble * 2 << endl;

    //4. Declare another double variable and set it to 5
    double doubleVar = 5.0;
    cout << "value: " << doubleVar << endl;
    std::cout << "value (after dividing by 0): " << doubleVar/0 << endl;
    

    //5. Assign an int variable to the number 9.999999 and print the result
    int integerFloat = 9.999999;
    cout << "value: " << integerFloat << endl;
    cout << "The variable is being truncated." << endl;

    //6. Using one or more cout statements, print the values of following six expressions on separate lines:
    /* 
        5
        '5'
        "5"
        5 + 1
        '5' + 1  
        "5" + 1
    */
    //When printing the values of the expressions, show the actual each expression in the output, then calculate and print the value of that expression.  For example, for the fifth expression above, you might use something like:
    //cout << "The value of '5' + 1 is " << ('5' + 1) << endl ;  
    cout << "The value of 5 is " << 5 << endl; 
    cout << "The value of '5' is " << '5' << endl;
    cout << "The value of \"5\" is " << "5" << endl;
    cout << "The value of 5 + 1s " << (5 + 1) << endl;
    cout << "The value of '5' + 1 is " << ('5' + 1) << endl;
    cout << "The value of \"5\" + 1 is " << ("5" + 1) << endl;
    return 0;
}
