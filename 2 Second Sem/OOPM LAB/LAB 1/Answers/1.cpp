#include<iostream>
#include<string>
using namespace std;

class student{
    int rollno;
    char section;
    long long int phone_number;
    string name;
    public:
        void getRollNo(int x){
            cin >> rollno;
        }
        void getName(string x){
            cin >> name;
        }
        void getPhoneNo(long long int x){
            cin >> phone_number;
        }
        void getSection(char x){
            cin >> section;
        }
        void displayStudent(){
            cout << "---------------------------------------------" << endl;
            cout << "***Details of Student***\n" << endl;
            cout << "Roll No.: " << rollno << endl;
            cout << "Name : " << name << endl;
            cout << "Phone Number : " << phone_number << endl;
            cout << "Section : " << section << endl;
            cout << "---------------------------------------------" << endl;
        }
};

int main(){
    student s1;
    int x;char y; string n; long long int z;
    printf("Enter roll no : ");
    s1.getRollNo(x);
    printf("Enter your Name : ");
    s1.getName(n);
    printf("Enter your Phone Number : ");
    s1.getPhoneNo(z);
    printf("Enter your Section : ");
    s1.getSection(y);
    s1.displayStudent();
    return 0;
}