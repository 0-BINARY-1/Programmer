// Printing the series 5, 9, 13, 17, ..., 10th term.

#include<stdio.h>
int main()
{
    int i, s = 1;  // Initialize s to 1 because the first term of the series is 5 which is 1 + 4
    printf("The series pattern is given below: \n");

    while(i<11) // Loop until i is less than 11 to print the first 10 terms of the series
    {
        s = s + 4; // Increment s by 4 to get the next term in the series
        printf("  %d  ", s);
        i++;
    }
    return 0;
}