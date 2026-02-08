// Program to display the given pattern. 1 12 123 1234 upto N.

#include <stdio.h>
int main() 
{
    int i, j,N;

    printf("Enter the number of rows you want to display: ");
    scanf("%d", &N);

   // Using nested loops to generate the pattern

    for (i = 1; i <= N; ++i)  // Loop for the row
    {
        
        for (j = 1; j <= i; ++j) // Loop to print numbers from 1 to i
        {
            printf("%d", j); // No next line until the all numbers in the current row are printed
        }
        printf("\n"); // Move to the next line after printing each row
    }
    
    return 0;
}