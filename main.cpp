/*
Author : Mohan Singh Bomrel
Program: Program that creates Objects of both Book and Author classes along with
Novel and TextBook inherited and make use of all members function and Interactive as possible
Date   : 2015/03/27
*/
#include <iostream>
#include "Book.h"
#include "Novel.h"
#include "TextBook.h"

using namespace std;

int main()
{
    string authorName, emailOf, bookName,book_publication,book_semester,book_subject;
    double priceOf;
    int stqQuantity,pages;
    char sex;
    char choice;

    cout << "Enter the name of Author:" << endl;
    getline(cin, authorName);
    cout << "Enter the gender of Author (M/F):" << endl;
    cin >> sex;
    cin.get();
    cout << "Enter the email address:" << endl;
    getline(cin,emailOf);

    cout << "Enter the name of Book:" << endl;
    getline(cin, bookName);

    cout << "Enter the price of Book:\nRs ";
    cin >> priceOf;

    cout << "Enter the Quantity of Book" << endl;
    cin >> stqQuantity;

    Author author1(authorName,emailOf,sex);
    Book book1(bookName,author1,priceOf,stqQuantity);

    cout<< book1.toString();

    cout << endl;

    cout << "\nEnter 'T' for TextBook OR 'N' for Novel:" << endl;
    cin >> choice;

    if(toupper(choice) == 'N')
    {
    cout << "Enter the number of pages" << endl;
    cin >> pages;
    cin.get();
    cout << "Enter the publication of the Book" << endl;
    getline(cin,book_publication);

    Novel novel1(bookName,author1,priceOf,stqQuantity,pages,book_publication);
    novel1.toString();
    }
    else
    {
    cout << "Which Subject does book belong to?"<< endl;
    cin >> book_semester;
    cin.get();
    cout << "Which Semester does book belong to? (IN WORD)" << endl;
    cin >> book_subject;
    cin.get();

    TextBook textbook1(bookName,author1,priceOf,stqQuantity,book_semester,book_subject);
    textbook1.toString();
    }
}
