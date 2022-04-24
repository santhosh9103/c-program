#include<stdio.h>
void display(int *ptr){
    printf("value entered by the user:%d",*ptr);
}
int main(){
    int number;
    int *numberpointer;
    numberpointer=&number;
    printf("enter a  number:");
    scanf("%d",&number);
    display(numberpointer);

    return 0;
}