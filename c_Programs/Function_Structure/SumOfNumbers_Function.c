// Program to input 5 numbers and calculate their sum using array and separate function.

#include <stdio.h>

int main()
{
    int a[5],i, S;

    printf("Enter 5 numbers you want to add: ");
    for(i=0;i<5;i++) // no curly braces needed as there is only one statement in the loop
    scanf("%d",&a[i]);
    S = sum(a); // function call
    printf("Sum of all the elements is = %d", S);
}

int sum(int a[])
{
    int i,s=0;
    for(i=0;i<5;i++) 
	s+=a[i];
    return s;
}