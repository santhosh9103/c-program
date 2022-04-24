#include<stdio.h>
int main(){
    int santhosh[3][3];
    int answer;
    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            printf("enter the value to the santhosh[%d][%d]:",row,col);
            scanf("%d",&santhosh[row][col]);
        }
    }for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            answer=answer+santhosh[row][col];
        }
    }
    printf("the answer is :%d",answer);
}