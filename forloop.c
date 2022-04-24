#include<stdio.h>
#include<stdlib.h>
int main(){
    int sum;
    for(int i=0;i<=10;i++){
        sum=i+sum;
        printf("%d   \n ",sum);
    }
    return 0;
}