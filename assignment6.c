#include<stdio.h>
#include<stdlib.h>
int main(){
    int counter=1;
    while(counter<=20){
        if(counter%2 !=0){
            printf("%d",counter);
        }
        counter=counter+1;
    }
    printf("\n");
    return 0;
}