#include<iostream>
using namespace std;

class Student
{
    public:
    string Name;
    int Rollno;
    float marks;
};

class Marksheet
{
    public:
    Student obj[5];
    void addSMark(){
        for(int  i = 0; i < 5; i++){
            cout << "Enter Name: ";
            cin >> obj[i].Name;
            cout << "Enter Roll.No.: ";
            cin >> obj[i].Rollno;
            cout << "Enter marks : ";
            cin >> obj[i].marks;
        }
    }
    void showMark(int r){
        for(int i = 0; i < 5; i++){
            if(obj[i].Rollno == r){
                cout << "\n------------------------------------------------\n";
                cout << "***Details of Student***" << endl;
                cout << "Name : " << obj[i].Name << endl;
                cout << "Roll No.: " << obj[i].Rollno << endl;
                cout << "Section : " << obj[i].marks << endl;
                cout << "------------------------------------------------";
            }
        }
    }
};

int main(){
    Marksheet m1;
    m1.addSMark();
    m1.showMark(5);
    return 0;
}