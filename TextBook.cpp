#include <iostream>
#include "TextBook.h"

#include <string>

using namespace std;

TextBook::TextBook(string &name, Author &author,double price, int quantity,string &semester,string &subject)
:Book(name,author,price,quantity)
{
    setSemester(semester);
    setSubject(subject);
}

void TextBook::setSemester(string semester)
{
        bookSemester = semester;
}

string TextBook::getSemester()
{
    return bookSemester;
}

void TextBook::setSubject(string subject)
{
    bookSubject = subject;
}

string TextBook::getSubject()
{
    return bookSubject;
}
double TextBook::printTotal()
{
    return quantity*price;
}
void TextBook::toString()
{
    cout << "\n";
    cout << "Book:" << getName()<< endl;
    cout << "Price per Book:" << price << endl;
    cout << "Quantity:" << quantity << endl;
    cout << "Subject:" << getSubject()<< endl;
    cout << "Semester:" << getSemester()<< endl;

    cout << "\nTotal Price:" << printTotal()<< endl;
}


