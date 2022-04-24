#include<stdio.h>
#include<stdlib.h>
int main(){
    int number1;
    int number2;
    int choice;
    int result;
    do{
        printf("enter 1 for addition  \n");
        printf("enter 2 for addition \n");
        printf("enter 3 for exit   \n");
        scanf("%d",&choice);
        if(choice ==1){
            printf("enter the frist value:");
            scanf("%d",&number1);
            printf("enter the second value:");
            scanf("%d",&number2);
            result=number1+number2;
            printf("this is the answer %d",result);    
        }else if(choice ==2){
            printf("enter the first number:");
            scanf("%d",&number1);
            printf("enter the second number:");
            scanf("%d",&number2);
            result=number1-number2;
            printf("this the answer:%d",result);
        }else if (choice <1 || choice >3){
            printf("enter a valid choice");
        }
    }while(choice !=3);
    printf("thank for using calculator!!!");
    return 0;
}