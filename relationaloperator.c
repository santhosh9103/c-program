#include <stdio.h>
int main()
{
    printf("\nOutput of 4==5 relational operator is %d", 4==5);
    int number1;
    int number2;
    int answer;
    scanf("%d %d",&number1,&number2);
    printf("\nenter the first number:%d",number1);
    printf("\nenter the secound number:%d",number2);
    printf("\nOutput of number1 > number2 is %d", number1 > number2);
    printf("\n\nOutput of number1 < number2 is %d", number1 < number2);
    printf("\n\nOutput of number1 != number2 is %d", number1 != number2);//! it means not equal tooooooooooooo
    printf("\n\nOutput of number1 >= number2 is %d", number1 >= number2);
    printf("\n\nOutput of number1 <= number2 is %d", number1 <= number2);
    answer=number1+number2;
    printf("\nsum the two number %d",answer);
    return 0;
}