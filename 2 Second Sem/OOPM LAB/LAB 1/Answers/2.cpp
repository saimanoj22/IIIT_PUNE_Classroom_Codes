#include<iostream>
using namespace std;

class sample{
    public:
    int a;
    int b;
};
int main(){
    sample s1;
    sample *ptr;
    ptr = &s1;
    ptr->a = 10;
    ptr->b = 20;
    cout << ptr->a << endl;
    cout << ptr->b << endl;
    return 0;
}