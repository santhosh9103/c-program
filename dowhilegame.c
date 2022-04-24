#include <stdio.h>

int main() {
    
    int number = 0;
    
    do
    {
        printf("\nEnter a number: ");
        scanf("%d", &number);
    }while(number != 20);
    
    return 0;
}