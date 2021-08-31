#include<stdio.h>

void ticket_price(int age[10], int id[10]){
    int x = 0, y = 0, price ;
    for(int i = 0; i < 10 ; i++){
        if(age[i<=18] && x<=2){
            price = 200;
            x++;
        }
        else if(age[i]>=60 && y<2){
            price = 100;
            y++;
        }
        else{
            price = 400;
        }
    printf("%d\t%d\t%d\n", id[i],age[i],price);
    }
}
int main(){
    int age[10] = {18,16,62,66,69,42,45,48,20,30};
    int id[10] = {21,22,23,24,25,26,27,28,29,30};
    printf("id\tage\tprice\n");
    ticket_price(age, id);
    return 0;
}