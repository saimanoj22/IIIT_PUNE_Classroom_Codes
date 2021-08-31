#include<iostream>
using namespace std;

class Sample
{
    float area;
    public:
    Sample(){
        area = 0;
    }
    Sample(int a, int b){
        cout << "Enter Lenght and breadth of rectangle : ";
        cin >> a >> b;
        area  = a * b;
    }
    Sample(int a){
        cout << "Enter side of square : ";
        cin >> a;
        area = a * a;

    }
    void show(){
        cout << area << endl;
    }
};

int main(){
    int a,b,c;
    Sample c1;
    Sample c2(a, b);
    Sample c3(c);
    cout << "The area : ";
    c1.show();
    cout << "The area of rectangle : ";
    c2.show();
    cout << "The area of square : ";
    c3.show();
    return 0;
}