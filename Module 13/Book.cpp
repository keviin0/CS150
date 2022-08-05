// Book.cpp - Defines functions from Book.h
// Author: Kevin Hu
// Module 13 Project 1
/* Description
    
    Implementation of functions from Book.h:

    Book(string title, string author, string pages, string cost);
    Book();

    void getTitle();
    void getAuthor();
    void getPages();
    void getCost();

    void setTitle(string);
    void setAuthor(string);
    void setPages(string);
    void setCost(string);

    Separate formatting print function from Book.h:
    void printBook(Book);

*/

#include "Book.h"
#include <string>
#include <iomanip>
#include <iostream>
using namespace std;

Book::Book(string titleIn, string authorIn, int pagesIn, double costIn)
{
    title = titleIn;
    author = authorIn;
    pages = pagesIn;
    cost = costIn;
}

Book::Book()
{
    title = "";
    author = "";
    pages = 0;
    cost = 0.0;
}

// getters
string Book::getAuthor() { return author; }
string Book::getTitle() { return title; }
int Book::getPages() { return pages; }
double Book::getCost() { return cost; }

// setters
void Book::setAuthor(string newAuthor) { author = newAuthor; }
void Book::setTitle(string newTitle) { title = newTitle; }
void Book::setPages(int newPages) { pages = newPages; }
void Book::setCost( double newCost ) { cost = newCost; }

// additional helper function
void printBook(Book book)
{
    cout << setw(23) << book.getTitle() << "  " << setw(19) << book.getAuthor() << "  " << setw(7) << book.getPages() << "  " << fixed << setprecision(2) << setw(8) << book.getCost() << endl;
}