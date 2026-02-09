/* Program to add two numbers using pointers

How pointers work in this program:

n = 5;
&n = 5000
ptr = &n = 5000
*ptr = *&n = *5000 = 5 

*/

#include <stdio.h>
int main() 
{
    int num1, num2, sum;
    int *ptr1, *ptr2, *sum_ptr; // Pointers to hold the addresses of num1 and num2

    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Assign pointers to the numbers means address of num1 and num2 is stored in ptr1 and ptr2 respectively, not the value of num1 and num2
    ptr1 = &num1;  // 
    ptr2 = &num2;

    // What actually pointer stores. Neglect this part if you understand the concept of pointer. This is just to show what actually pointer stores in it.

    printf("\nAddress of num1: %p\n", (void*)ptr1);
    printf("\nAddress of num2: %p\n", (void*)ptr2);

    // Calculate the sum using pointers and dereferencing

    sum = *ptr1 + *ptr2;

    // Output the result
    printf("\nThe sum of %d and %d is: %d\n", num1, num2, sum);

    return 0;
}

