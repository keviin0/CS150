// ArtSupplies.cpp - Calculates and formats budget for supplies for an art class
// Homework 5 Project 1
// Author: Kevin Hu

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {

    //assign costs for each graphite pencil set, sketch pad, and package of erasers
    const string item1 = "Graphite Pencil Set";
    const string item2 = "Sketch Pad";
    const string item3 = "Package of Erasers";
    const double graphiteCost = 15.10;
    const double sketch_padCost = 36.25;
    const double package_of_erasersCost = 4.72;

    // ask the user how many graphite pencil sets, sketch pads, and packages of erases need to be purchased
    int numOfGraphite, numOfSketchPads, numOfErasers;
    cout << "How many graphite pencil sets would you like to purchase?" << endl;
    cin >> numOfGraphite;
    cout << "How many sketch pads would you like to purchase?" << endl;
    cin >> numOfSketchPads;
    cout << "How many packages of erasers would you like to purchase?" << endl;
    cin >> numOfErasers;

    // Calculate total cost of each item
    double totalGraphiteCost = numOfGraphite * graphiteCost;
    double totalSketchpadCost = numOfSketchPads * sketch_padCost;
    double totalEraserCost = numOfErasers * package_of_erasersCost;

    // display a report showing the quantity to purchase, unit price, and total price for each item
    cout  << setw(40) << left << "                  Item"  << setw(10) << left << "Quantity" << "Unit Price" << setw(20) << left << "       Total" << endl;
    cout << fixed << setprecision(2);
    cout << setw(40) << left << item1 << setw(10) << left << numOfGraphite << "$" << setw(10) << right << graphiteCost << "  $" << setw(10) << totalGraphiteCost << endl;
    cout << setw(40) << left << item2 << setw(10) << left << numOfSketchPads << "$" << setw(10) << right << sketch_padCost << "  $" << setw(10) << totalSketchpadCost << endl;
    cout << setw(40) << left << item3 << setw(10) << left << numOfErasers << "$" << setw(10) << right << package_of_erasersCost << "  $" << setw(10) << totalEraserCost << endl;

    // display grand total
    string dashes = "";
    dashes.assign(11, '=');
    cout << setw(74) << right << dashes << endl;
    cout << setw(64) << right << "$" << setw(10) << right <<  totalGraphiteCost + totalSketchpadCost + totalEraserCost;

    return 0;
}