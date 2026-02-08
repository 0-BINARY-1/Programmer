// Program to find the cumulative sum and multiplication using recursion conept.
// Cumulative multiplication is also known as factorial of a number.
#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number whose cumulative sum and multiplication is to be calculated:  ");
    scanf("%d",&n);

    // calling and printing the result is same line of code.
    printf("The result of cumulative sum is = %d\n",sum(n));
    printf("\nThe result of cumulative multiplication is = %d\n",mul(n)); 
}

int sum(int n)
{
    if(n==1) // Base condition to stop the recursive loop.
    return 1;
    return n + sum(n-1); // sum function is calling itself.
}
int mul(int n)
{
    if(n==1) // Base condition to stop the recursive loop.
    return 1;
    return n * mul(n-1); // mul function is calling itself.
}

