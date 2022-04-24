#include <stdio.h>

int main() {
    
    int row = 0, counter = 0;
    
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    
    for(int i=0; i<row; i++)
    {
        counter = 0; //will be used to display number of * on each row
        while(counter <= i)
        {
            printf("* ");
            counter++;
        }
        
        printf("\n");   //Add a new line after each row
    }
    return 0;
}