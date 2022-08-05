// Book.h - Header file for a Book
// Author: Kevin Hu
// Module 13 Project 1
/* Description - Header file for a Book class

    Private data member variables
    string title
    string author
    int pages
    double cost

    Public member functions
    no argument constructor
    full constructor
    getters
    setters
*/

#ifndef BOOK_H
#define BOOK_H

#include <string>
using namespace std;

class Book
{
private:

    // Private data member variables
    string title;
    string author;
    int pages;
    double cost;

public:

    // Public member functions
    Book(string title, string author, int pages, double cost);
    Book();

    // getters
    string getTitle();
    string getAuthor();
    int getPages();
    double getCost();

    // setters
    void setTitle(string);
    void setAuthor(string);
    void setPages(int);
    void setCost(double);
   
};










#endif
