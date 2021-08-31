#include<stdio.h>

int acctno[5]={104,405,304,500,508};
char username[5][200]={"Amit Shah","Vinit Desai","Souram Das","Sam D","Rohit Singh"};
double acctbal[5]={2000,5000,8000,10000,20000};
int userinputacct, deposit, withdrawl, transferacctno, transferamount, i, j , k , l, m;
char banktransc, choice;

void checkbalance()
{
    for( i = 0; i < 5; i++){
        if(acctno[i] == userinputacct){
            printf("\n_________________________________________________________________________________________\n");
            printf("\t\t\t\tYour Account Details\t\t\t\t\n");
            printf("Account number: %d \n", acctno[i]);
            printf("Account holder name: %s \n", username[i]);
            printf("Account Balance: %f", acctbal[i]);
            printf("\n__________________________________________________________________________________________\n\n");
        }
    }
}

void depositmoney()
{
    printf("Enter the Amount you want to deposit\n");
    scanf("%d", &deposit);
    for(j = 0; j < 5; j++){
        if(acctno[j] == userinputacct){
            acctbal[j] = acctbal[j] + deposit;
            printf("\n_________________________________________________________________________________________\n");
            printf("\t\t\t\tYour Account Details\t\t\t\t\n");
            printf("Your Old Account Balance: %f\n", acctbal[j]-deposit);
            printf("Your New Account Balance: %f", acctbal[j]);
            printf("\n__________________________________________________________________________________________\n\n");
        }
    }
}

void withdrawlmoney()
{
    printf("Enter the Amount you want to withdrawl\n");
    scanf("%d", &withdrawl);
    for(k = 0; k < 5; k++){
        if(acctno[k] == userinputacct){
            if(acctbal[k] > withdrawl){
                acctbal[k] = acctbal[k] - withdrawl;
                printf("\n_________________________________________________________________________________________\n");
                printf("\t\t\t\tYour Account Details\t\t\t\t\n");
                printf("Your Old Account Balance: %f\n", acctbal[k]+withdrawl);
                printf("Your New Account Balance: %f", acctbal[k]);
                printf("\n__________________________________________________________________________________________\n\n");
            }
            else{
                printf("Your Account don't have enough money to withdrawl\n\n");
            }
        }
    }
}

void transfermoney()
{
    printf("Enter Acoount no. for which you want to tranfer money\n");
    scanf("%d", &transferacctno);
    printf("Enter amount you want to transfer\n");
    scanf("%d", &transferamount);
    for(l = 0; l < 5; l++){
        if(acctno[l] == userinputacct){
            if(acctbal[l] > transferamount){
                acctbal[l] = acctbal[l] - transferamount;
                printf("\n_________________________________________________________________________________________\n");
                printf("\t\t\t\tYour Account Details\t\t\t\t\n");
                printf("Your Old Account Balance: %f\n", acctbal[l]+transferamount);
                printf("Your New Account Balance: %f", acctbal[l]);
                printf("\n__________________________________________________________________________________________\n\n");
                    for(m = 0; m < 5; m++){
                    if(acctno[m] == transferacctno){
                            acctbal[m] = acctbal[m] + transferamount;
                            printf("\n_________________________________________________________________________________________\n");
                            printf("\t\t\t\tTransferd Account Details\t\t\t\t\n");
                            printf("Transfered Account Old Balance: %f\n", acctbal[m]-transferamount);
                            printf("Transfered New Account New Balance: %f", acctbal[m]);
                            printf("\n__________________________________________________________________________________________\n\n");
                    }  
                }
            }
            else{
                printf("Your Account don't have enough money to transfer\n\n");
            }
        }
    }
}

int main(int argc, char *argv[])
{
    do
    {
        printf("Please Enter your Account Number\n");
        scanf("%d", &userinputacct);
        printf("Enter Your Choice:\nD for Deposit\nW for Withdrawl\nT for Transfer\nM for Ministatement\n");
        scanf(" %c", &banktransc);
        switch(banktransc)
        {
            case 'D':
            depositmoney();
            break;
            case 'W':
            withdrawlmoney();
            break;
            case 'T':
            transfermoney();
            break;
            case 'M':
            checkbalance();
            break;
        }
        printf("Enter Y for Continue...");
        scanf(" %c", &choice);

    } while (choice=='Y');
    
return 0;
}