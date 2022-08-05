// holidayGicts.cpp - Determines how many tool sets can be purchased or $100 and the left over change and then determines the number of drawing sets that can be purchased
// Author: Kevin Hu

#include <iostream>
using namespace std;

int main() 
{

    int budget = 10000;
    int numOfToolSets = budget / 892;
    double change = (budget % 892) / 100.00;  
    cout << "For tool sets costing $8.92 you can buy " << numOfToolSets << " with $" << change << " change." << endl;

    int numOfDrawingSets = budget / 1628;
    change = (budget % 1628) / 100.00;
    cout << "For drawing sets costing $16.28 you can buy " << numOfDrawingSets << " with $" << change << " change." << endl;

}