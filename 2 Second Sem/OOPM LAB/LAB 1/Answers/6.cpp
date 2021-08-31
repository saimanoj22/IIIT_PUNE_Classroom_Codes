#include<iostream>
using namespace std;

class library
{
    public:
    string name[5], author[5], status[5], genre[5];
    int uid[5], pages[5];
    float price[5];
    int withdrawBook(int u){
        cout << "Enter UID of book to withdraw : ";
        cin >> u;
        for(int i = 0; i < 5; i++){
            if(u == uid[i]){
                if(status[i] == "Available"){
                    status[i] == "Unavialable";
                }
                if(status[i] == "Unavaiable"){
                    cout << " Book is unavailable now";
                }
            }
        }
        return 0;
    }
    int addBook(){
        cout << "Enter Details of book as uid, name, author, status, genre, price, pages :  ";
        cin >> uid >> name >> author >> status >> genre >> price >> pages;
        return 0;
    }
    int searchBook(int u){
        cout << "Enter UID of the book : ";
        cin >> u;
        for(int i = 0; i < 5; i++){
            if(uid == uid[i]){
                cout << "Book Found";
                cout << uid[i] << name[i] << author[i];
            }
            else{
                cout << "Book not Found";
            }
        }
        return 0;
    }
};
int main(){
    library L1;
    int choice, u;
    cout << "1. Withdraw a Book" << endl;
    cout << "2. Add a Book" << endl;
    cout << "3. Search a Book" << endl;
    cout << "4. Exit" << endl;
    cout << "Select a Choice from above :  " << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
        L1.withdrawBook(u);
        break;
    case 2:
        L1.addBook();
        break;
    case 3:
        L1.searchBook(u);
        break;
    case 4:
        return 0;
        break;
    default:
        cout << "Enter a correct choice : ";
        cin >> choice;
        break;
    }
    return 0;
}