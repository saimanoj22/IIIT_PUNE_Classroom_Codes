#include<iostream>
using namespace std;

class A{
    public:
        A(){
            cout << "Class A is accessed.\n";
        }
};
class B : public A{
    public:
        B(){
            cout << "Class B is accessed\n";
        }
};
class C : public B{
    public:
        C(){
            cout << "Class C is accessed.\n";
        }
};

int main(){
    C c1;
    return 0;
}