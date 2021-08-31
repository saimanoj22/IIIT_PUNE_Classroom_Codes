#include<iostream>
using namespace std;

class Complex
{
    int real, imag;
    public:
    Complex(){
        real = 0, imag = 0;
    }
    void getvalue(){
        cout << "Real part : ";
        cin >> real;
        cout << "Imaginary part : ";
        cin >> imag;
    }
    friend Complex operator+(Complex c1, Complex c2);
    void display(){
        cout << real << " + " << imag << "i" << endl;
    }
};

Complex operator+(Complex c1, Complex c2)
{
    Complex c;
    c.real = c1.real + c2.real;
    c.imag = c1.imag + c2.imag;
    return c;
}

int main(){
    Complex c1, c2, c3;
    cout << "Enter complex number 1\n";
    c1.getvalue();
    cout << "Enter complex number 2\n";
    c2.getvalue();
    c3 = c1 + c2;
    cout << "Complex number 1 : ";
    c1.display();
    cout << "Complex number 2 : ";
    c2.display();
    cout << "The sum of complex numbers is : ";
    c3.display();
    return 0;
}
