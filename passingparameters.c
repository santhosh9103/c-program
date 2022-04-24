#include<stdio.h>
int add(int a,int b){
    int c = a +b;
    printf("The answer is %d\n",c);
    return c;
}
int main(){
    int santhosh,rohith;
    printf("Enter the first number: ");
    scanf("%d",&santhosh);
    printf("enter  the secound number:");
    scanf("%d",&rohith);
    add(santhosh,rohith);
}