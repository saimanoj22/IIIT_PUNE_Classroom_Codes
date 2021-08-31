#include<stdio.h>

void add(int a[8]){
    int sum = 0;
    for (int i = 0; i < 8; i++){
        sum = sum + a[i];
    }
    printf("The sum is %d\n", sum);
}
void subtract(int b[8]){
    int diff = b[0];
    for(int j = 1; j < 8; j++){
        diff = diff - b[j];
    }
    printf("The difference is %d\n", diff);
}
void multiply(int c[8]){
    int product = 1;
    for (int k = 0; k < 8; k++){
        product = product * c[k];
    }
    printf("The product is %d\n", product);
}
int main(){
    int a[8] = {10,90,20,40,60,50,30,70};
    add(a);
    
    int b[8] = {1000,200,100,50,40,20,10,150};
    subtract(b);
    
    int c[8] = {9,2,4,5,7,6,8,8};
    multiply(c);
    
    return 0;
}
