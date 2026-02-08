// Program to calculate and display factorial of N.

#include <stdio.h>
int main() 
{
    int i, N, F = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &N); // %d is used for reading an integer value.

    // Check if the input is negative.
    if (N < 0) 
    {
        printf("Error! Factorial of a negative number doesn't exist.\n");
    }
    else 
    {
        for (i = 1; i <= N; i++) 
        {
            F = F * i;
        }
        printf("Factorial of %d = %d\n", N, F);
    }
    
    return 0;
}
