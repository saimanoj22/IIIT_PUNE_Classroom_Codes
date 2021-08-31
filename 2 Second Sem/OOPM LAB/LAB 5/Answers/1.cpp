#include<iostream>
using namespace std;

class Time{
    int hrs, min;
    public:
        void display(){
            cout << "Hours : " << hrs << endl;
            cout << "Minutes : " << min << endl;
        }
        void operator=(int d){
            // Basic type ==> Class Type Conversion
            hrs = d / 60;
            min = d % 60;
        }
};

int main(){
    Time t1;
    int period;
    cout << "Enter time duration in minutes : ";
    cin >> period;
    // // Basic type ==> Class Type Conversion
    t1 = period;
    t1.operator=(period);
    t1.display();
    return 0;
}