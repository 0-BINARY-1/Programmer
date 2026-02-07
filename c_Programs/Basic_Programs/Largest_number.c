#include<stdio.h>

int main()
{
    int A, B, C; // A, B, C are the three numbers
    
    printf("Enter three numbers : "); // Hit enter or spacebar after each number to mark as input.
    scanf("%d %d %d", &A, &B, &C);

    if (A >= B && A >= C) // Condition to check if A is the largest number
        printf("The largest number is: %d\n", A);

    else if (B >= A && B >= C) // Condition to check if B is the largest number
        printf("The largest number is: %d\n", B);

    else // Obviously C is the largest number if A and B are not the largest
        printf("The largest number is: %d\n", C);

    return 0;
}