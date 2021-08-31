#include<iostream>
#include<cstring>
using namespace std;

class Student{
    string name;
    public:
    Student(){
        name = "Unknown";
    }
    Student(string s){
        cout << "Enter a name  : ";
        cin >> s;
        name = s;
    }
    void show(){
        cout <<  "Name of Student : "  << name << endl;
    }
};

int main(){
    string a, b;
    Student s1(a);
    Student s2;
    Student s3(b);
    s1.show();
    s2.show();
    s3.show();
    return 0;
}
