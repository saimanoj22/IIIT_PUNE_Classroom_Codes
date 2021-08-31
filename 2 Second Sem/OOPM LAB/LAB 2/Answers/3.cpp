#include<iostream>
#include<cstring>
using namespace std;

class Student
{
    string Name;
    int Rollno;
    char Section;
    public:
    void add(Student s){
        cout << "Enter Name : " ;cin >> Name;
        cout << "Enter Roll.No.: " ;cin >> Rollno;
        cout << "Enter Section : " ;cin >> Section;
    }
    void show(Student s){
        cout << "\n---------------------------------------------\n";
        cout << "***Details of Student***" << endl;
        cout << "Name : " << Name << endl;
        cout << "Roll No.: " << Rollno << endl;
        cout << "Section : " << Section << endl;
        cout << "\n---------------------------------------------\n";
    }
};

int main(){
    Student z,s1;
    z.add(s1);
    z.show(s1);
    return 0;
}