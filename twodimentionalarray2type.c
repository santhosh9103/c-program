#include<stdio.h>
int  main(){
    //int count[2][3]={10,35,54,65,56,99};//while using 2dimentional array use (=)equal to after declaration
    //int count[2][3]={{10,20,30},{40,50,60}};//it is a another type for assigning value to thee 2 dinetional array
    int count[2][3];//it is  a another tyoe of assining value to arrays in  c
    count[0][0]=10;
    count[0][1]=20;
    count[0][2]=30;
    count[1][0]=40;
    count[1][1]=50;
    count[1][2]=99;
    for(int row=0;row<2;row++){
        for(int col=0;col<3;col++){
            printf("%d",count[row][col]);
        }
        printf("\n");
    }
    return 0;
}