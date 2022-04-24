#include <stdio.h>

float getAverage(float number1, float number2)
{
    float average;
    average = (number1 + number2)/2.0;
    return average;
}
int main() {
    float mame;
    float bumm;
    float average;
    printf("enter the value:");
    scanf("%f",&mame);
    printf("enter the value :");
    scanf("%f",&bumm);
    average = getAverage(mame,bumm);
    printf("Average is %f\n", average);
    return 0;
}