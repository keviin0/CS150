// MonetaryConversions.cpp - converts USD to euro, yen, yuan, rupee, peso, cad
// Lab 4 Project 2
// Author: Kevin Hu

#include <iostream>
using namespace std; 

int main()
{

    // Establishes USD to be converted
    int usd;
    cout << "Input numbers of USD to be converted: ";
    cin >> usd;
    
    // Convert USD to various different currencies
    const double euros = 0.95 * usd;
    const double yen = 136.24 * usd;
    const double yuan = 6.71 * usd;
    const double rupees = 79.03 * usd;
    const double pesos = 19.98 * usd;
    const double cad = 1.29 * usd;

    // Print converted currencies
    cout 
    << "$" << usd << " USD is converted to the following:\n"
    << euros << " Euros\n"
    << yen << " Yen\n"
    << yuan << " Yuan\n"
    << rupees << " Rupees\n"
    << pesos << " Pesos\n"
    << cad << " CAD" << endl;



    return 0;
}