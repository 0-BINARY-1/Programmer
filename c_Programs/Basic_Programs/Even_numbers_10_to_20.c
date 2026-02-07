#include<stdio.h>

int main()
{
    int i;
    //f or (i = 10; i <=20; i++) Loop from 10 to 20
    printf("Even numbers from 10 to 20 are: ");
    for (i=1; i<=20; i++) // Loop from 1 to 20 
    {
        //if (i % 2 == 0) this is also ok if we start the loop from 10

        if(i>= 10 && i % 2 == 0) // Check if the number is greater than or equal to 10 and even
        {
            printf("\n%d", i);
        }
    }
}