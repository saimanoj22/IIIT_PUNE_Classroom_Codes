#include<iostream>
using namespace std;

class Complex
{
    int a, b;
    public:
    void getvalue(int x, int y){
        a = x;
        b = y;
    }
    void printvalue(){
        cout << "Complex Number is : " << a << "+" << b <<"i" << endl;
    }
    friend Complex csum(Complex c1, Complex c2);
};

Complex csum(Complex c1, Complex c2){
    Complex c3;
    c3.getvalue((c1.a + c2.a),(c1.b + c2.b));
    return c3;
}

int main(){
    Complex C1, C2, sum;
    C1.getvalue(2,8);
    C2.getvalue(5,7);
    sum = csum(C1, C2);
    sum.printvalue();
    return 0;
}