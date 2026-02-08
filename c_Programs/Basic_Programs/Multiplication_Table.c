// Display the multiplication table from 1 to 10 for a given number.
#include<stdio.h>
int main()
{
    int n, i;

    printf("Enter a positive integer: ");
    scanf("%d", &n); // Taking the value of n from user as input

    printf("\nMultiplication table of %d is given below:\n\n", n);
    for (i = 1; i <= 10; i++) // Loop from 1 to 10
    {
        printf("%d x %d = %d\n", n, i, n * i); // Print the multiplication result
    }
    return 0;
}
