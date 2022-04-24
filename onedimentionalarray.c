#include<stdio.h>
int main(){
    float marks[7];
    float average;
    for(int i=0;i<7;i++){
        printf("enter the marks of the subject %d:",i+1);
        scanf("%f",&marks[i]);
    }
    average=(marks[0]+marks[1]+marks[2]+marks[3]+marks[4]+marks[5]+marks[6])/7;
    printf("the average of the marks:%f",average);
    return 0;    
}