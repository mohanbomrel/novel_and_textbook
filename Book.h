#include <string>
#include "Author.h"
using namespace std;

#ifndef BOOK_H
#define BOOK_H
class Book
{
public:
    Book(string, Author, double);
    Book(string , Author , double, int);

    string getName();
    Author getAuthor();
    void setPrice (double );
    double getPrice();
    void setQuantity(int );
    int getQuantity();
    string toString();

protected:
    double price;
    int quantity;
private:
    string name;
    Author author;
};
#endif // BOOK_H
