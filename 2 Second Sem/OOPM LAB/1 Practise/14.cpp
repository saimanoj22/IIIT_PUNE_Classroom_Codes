#include<iostream>
using namespace std;

int main(){
    char string[] = "Hello world IS";
    for(int i = 0; string[i] != '\0'; i++){
        cout << islower(string[i]);
    }
    return 0;
}