#include "header.h"
using namespace std;




Book::Book() :isbn(""), title(""), author(""), edition(""), publication("") {};

//Getters & Setter
string Book::getIsbn() {
    return this->isbn;
}
string  Book::getTitle() {
    return this->title;
}
string Book::getAuthor() {
    return this->author;
}
string Book::getEdition() {
    return this->edition;
}
string Book::getPublication() {
    return this->publication;
}
void Book::setIsbn(string isbn) {
    this->isbn=isbn;
}
void Book::setTitle(string title) {
    this->title=title;
}
void Book::setAuthor(string author) {
    this->author=author;
}
void Book::setEdition(string edition) {
    this->edition=edition;
}
void Book::setPublication(string publication) {
    this->publication=publication;
}

