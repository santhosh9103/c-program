#include<stdio.h>
#include<stdio.h>
int main(){
    int number;
    printf("enter the numer lesser than 0 or greather than 100:  \n");
    scanf("%d",&number);         
     if(number<0  || number>100){
         printf("the input is valid");
     } else {
       printf("input is invalid");
     }
     return 0;
}