#include<stdio.h>
int main(){
    double num1;
    double num2;
    int mult;
    printf("enter the first number:");
     scanf("%lf",&num1);  //u have been always forgetting to use and symbol while using the  scanf  function 
    printf("enter the second number:");
    scanf("%lf",&num2);
    mult=num1*num2;
    printf("the answer is %d",mult);
    return 0;
}