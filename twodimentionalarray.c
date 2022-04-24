#include<stdio.h>
int  main(){
    int count[2][3]={10,35,54,65,56,99};//while using 2dimentional array use (=)equal to after declaration
    for(int row=0;row<2;row++){
        for(int col=0;col<3;col++){
            printf("%d",count[row][col]);
        }
        printf("\n");
    }
    return 0;
}