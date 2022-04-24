#include<stdio.h>
#include<stdlib.h>
int main(){
 float english,maths,science;
 int average;
 printf("enter the marks of the english:");
 scanf("%f",&english);
 printf("enter the marks of the maths:");
 scanf("%f",&maths);
 printf("enter the marks of the science:");
 scanf("%f",&science);
 average=(english+maths+science)/3;
 if (average>75){
     printf("grade A");
 }else{
     printf("grade B");
 }
  return 0;
}