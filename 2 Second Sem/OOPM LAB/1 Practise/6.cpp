#include<iostream>
using namespace std;

int main(){
    int a, count = 0;
    cin >> a;
    while(a > 0){
        count ++;
        a /= 10;
    }
    cout << count;
    return 0;
}