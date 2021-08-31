#include<stdio.h>

void factorial(int n,int fact){
    if(n == 0){
        printf("Factorial of 5 is %d", fact);
        return ;
    }
    else{
        fact = fact * n;
        return factorial(n-1,fact);
    }
}
int main(){
    int fact = 1;
    int n = 5;
    factorial(n,fact);
    return 0;
}