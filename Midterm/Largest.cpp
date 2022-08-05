#include <iostream>
using namespace std ;
int main()
{
    int num ;

    cout << "Enter a positive integer: " ;
    cin >> num ;
    int large = num ;
    while (num > 0)
    {
       if (num > large)
       {
          large = num ;
       }
       cin.clear();
       cout << "Enter another positive integer: " ;  
       cin >> num ;
    }
    cout << "The largest number is: " << large << endl ;  
   
    return 0 ;
}