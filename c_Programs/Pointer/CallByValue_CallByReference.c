// Program to demonstrate call by value and call by reference in C.

#include <stdio.h>
int main() 
{
    int a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("\nEnter second number: ");
    scanf("%d", &b);

    // Call by value (no change in original values) a = 2 and b = 3
    Value(a, b);
    printf("\nResult when called by value: %d %d\n", a, b);

    // Call by reference (changes original values) a = 3 and b = 2
    Reference(&a, &b);
    printf("\nResult when called by reference: %d %d", a, b);

    return 0;
}
// Call by value (no change in original values)
void Value(int num1, int num2) 
{
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
}

// Call by reference (changes original values)
void Reference(int *num1, int *num2) 
{
    int temp;
    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}
