#include<stdio.h>
#include<stdlib.h>
int main(){
    float num1;
    float num2;
    float num3;
    float average;
    printf("/nenter your first  number:");
    scanf("%f",& num1);
    printf("/nenter the your secound number:");
    scanf("%f",& num2);
    printf("/nenter the third number:");
    scanf("%f",& num3);
    average=(num1+num2+num3)/3;
    printf("/nthe average is :%f",average);
    printf("/nhigh/low  indicator:%d",average >15);
    return 0;
}