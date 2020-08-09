#ifndef _LIBRARY_H
#define _LIBRARY_H

#include"header.h"
using namespace std;


//The Library Class
class library {
private:
    Book book[10];

public:
    int cnt;

    library();


    //Fun Add Library
    //initializing functions with counter as parameter

    void addBook();
    void deleteBook();
    int searchForBook(string isbn);
    void editBook();
    void increment();
    void decrement();
    void searchBook();
    void displayAllBook();
    void exitSystem();
};



#endif