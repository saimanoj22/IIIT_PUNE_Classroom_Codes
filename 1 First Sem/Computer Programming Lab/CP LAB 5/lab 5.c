#include<stdio.h>
int studenttot(float studenttotal[10],int sub1[10],int sub2[10],int sub3[10]){
    for(int i = 0; i < 10; i++){
        studenttotal[i] = sub1[i] + sub2[i] + sub3[i];
    }
}
int studentavg(int misno[10],float studentaverage[10],float studenttotal[10]){
    printf("\nStudent Mis.No.\t\tAverage Marks\n");
    for(int j = 0; j < 10; j++){
        studentaverage[j] = studenttotal[j] / 3.0;
    }
    for(int a = 0; a < 10; a++){
        printf("%d\t\t\t%.2f\n", misno[a], studentaverage[a]);
    }
    printf("\n");
}
int classavg(float studentaverage[10], float classaverage){
    int sum = 0;
    for(int k = 0; k < 10; k++){
        sum = sum + studentaverage[k];
    }
    classaverage = sum / 10.0;
    printf("The class average is %.2f\n", classaverage);
    printf("\n");
}
int frequency(float studenttotal[10], int distinction, int firstclass, int secondclass){
    int flag;
    printf("Category\t\tFrequency\n");
    for(int l = 0; l < 10; l++){
        flag = (studenttotal[l] / 300 ) * 100;
        if(flag >= 75.0){
            distinction++;
        }
        else if(flag >= 60){
            firstclass++;        
        }
        else{
            secondclass++;
        }
    }
    printf("Distinction\t\t%d\n", distinction);
    printf("FirstClass\t\t%d\n", firstclass);
    printf("SecondClass\t\t%d\n\n", secondclass);

}
int ascendingorder(float studentaverage[10], int misno[10]){
    printf("Student Mis.No :\t\tAverage Marks in Ascending Order\n");
    for(int i = 0; i < 10; i++){
        for(int  k = 0; k < 10; k++){
            if(studentaverage[k] > studentaverage[k+1]){
                float a = studentaverage[k];
                studentaverage[k] = studentaverage [k+1];
                studentaverage[k+1] = a;
                int b = misno[k];
                misno[k] = misno[k+1];
                misno[k+1] = b;
            }
        }
    }
    for(int k = 0; k < 10; k++){
        printf("%d\t\t\t%.2f\n", misno[k], studentaverage[k]);
    }
    printf("\n");
}
int descendingorder(float studentaverage[10], int misno[10]){
    printf("Student Mis.No :\t\tAverage Marks in Descending Order\n");
    for(int i = 0; i < 10; i++){
        for(int  k = 0; k < 9; k++){
            if(studentaverage[k] < studentaverage[k+1]){
                float a = studentaverage[k];
                studentaverage[k] = studentaverage [k+1];
                studentaverage[k+1] = a;
                int b = misno[k];
                misno[k] = misno[k+1];
                misno[k+1] = b;
            }
        }
    }
    for(int k = 0; k < 10; k++){
        printf("%d\t\t\t%.2f\n", misno[k], studentaverage[k]);
    }
    printf("\n");
}
int topper(float studentaverage[10], int misno[10]){
    printf("The Topper of the class is Student with Mis.No : %d with average marks of %.2f\n", misno[0], studentaverage[0]);
    printf("The Second Topper of the class is Student with Mis.No : %d with average marks of %.2f\n\n", misno[1], studentaverage[1]);
}
int main(){

    int misno[10] = {10,20,30,40,50,60,70,80,90,99};
    int sub1[10] = {70,76,77,60,68,67,70,72,75,89};
    int sub2[10] = {60,60,72,69,68,67,70,72,75,89};
    int sub3[10] = {60,60,72,69,68,67,70,72,75,89};
    float studenttotal[10]; float studentaverage[10]; float classaverage;
    int distinction = 0, firstclass = 0, secondclass =0;
    studenttot(studenttotal,sub1,sub2,sub3);
    studentavg(misno,studentaverage, studenttotal);
    classavg(studentaverage, classaverage);
    frequency(studenttotal,distinction,firstclass,secondclass);
    ascendingorder(studentaverage,misno);
    descendingorder(studentaverage,misno);
    topper(studentaverage,misno);
    return 0;
}