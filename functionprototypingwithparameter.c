#include<stdio.h>
int performdivision(float number1,float number2){
    float answer;
    answer=number1/number2;
    return  answer;
}
int main(){
    float number1,number2;
    float result;
      printf("enter the first number:");
      scanf("%f",&number1);
      printf("enter the second number:");
      scanf("%f",&number2);
      result=performdivision(number1,number2);
      printf("the result is:%f",result); 
}