// Program to convert a binary number to decimal

#include <stdio.h>
int main() 
{
    int binary, decimal = 0, base = 1, LD; 
    /* binary = input binary number, decimal = output decimal number, 
    base = current base value (2^0, 2^1, ...), LD = last binary digit */

    printf("Enter a binary number: ");
    scanf("%d", &binary);

    // Converting binary to decimal

    while (binary > 0) 
    {
        LD = binary % 10;
        decimal = decimal + LD * base; 
        base = base * 2;          
        binary = binary / 10;      
    }

    printf("The decimal representation is: %d\n", decimal);

    return 0;
}