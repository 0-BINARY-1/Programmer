// Program to count the number of elements in an array that are between 20 and 25 (inclusive).

#include <stdio.h>
int main()
{
    int age[10],i,c=0;
    
    printf("Enter ages of 10 students: \n");
    for(i=0; i<10; i++)
    {
        scanf("%d",&age[i]);
        if(age[i]>=20 && age[i]<=25) // No curly braces needed as there is only one statement in if block.
        c++;
    }
    printf("\nCount = %d",c);
    return 0;
}
