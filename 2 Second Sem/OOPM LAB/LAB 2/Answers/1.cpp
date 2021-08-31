#include<iostream>
using namespace std;

class beta;
class alpha
{
    int num1;
    public:
    void a_setvalue(){
        cout << " Enter a number : ";
        cin >> num1;
    }
    friend void add(alpha, beta);
};

class beta
{
    int num2;
    public:
    void b_setvalue(){
        cout << "Enter another number : ";
        cin >> num2;
    }
    friend void add(alpha, beta);
};

void add(alpha a, beta b){
    cout << "The sum of numbers is : " << a.num1 + b.num2;
}

int main(){
    alpha a; beta b;
    a.a_setvalue();
    b.b_setvalue();
    add(a,b);
    return 0;
}