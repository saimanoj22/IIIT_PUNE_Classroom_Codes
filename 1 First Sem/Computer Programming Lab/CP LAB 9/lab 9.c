#include<stdio.h>
int main() {
    char Vehicle_Type[3][20];
    char(*ptr)[20] = Vehicle_Type;
    int nums[3][2];
    int(*ptr1)[2] = nums;

    for (int i = 1;i <= 3;i++) {
        printf("Enter Vehicle Type: ");
        scanf("%s", (ptr + i - 1));
        printf("Enter month sales: ");
        scanf("%d", (*(ptr1 + i - 1) + 0));
        printf("Enter price per unit: ");
        scanf("%d", (*(ptr1 + i - 1) + 1));
    }
    int total = 0;
    printf("\n\nName\t\t\tSales\t\tPrice\n");
    for (int i = 0;i < 3;i++) {
        printf("%s\t\t%d\t\t%d\n", (ptr + i), *(*(ptr1 + i) + 0), *(*(ptr1 + i) + 1));
        total += *(*(ptr1 + i) + 0) * (*(*(ptr1 + i) + 1));
    }
    printf("\n\nTotal amount is %d", total);
    return 0;
}
