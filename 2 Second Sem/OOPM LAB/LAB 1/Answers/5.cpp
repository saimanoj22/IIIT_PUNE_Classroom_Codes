#include<iostream>
using namespace std;

class sample{
    int count = 0;
    public:
        void countfunction(){
            count++;
        }
        void printcount(){
            cout << "Number of times the function called : " << count;
        }
};
int main(){
    sample s1;
    s1.countfunction();
    s1.countfunction();
    s1.countfunction();
    s1.countfunction();
    s1.countfunction();
    s1.countfunction();
    s1.countfunction();
    s1.countfunction();
    s1.printcount();
    return 0;
}