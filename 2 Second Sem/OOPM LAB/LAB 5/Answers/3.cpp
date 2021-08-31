#include<iostream>
using namespace std;

class Time{
    int min;
    public:
        Time(int a){
            min = a;
        }
        int get_duration(){
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
        void display(){
            cout << "\nTotal Minutes : " << min << endl;
        }
};

class Minutes{
    int h, m;
    public:
        Minutes(){
            h = 0; m = 0;
        }
        void operator=(Time t){
            h = t.get_duration();
            m = t.get_duration();
        }
        void display(){
            cout << "Hours : " << h << endl;
            cout << "Minutes : " << m << endl;
        }
};

int main(){
    int hours, minutes;
    cout << "Enter Minutes : ";
    cin >> minutes;
    Time t1(minutes);
    Minutes m1;

    // Class Type ==> Class Type conversion
    // Time Class ==> Minute Class Conversion
    m1 = t1;
    t1.display();
    m1.display();

    return 0;
}