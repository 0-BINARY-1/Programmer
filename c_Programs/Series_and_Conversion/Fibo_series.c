// Program to generate Fibonacci series up to n terms

#include <stdio.h>
int main() 
{
    int n, i, F = 0, S = 1, N; // n = number of terms, F = first term, S = second term, N = next term, i = loop counter

    printf("Enter the number of terms upto which you want to generate: ");
    scanf("%d", &n);

    printf("\nThe fibonacci Series is: ");

    for (i = 0; i <= n; i++) {
        if (i <= 1) {
            N = i;
        }
        else 
        {
            N = F + S;
            F = S;
            S = N;
        }
        printf("%d ", N);
    }
    printf("\n");

    return 0;
}