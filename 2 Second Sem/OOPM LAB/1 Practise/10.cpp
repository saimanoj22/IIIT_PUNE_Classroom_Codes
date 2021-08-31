#include<iostream>
using namespace std;

void recursion(int n){
    if(n == 51)return;
    cout << n << " ";
    recursion(n+1);
}
int main(){
    recursion(1);
    return 0;
}