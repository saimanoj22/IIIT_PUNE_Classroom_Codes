#include<iostream>
using namespace std;

class Time{
    int min;
    public:
        Time(){
            cout << "Enter minutes : ";
            cin >> min;
        }
        operator int(){
            // Class Type ==> Basic Type Conversion
            if(min > 60){
                int h = min / 60;
                min = min - (h*60);
                return h;
            }
            else{
                int m = min % 60;
                return m;
            }
        }
        ~Time(){
        };
};

int main(){
    Time t1;
    int hours, minutes;
    // Class Type ==> Basic Type Conversion
    hours = t1.operator int();
    minutes = t1.operator int();
    cout << "Hours : ";
    cout << hours << endl;
    cout << "Minutes : ";
    cout << minutes << endl;
    return 0;
}