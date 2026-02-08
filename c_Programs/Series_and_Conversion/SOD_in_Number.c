// Program to do sum of digits of a number

#include <stdio.h>
int main() 
{
    int num, sum = 0, digit; // number = input number, sum = sum of digits, digit = current digit

    printf("Enter a number with at least two digits: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10; // It keep the last digit only i.e., 456 % 10 = 6
        sum += digit;        // Adds the last digit from digit to sum i.e., sum = 0 + 6 = 6 
        num /= 10;       // Remove the last digit i.e., 456 / 10 = 45
    }

    printf("The sum of digits is: %d\n", sum);

    return 0;
}