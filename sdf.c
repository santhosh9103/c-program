#include <stdio.h>

float getAverage(float number1, float number2)
{
    float spiderman;
    spiderman = (number1 + number2)/2.0;

    return spiderman;
}

int main() {

    float average;

    average = getAverage(3.0, 4.0);

    printf("Average is %f\n",spider);

    return 0;
}