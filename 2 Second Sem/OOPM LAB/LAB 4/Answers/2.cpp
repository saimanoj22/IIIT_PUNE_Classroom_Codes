#include<iostream>
using namespace std;

class Student
{
    int marks;
    public:
    Student(){
        marks = 0;
    }
    Student(int m){
        marks = m;
    }
    friend bool operator==(Student &s1, Student &s2);
    void display(){
        cout << marks;
    }
};

bool operator==(Student &s1, Student &s2){
    return(s1.marks == s2.marks);
}

int main(){
    Student s1(98);
    Student s2(98);
    cout << "Marks of Student 1 : ";
    s1.display();
    cout << "\nMarks of Student 1 : ";
    s2.display();
    if(s1 == s2){
        cout << "\nBoth students marks are equal";
    }
    else{
        cout << "\nBoth students marks are not equal";
    }
    return 0;
}