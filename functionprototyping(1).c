#include<stdio.h>
void performmultiplication(void);
int main(){
    performmultiplication();
         return 0;
}
void performmultiplication(){
    int number1,number2,answer;
    printf("enter the first number:");
    scanf("%d",&number1);
    printf("enter the second number:");
    scanf("%d",&number2);
    answer=number1*number2;
    printf(" the answer is :%d",answer);
}