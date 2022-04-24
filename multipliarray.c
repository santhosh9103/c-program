#include <stdio.h>

int main() {
    
    int age[10];
    
    for(int i=0; i<10; i++)
    {
        printf("\nEnter number for index %d: ", i);
        scanf("%d", &age[i]);
    }
    
    for(int i=0; i<10; i++)
    {
        printf("\nValue of age[%d] is %d", i, age[i]);
    }
    return 0;
}