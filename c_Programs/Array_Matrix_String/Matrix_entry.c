// Program to input and display the elements of a 3x3 matrix

#include <stdio.h>

int main()
{
    int a[3][3],i,j;

    printf("Enter the elements of the 3x3 matrix:\n");

    // Inputting the matrix with the help of nested for loop
    for(i=0;i<3;i++) // Outer loop for rows
    {
        for(j=0;j<3;j++) // Inner loop for columns
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nThe matrix you entered is:\n");
    
    // Displaying the matrix with the help of nested for loop
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
