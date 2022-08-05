#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{

    // Initalize constants and variables
    const string ONE = "one", TWO = "two", THREE = "three";
    string oddStatement, evenStatement; // strings to be assigned for final statement
    int odd = 0, even = 0; // counters for odd and even numbers

    // Prompt user for 3 positive integers
    for (int i = 3; i > 0; i--)
    {
        int temp;
        cout << "Enter a positive integer: ";
        cin >> temp;
        (temp % 2 == 0) ? even++ : odd++;
        cin.clear();
    }

    // Assign odd/even statements 
    if (odd == 1)
    {
        oddStatement = ONE;
    }
    else if (odd == 2)
    {
        oddStatement = TWO;
    }
    else if (odd == 3)
    {
        oddStatement = THREE;
    }
    
    if (even == 1)
    {
        evenStatement = ONE;
    }
    else if (even == 2)
    {
        evenStatement = TWO;
    }
    else if (even == 3)
    {
        evenStatement = THREE;
    }


    // Print out final statement
    if (!even) 
    {
        cout << "You entered " << oddStatement << " odd numbers" << endl;
    }
    else if (!odd)
    {
        cout << "You entered " << evenStatement << " even numbers" << endl;
    }
    else 
    {
        cout << "You entered " << evenStatement << " even and " << oddStatement << " odd numbers" << endl;
    }



    return 0;

}