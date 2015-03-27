#ifndef TEXTBOOK_H
#define TEXTBOOK_H
using namespace std;
#include "Book.h"

class TextBook : public Book
{
public:
    TextBook(string &,Author &,double,int,string &,string &);

    void setSemester(string);
    string getSemester();

    void setSubject(string);
    string getSubject();

    void toString();
    double printTotal();

private:
    string bookSemester;
    string bookSubject;

};
#endif // TEXTBOOK_H
