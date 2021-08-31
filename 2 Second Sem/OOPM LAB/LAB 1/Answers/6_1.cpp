#include <iostream>
#include<string>
using namespace std;

 class Library
{
 int id[10],price[10],pages[10],status[10],i,id1,id2,t;
 string name[10],author[10],genre[10];
 public:
Library()
{
	i=0;
}

void withdrawBook(){
    cout<<"\nEnter the book id: ";
    cin>>id1;
    for(t=0;id[t]!='\0';t++){
        if(id[t]==id1)
        status[i]=2;  	
    }
}
void addBook(){  	
    cout<<"Enter book ID: ";
    cin>>id[i];  	
    cout<<"Enter the name of the book: ";
    cin>>name[i];
    cout<<"Enter the name of the author: ";
    cin>>author[i];
    cout<<"1 for Available or 2 for Unavailable: ";
    cin>>status[i];
    cout<<"Enter the genre: ";
    cin>>genre[i];
    cout<<"Enter the price: ";
    cin>>price[i];
    cout<<"Enter the number of pages: ";
    cin>>pages[i];  
}	

void searchBook(){
    cout<<"\nEnter the book id: ";
    cin>>id2;
    for(t=0;id[t]!='\0';t++){
        if(id[t]==id1){
        cout<<"\nBook name: "<<name[i]<<" Aurhor name: "<<author[i];
        cout<<" Price: "<<price[i]<<"\nGenre: "<<genre[i]<<" Page count: "<<pages[i];
        if(status[i]==2)
        cout<<"\n Book unavailable";
        else
        cout<<"\n Book available";
	    }    
    }	
}

	
};

int main()
{   
    Library L;
    int choice, u;
    cout << "1. Withdraw a Book" << endl;
    cout << "2. Add a Book" << endl;
    cout << "3. Search a Book" << endl;
    cout << "4. Exit" << endl;
    cout << "Select a Choice from above :  " << endl;
  do
{
 
cin>>choice;
switch(choice)
    {
        case 1:
            L.withdrawBook();
        break;
        case 2:
            L.addBook();
        break;
        case 3:
            L.searchBook();
        break;
    }	
	cout<<"\nEnter 4 to exit or Continue with your choice : ";
	
}while(choice!=4);
  
    return 0;
}