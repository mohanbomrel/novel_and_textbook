#include <iostream>
#include "Novel.h"
#include <string>


using namespace std;

Novel::Novel (string &name, Author &author,double price, int quantity,int pages,string &publication)
:Book(name,author,price,quantity)
{
    setPages(pages);
    setPublication(publication);
}

void Novel::setPages(int pages)
{
    noPages = pages;
}

int Novel::getPages()
{
    return noPages;
}
void Novel::setPublication(string publication)
{
    bookPublication = publication;
}
string Novel::getPublication()
{
    return bookPublication;
}

void Novel::toString()
{
    cout << "\n";
    cout << "Author:"<< Book::getName() << endl;
    cout << "Book:" << getName()<< endl;
    cout << "Publication:" <<getPublication()<< endl;
    cout <<"Pages no:" << getPages() << "\n";
}
