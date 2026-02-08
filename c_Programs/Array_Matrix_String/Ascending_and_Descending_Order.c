// Program to sort the given numbers in ascending and descending order.

#include <stdio.h>

int main()
{
    int a[50],n,i,j,t; // a of size 50 only because user will not enter more than 50 numbers manually.

    printf("Enter how many number you want to enter: ");
    scanf("%d",&n);
	printf("\nThe numbers are: ");
    for(i=0; i<n; i++) 
    {
        scanf("%d",&a[i]);
    }

    for(i=0; i<n-1; i++) // loop starts from 0 because we have to compare with element at 1 place more than it i.e. i+1.
    {
    for(j=i+1; j<n; j++) // loop starts from i+1 because we have to compare with element at 1 place less i.e. i.
        {
            if(a[i]>a[j]) // swapping the numbers if the condition is true for ascending order.
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }

    /* Instead of writing two separate loops for ascending and descending order,
    We can just print the array in reverse order for descending order as it is already sorted in ascending order.*/

    printf("\nAscending Order:");
    for(i=0;i<n;i++)
    {
    printf("%d ",a[i]);
    }

    printf("\n\nDescending Order:");
    for(i=n-1;i>=0;i--) 
    {
    printf("%d ",a[i]);
    }

    return 0;
}
