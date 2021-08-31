#include<stdio.h>

int main(int argc, char *argv[]){
    int pass = 0, second_class = 0, first_class = 0, distinction = 0;
    int class_marks[18] = {43,65,51,79,56,82,49,55,63,81,49,68,93,85,87,91,78,65};
    for(int i = 0; i < 18; i++){
        if(class_marks[i] >= 40 && class_marks[i] < 50){
            pass++;
        }
        else if(class_marks[i] >= 50 && class_marks[i] < 60){
            second_class++;
        }
        else if(class_marks[i] >= 60 && class_marks[i] < 75){
            first_class++;
        }
        else{
            distinction++;
        }
    }
    printf("\nCategory\tNo.of Students\n");
    printf("Pass\t\t%d\nSecond Class\t%d\nFirst Class\t%d\nDistinction\t%d\n\n", pass, second_class, first_class, distinction);
    return 0;
}