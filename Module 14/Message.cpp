// Message.cpp - Remove characters from a message in an array
// Author: Kevin Hu
// Module 14 Project 1
// Problem Statement - Removing specified elements of an array
/*
    Algorithm:
        1. Create an array of char elements name message
        2. Declare and initialize the variable count representing the number of characters actually used in the array using:
            a. count = size of message
        3. print the initial contents of the array (the "message")
        4. remove the character at position (index) 3 in the message (this should decrease the  count  of the number of characters in the message by 1)
        5. subtract 14 from the character currently at position 1 in the message
        6. remove character at position 0 in the message
        7. remove the character at position 2 in the message
        8. subtract 55 from the character at position 1 in the message
        9. remove the last character in the message
        10. print the message
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
using namespace std;

int remove(char array[], int count, int remove_index);
void update(char array[], char amount, int index);
void showArray(string heading, char array[], int count);

int main()
{

    char message[7] = {'t', 'Q', 'b', ')', 'f', '+', '5'};
    int count = sizeof(message) / sizeof(char);

    showArray("Initial contents of message: ", message, count);
    count = remove(message, count, 3);
    update(message, -14, 1);
    count = remove(message, count, 0);
    count = remove(message, count, 2);
    update(message, -55, 1);
    count = remove(message, count, count - 1);
    showArray("Final message: ", message, count);
    
    return 0;
}

int remove(char array[], int count, int remove_index)
{
    if (count == 0 || remove_index >= count) //if count is equal to 0 or if remove_index is greater than or equal to count, then just return count unchanged (indicating that no element was removed),
    {
        return count;
    }
    else
    {
        for(int i = remove_index; i < count; i++)
        {
            if ( i == count - 1)
            {
                array[i] = 0;
                break;
            }
            array[i] = array[i + 1];
        }
        return count - 1;
    }
}

void update(char array[], char amount, int index)
{
    array[index] += amount;
}

void showArray(string heading, char array[], int count)
{
    cout << heading << endl;
    for (int i = 0; i < count; i++)
    {
        cout << array[i];
    }
    cout << endl;
    return;
}


