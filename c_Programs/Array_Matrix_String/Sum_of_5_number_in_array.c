// Program to add 5 numbers using concept of array to take input from user.

#include <stdio.h>
int main() 
{
    int a[5], i, s=0; // s = 0 to prevent garbage value in sum variable.

    printf("Enter 5 numbers: \n");
    for(i=0;i<5;i++) // Loop to take input from user and calculate sum at the same time.
    {
        scanf("%d",&a[i]); 
        s += a[i];
    }
    printf("\nSum = %d",s);
    return 0;
}
