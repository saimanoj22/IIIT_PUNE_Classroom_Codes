#include<stdio.h>
 
void Fibonacci(int n){
   static int first = 0, second = 1, sum;
   if(n>1){
      sum = first + second;
      first = second;
      second = sum;
      printf("%d\n", sum);
      return Fibonacci(n-1);
   }
}
int main(){
   int n = 10;
   printf("%d\n", 1);
   Fibonacci(n);
   return 0;
}