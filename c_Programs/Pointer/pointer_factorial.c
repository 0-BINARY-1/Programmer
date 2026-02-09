// Program to calculate factorial using pointer

#include <stdio.h>

int main() 
{
    int num, fact = 1, i;
    int *ptr;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Pointer stores address of number
    ptr = &num;

    // Calculate factorial using pointer value

    for(i = 1; i <= *ptr; i++) // end limit is *ptr which is value of num
    {
        fact = fact * i;
    }

    // Display result
    printf("Factorial = %d", fact);

    return 0;
}
