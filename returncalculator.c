#include<stdio.h>
int performCalculation(int option,int number1,int number2){
    int result;
    if(option==1){
        result=number1+number2;
    }else if (option==2){
        result=number1-number2;
    }else if(option==3){
        result=number1*number2;
    }
    return result;
}
int main(){
    int options,number1,number2,result;
    printf("enter the first number:");
    scanf("%d",&number1);
    printf("enter the second number:");
    scanf("%d",&number2);
    printf("*******************************");
    printf(" \n     1 for addtion            ");
    printf("   \n  2 for subracton           ");
    printf("   \n 3 for multiplication       ");
    printf("\n*******************************");
    scanf("%d",&options );
    result=performCalculation(options,number1,number2);
    printf("answer:%d",result);
}