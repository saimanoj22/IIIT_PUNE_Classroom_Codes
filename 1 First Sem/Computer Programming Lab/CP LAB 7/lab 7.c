#include<stdio.h>

struct product
{
    char name[100];
    int id;
    int quantity;
    int price;
};
int main(){
    struct product p[4];
    printf("Enter\n");
    printf("[Product_name] [id] [price] [quantity]\n");
    for(int i = 0; i < 4; i++){
        scanf("%s %d %d %d",p[i].name,&p[i].id,&p[i].price,&p[i].quantity);
    }
    printf("             *****  INVENTORY *****\n");
    printf("------------------------------------------------------------------\n");
    printf("S.N.|\tNAME\t|\tCODE\t|\tQUANTITY\t|\tPRICE\n");
    for(int j = 0; j < 4; j++){
        printf("%d\t%s\t\t%d\t\t%d\t\t\t%d\n",j+1,p[j].name,p[j].id,p[j].quantity,p[j].price);
    }
    printf("------------------------------------------------------------------\n");
    int userbuy, userquantity;
    printf("Enter Product id you want to buy: ");
    scanf("%d", &userbuy);
    printf("Enter quantity you want to buy: ");
    scanf("%d", &userquantity);
    for(int  k = 0; k < 4; k++){
        if(userbuy == p[k].id){
            if(userquantity <=p[k].quantity){
                printf("\n             *****  USER BILL *****\n");
                printf("------------------------------------------------------------------\n");
                printf("S.N.|\tNAME\t|\tCODE\t|\tQUANTITY\t|\tPRICE\t|\tNet.amt\n");
                printf("1\t%s\t\t%d\t\t%d\t\t\t%d\t\t%d\n", p[k].name,p[k].id,userquantity,p[k].price,p[k].price*userquantity);
                printf("------------------------------------------------------------------\n");
                }
            else{
                printf("Sorry! Stock not available.");
            }
        }
    }
    return 0;
}