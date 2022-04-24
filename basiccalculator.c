#include<stdio.h>
#include<stdlib.h>
#include <math.h>
int main(){
    double number1;
    double number2;
    char operator;
    int answer;
    printf("enter the first number : /n ");
    scanf("%lf",&number1);
    printf("enter the operator: /n");
    scanf(" %c",&operator);
    printf("enter the number :/n");
    scanf("%lf",&number2);
    if(operator =='+'){
     answer=number1+number2;
    }else if(operator =='-'){
   answer=number1-number2;
    }else if (operator =='*'){
     answer=number1*number2;
    }else if(operator  =='/'){
       answer=number1/number2;
    //}else if(operator == 'sqrt'){
    //    answer=sqrt;
    }
    else{
        printf("invalaid operator");
    }    
    printf("answer:%d",answer);
    return 0;
}
//9123512529