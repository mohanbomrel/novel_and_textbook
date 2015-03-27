#ifndef NOVEL_H
#define NOVEL_H
#include <string>
#include "Book.h"
using namespace std;

class Novel : public Book
{
public:
    Novel(string &,Author &,double,int,int,string &);

    int noPages;
    string bookPublication;

    void setPages(int);
    int getPages();
    void setPublication(string);
    string getPublication();

    void toString();
};
#endif // NOVEL_H
