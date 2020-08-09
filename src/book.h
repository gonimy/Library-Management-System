#ifndef _BOOK_h
#define _BOOK_h


#include"header.h"
using namespace std;

//Book Struct 
struct Book {

private:
    string isbn, title, author, edition, publication;
public:
    Book();
    string getIsbn();
    string getTitle();
    string getAuthor();
    string getEdition();
    string getPublication();
    void setIsbn(string isbn);
    void setTitle(string title);
    void setAuthor(string author);
    void setEdition(string edition);
    void setPublication(string publication);


};



#endif