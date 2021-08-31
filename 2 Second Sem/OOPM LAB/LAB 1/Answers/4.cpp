#include<iostream>
using namespace std;

class Sum
{
    public:
    int No1, No2;
    void printSum(){
        cout << "The sum of two nubers is : " << No1 + No2;
    }
    void printAvg(){
        cout << "\nThe average of two numbers is : " << (No1 + No2)/2.0;
    }
};

int main(){
    Sum s1;
    s1.No1 = 53;
    s1.No2 = 120;
    s1.printSum();
    s1.printAvg();
    return 0;
}