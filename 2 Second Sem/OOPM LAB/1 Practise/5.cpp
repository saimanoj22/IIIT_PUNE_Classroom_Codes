#include<iostream>
using namespace std;

int main(){
    int a;
    cin >> a;
    int &b = a;
    cout << b;
    return 0;
}