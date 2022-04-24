#include <stdio.h>

void factorial()
{
    int number;
    int counter = 1, result = 1;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    while(counter <= number)
    {
        result = result * counter;
        counter = counter ++;
    }
    
    printf("\nFactorial of number %d is %d\n", number, result);
}

int main() {
    
    factorial();
    return 0;
}