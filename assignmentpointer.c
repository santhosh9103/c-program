#include<stdio.h>
void performaddtion(int *pointer1,int *pointer2){
    int sum;
    sum=*pointer1+*pointer2;
    printf("\nValue of %d + %d is %d \n\n", *pointer1, *pointer2, sum);
}
int main(){
    int number1,number2;
    int *number1pointer,*number2pointer;
    printf("enter the number1:");
    scanf("%d",&number1);
    printf("enter the number2:");
    scanf("%d",&number2);
    number1pointer=&number1;
    number2pointer=&number2;
    performaddtion(number1pointer,number2pointer);
}