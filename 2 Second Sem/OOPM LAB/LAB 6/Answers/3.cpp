#include<iostream>
using namespace std;

class class_1{
    int a;
    public:
        class_1(){
            cout << "class_1 default constructor.\n\n";           
        }
        class_1(int a){
            cout << "\nclass_1 is accessed.\n";
            cout << "class_1 parameterized constructor.\n\n";
        }
};

class class_2 : public class_1{
    int b;
    public:
        class_2(){
            cout << "class_2 default constructor.\n\n";   
        }
        class_2(int b) : class_1(b){
            cout << "class_2 is accessed.\n";
            cout << "class_2 parameterized constructor.\n\n";           
        }
};

int main(){
    class_2 d1(10);
    return 0;
}