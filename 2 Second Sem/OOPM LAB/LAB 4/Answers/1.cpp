#include<iostream>
using namespace std;

class Sample
{
    int num;
    public:
    void getvalue(){
        cout << "Enter a number : ";
        cin >> num;
    }
    void operator++(){
        num = ++num;
    }
    void operator--(){
        num = --num;
    }
    void display(){
        cout << num;
    }
};

int main(){
    Sample s1;
    s1.getvalue();
    ++s1;
    cout << "Incremented number : ";
    s1.display();
    --s1;
    cout << "\nDecremented number : ";
    s1.display();
    return 0;
}