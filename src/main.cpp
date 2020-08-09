
#include"header.h"

using namespace std;



// The Main Fun To Run The Proj
int main() {

    int userChoice;

    library lib;


    //Displaying The Main Menu Screen
    displayMenu();

    
    //Getting The User Choce 
    cout<<"Enter Your Choice \n";
    cin>>userChoice;

    switch (userChoice)
    {
    case 1:
        lib.addBook();
        break;
    case 2:
        lib.deleteBook();
        break;
    case 3:
        lib.editBook();
        break;
    case 4:
        lib.searchBook();
        break;
    case 5:
        lib.displayAllBook();
        break;
    case 6:
        lib.exitSystem();
        break;
    default:
        cout<<"PLEASE ENTER A VAILD CHOICE \n";
        displayMenu();
        break;
    }


    return 0;

}


