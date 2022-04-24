#include<stdio.h>
int main(){

    int input,number=1;
    printf("Enter a number to find the factorial: ");
    scanf("%d",&input);

    for(int i=1;i<=input;i++){
        number = number*i;
    }
    printf("The factoril of %d is %d\n",input,number);

    return 0;
}