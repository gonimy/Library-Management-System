
#include"header.h"
using namespace std;

library::library() :cnt(0) {
}

void library::addBook() {
    //cout<<"test add library"<<endl;
    string isbn, title, author, edition, publication;
    cout<<"ADDING library TO THE library. \n\n";
    if (cnt<10) {
        cout<<"Please Enter ISBN: ";
        cin>>isbn;
        cout<<"Please Enter Title: ";
        cin>>title;
        cout<<"Please Enter Author: ";
        cin>>author;
        cout<<"Please Enter Edition: ";
        cin>>edition;
        cout<<"Please Enter Publication: ";
        cin>>publication;
        book[cnt].setIsbn(isbn);
        book[cnt].setTitle(title);
        book[cnt].setAuthor(author);
        book[cnt].setEdition(edition);
        book[cnt].setPublication(publication);
        cout<<"\nBOOK ADDED SUCCESSFULLY!\n\nPress any key to continue . . .";
        increment();
        displayMenu();
    }
    else {
        cout<<"YOU HAVE REACHED THE MAXIMUM NUMBER OF BOOKS TOBE ADDED!\n\nPress any key to continue . . .";
        displayMenu();
    }
}
void library::deleteBook() {
    //cout<<"test delete library"<<endl;
    string isbn;
    int choice;
    if (cnt==0) {
        cout<<"THERE IS NO BOOK TO DELETE!\n\nPress any key to continue . . .";
        displayMenu();
    }
    cout<<"Please Enter ISBN For The Book You Want To Delete ./n";
    cin>>isbn;
    int index=searchForBook(isbn);
    cout<<"Do you want to delete?\n[1]Yes\n[2]No\n\nEnter Choice: ";
    cin>>choice;
    if (choice==1) {
        book[index].setIsbn("");
        book[index].setTitle("");
        book[index].setAuthor("");
        book[index].setEdition("");
        book[index].setPublication("");
        for (int i=index;i<cnt;i++) {
            book[i]=book[i+1];
        }
        book[9].setIsbn("");
        book[9].setTitle("");
        book[9].setAuthor("");
        book[9].setEdition("");
        book[9].setPublication("");
        decrement(); //calling function to decrement counter
        cout<<"\nBOOK SUCCESSFULLY DELETED!\n\nPress any key to continue . . .";
        displayMenu();
    }
    else {
        displayMenu();
    }
}

void library::editBook() {
    //    cout<<"test edit library"<<endl;
    string isbnNew;
    int choice;
    string isbn, title, author, edition, publication;
    if (cnt==0) {
        cout<<"THERE IS NO BOOK TO Edit!\n\nPress any key to continue . . .";
        displayMenu();
    }
    cout<<"Please Enter ISBN For The Book You Want To Edit ./n";
    cin>>isbnNew;
    int index=searchForBook(isbnNew);
    cout<<"Do you want to Edit?\n[1]Yes\n[2]No\n\nEnter Choice: ";
    cin>>choice;
    if (choice==1) {
        cout<<"Please Enter ISBN: ";
        cin>>isbn;
        cout<<"Please Enter Title: ";
        cin>>title;
        cout<<"Please Enter Author: ";
        cin>>author;
        cout<<"Please Enter Edition: ";
        cin>>edition;
        cout<<"Please Enter Publication: ";
        cin>>publication;
        book[cnt].setIsbn(isbn);
        book[cnt].setTitle(title);
        book[cnt].setAuthor(author);
        book[cnt].setEdition(edition);
        book[cnt].setPublication(publication);
        cout<<"\nBOOK HAS BEEN EDITED SUCCESSFULLY!\n\nPress any key to continue . . .";
        displayMenu();
    }
    else {
        displayMenu();
    }
}


void library::searchBook() {
    //    cout<<"test search library"<<endl;
    string isbn;
    if (cnt==0) {
        cout<<"THE LIBRARY IS EMPTY!\n\nPress any key to continue . . .";
        displayMenu();
    }
    int index=searchForBook(isbn);
    cout<<"BOOK DETAILS \n";
    cout<<"ISBN: "<<book[index].getIsbn()<<endl;
    cout<<"TITLE: "<<book[index].getTitle()<<endl;
    cout<<"AUTHOR: "<<book[index].getAuthor()<<endl;
    cout<<"EDITION: "<<book[index].getEdition()<<endl;
    cout<<"PUBLICATION: "<<book[index].getPublication()<<endl;
    displayMenu();
}



void library::displayAllBook() {
    //   cout<<"test display all"<<endl;
    if (cnt==0) {
        cout<<"THE LIBRARY IS EMPTY!\n\nPress any key to continue . . .";
        displayMenu();
    }
    cout<<"PRINTING ALL BOOKS IN THE LIBRARY !"<<endl;
    for (int i=0;i<cnt;i++) {
        cout<<"--------------------------------------------------------"<<endl;
        cout<<i+1<<"- BOOK DETAILS \n";
        cout<<"ISBN: "<<book[i].getIsbn()<<endl;
        cout<<"TITLE: "<<book[i].getTitle()<<endl;
        cout<<"AUTHOR: "<<book[i].getAuthor()<<endl;
        cout<<"EDITION: "<<book[i].getEdition()<<endl;
        cout<<"PUBLICATION: "<<book[i].getPublication()<<endl;
        cout<<"--------------------------------------------------------"<<endl;
    }
    displayMenu();
}

//Fun To Exit The exe
void library::exitSystem() {
    //  cout<<"test exit system"<<endl;
    _exit(1);
}

int library::searchForBook(string isbn) {
    for (int i=0;i<cnt;i++) {
        if (book[i].getIsbn()==isbn) {
            cout<<"\nBOOK FOUND\n\n";
            return i;
        }
        else {
            cout<<"\nBOOK NOT FOUND!\n\nPress any key to continue . . .";
            displayMenu();
        }
    }
    return 0;
}
//func for incrementing counter
void library::increment() {
    cnt++;
}

//func for decrementing counter
void library::decrement() {
    cnt--;
}
