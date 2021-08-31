#include<iostream>
using namespace std;

int main(){
    int principle, rate, time;
    cin >> principle >> rate >> time;
    cout << (principle * rate * time) / 100;
    return 0;
}