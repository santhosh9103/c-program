#include<stdio.h>
int main(){
    int i=99;
    int *p=&i;
    printf("the value of i is;%d",i);
    printf("the address of the variable:%x\n",&i);
    printf("the value of p is:%x\n",p);
    printf("the address of the varaible:%x\n",*p);
    printf("the value of the p is:%x\n",&p);
    return 0;
}