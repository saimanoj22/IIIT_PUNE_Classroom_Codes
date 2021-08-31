#include<iostream>
using namespace std;

class Sample
{
    int num1, num2;
    public:
    void getvalue(){
        cout << "Enter a number : ";
        cin >> num1;
    }
    Sample operator+(Sample &c){
        Sample diff;
        diff.num2 = num1 - c.num1;
        return diff;
    }
    void display(){
        cout << "The differnece of numbers : " << num2;
    }
};

int main(){
    Sample s1, s2, s3;
    s1.getvalue();
    s2.getvalue();
    s3 = s1 + s2;
    s3.display();
    return 0;
}