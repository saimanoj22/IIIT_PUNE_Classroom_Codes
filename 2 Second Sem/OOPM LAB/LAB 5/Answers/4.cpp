#include<iostream>
using namespace std;

//Base class
class College{
    public:
        void display(){
            cout << "\n*******Demonstration of Inheritance******" << endl;
            cout << "Base class called using object of Derived class\n" << endl;
        }
};

// Derived class
class Student : public College{
    
};

int main(){
    Student s1;
    // calling a member function from Base Class
    s1.display();
    return 0;
}
