#include<iostream>
using namespace std;

int main(){
    int a, b, choice;
    cout << "enter two numbers : ";
    cin >> a >> b;
    cout << "What you want to perform\n1.addition\n2.subtraction\n3.multiplication\n4.division\n";
    cin >> choice;
    switch(choice)
    {
        case 1:
            cout<<a+b<<endl;
            break;
        case 2:
            cout<<a-b<<endl;
            break;
        case 3:
            cout<<a*b<<endl;
            break;
        case 4:
            cout<<a/b<<endl;
            break;
        default:
        cout<<"Enter correct choice"<<endl;
    }
    return 0;
}