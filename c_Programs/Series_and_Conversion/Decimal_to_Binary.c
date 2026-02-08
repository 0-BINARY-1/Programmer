// Program to convert a decimal number to binary

#include <stdio.h>
int main() 
{
    int num, binary[32], i = 0; // num = input number, binary = array to store binary digits with size 32 bit, i = loop counter

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    // Convert decimal to binary
    while (num > 0) {
        binary[i] = num % 2; // Store the remainder (binary digit)
        num /= 2;            // Divide the number by 2 for the next iteration
        i++;
    }

    printf("\nThe binary representation is: ");
    // Print the binary digits in reverse order to get the correct binary format
    // In array the index starts from 0 so we do i = i - 1 to point to the last filled index
    for (i = i - 1; i >= 0; i--)  
    {
        printf("%d", binary[i]);
    }
    printf("\n");

    return 0;
}