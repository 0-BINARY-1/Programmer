// Program to check if a number is a palindrome or not.

#include <stdio.h>
int main() 
{
    int num, original, reversed = 0, digit; // num = input number, original = to use as copy of original number, reversed = to store reversed number, digit = current digit

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num; // Save the data in num, data is copied to original.

    // Reversing the number

    while (original != 0) 
    {
        digit = original % 10; // It keep the last digit only i.e., 456 % 10 = 6

        reversed = reversed * 10 + digit; 
            /*Adds the last digit to reversed number after shifting its digits left
             i.e., reversed = 0 * 10 + 6 = 6, then 6 * 10 + 5 = 65, then 65 * 10 + 4 = 654*/  

        original /= 10; // Remove the last digit
    }

    // Check if the original number and reversed number are the same
    if (num == reversed) {
        printf("%d is a palindrome number.\n", num);
    } else {
        printf("%d is not a palindrome number.\n", num);
    }

    return 0;
}