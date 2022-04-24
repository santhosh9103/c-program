#include<stdio.h>
#include<stdlib.h>
int main(){
    int number;
    int counter = 1, result = 1;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    while(counter <= number)
    {
        result = result * counter;
        counter = counter + 1;
    }
    
    printf("\nFactorial of number %d is %d\n", number, result);
}