#include <stdio.h>

int main() 
{
    int n1, n2, Q, R;
    
    printf("Enter the first number: ");
    scanf("%d", &n1);
    
    printf("Enter the second number: ");
    scanf("%d", &n2);
    
    if (n2 == 0) // Check for division by zero
    {
        printf("Error: Division by zero!\n");
        return 1;
    }
    
    Q = n1 / n2; // Division operator gives the quotient
    R = n1 % n2; // Modulo operator gives the remainder
    
    printf("Quotient: %d\n", Q);
    printf("Remainder: %d\n", R);
    
    return 0; // Indicate successful program termination.
}