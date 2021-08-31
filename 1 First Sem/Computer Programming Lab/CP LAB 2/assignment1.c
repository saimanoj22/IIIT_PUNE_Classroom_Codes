#include<stdio.h>

int main(){
    int CostumerNumber [10] = {11,22,33,44,55,66,77,88,99,110};
    int unitsConsumed [10] = {100,300,400,50,500,600,200,300,200,10};
    float CustomerBill, TotalBill, MinBill = 50.0;
    printf("\nCostumerNumber \t unitsConsumed \t CustomerBill \n");
    for (int i = 0; i < 10; i++){
        if (unitsConsumed[i] <= 100.0){
            CustomerBill = unitsConsumed[i] * 0.6 + MinBill;
        }
        else if (unitsConsumed[i] <= 300.0){
            CustomerBill = unitsConsumed[i] * 0.8 + MinBill;
        }
        else{
            CustomerBill = unitsConsumed[i] * 0.9 + MinBill;
        }

        if (CustomerBill > 300){
            CustomerBill = CustomerBill * 1.15;
        }
        printf("%d \t\t %d \t\t %.2f\n", CostumerNumber[i], unitsConsumed[i], CustomerBill);
        TotalBill = TotalBill + CustomerBill;
    }
    printf("\nTotal bill of all the Customers is Rs. %.2f", TotalBill);
    return 0;
}