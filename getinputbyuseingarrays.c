#include<stdio.h>
int main(){
    int santhosh[2][2];
    int element;
    for(int row=0;row<2;row++){
        for(int col=0;col<2;col++){
            printf("Enter the value for  elemants[%d][%d]:",row,col);
            scanf("%d",&santhosh[row][col]);
        }
    }
}
//example for getting input form user using array