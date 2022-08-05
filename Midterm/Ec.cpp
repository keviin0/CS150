#include <iostream>
using namespace std;

int main()
{

    int inputNumber, temp, counter = 0;

    cout << "Enter a positive number: ";
    cin >> inputNumber;
    if (inputNumber < 1) {
        cout << "Invalid number. Enter a positive number 1 or larger." << endl;
        return 0;
    }
    temp = inputNumber;

    while(temp != 1)
    {
        temp /= 2;
        counter++;
    }

    cout << "It took a total of " << counter << " times of being divided by 2 for " << inputNumber << " to get down to 1.";

    return 0;
}