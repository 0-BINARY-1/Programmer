// Displaying the series pattern of : 1, 6, 11, 16,...,101.

#include<stdio.h>
int main()
{
    int i;
    printf("The series pattern is given below: \n");

    for (i = 1; i <= 101; i+=5) // Loop from 1 to 101 with step 5 because the difference between consecutive numbers in the series is 5
    {
        printf("  %d  ", i); // Print the current value of i that matches the condition.
    }
    return 0;
}