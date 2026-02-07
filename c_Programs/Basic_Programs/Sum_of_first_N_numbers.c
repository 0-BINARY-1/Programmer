#include<stdio.h>

int main()
{
    int n, i, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n); // Read the value of n from user input

    for (i = 1; i <= n; i++) // Loop from 1 to n
    {
        sum += i; // Your can also write (sum = sum + i;)
    }

    printf("The sum of the first %d numbers is: %d", n, sum);
    return 0;
}