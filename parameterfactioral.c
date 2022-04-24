#include<stdio.h>
void factioral(int num){
    int incrementation=1;
    int result =1;
    while(incrementation<=num){
    result=result*incrementation;
    incrementation=incrementation++;
    }
        printf("this is the factioral:%d",result);
}
int main(){
    int number;
    printf("Enter the number :");
    scanf("%d",&number);
    factioral(number);
}