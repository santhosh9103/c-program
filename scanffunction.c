#include<stdio.h>
int main(){
 int num1,num2;
 int operator;
 scanf("%d %d",&num1,&num2);//same mistake u have missed to this  symbol &&&&&&&&&&&&&&&&&&&&&&&&&& 
 printf("your  first number: %d",num1);
 printf("\n your  second number: %d",num2);
 operator=num1+num2;
 printf("\n answer= num1+num2 %d",operator);
 return 0;
}