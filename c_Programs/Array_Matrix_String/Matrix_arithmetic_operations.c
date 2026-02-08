// Program to add, subtract and multiply two 3x3 matrices

#include <stdio.h>

int main()
{
    int a[3][3], b[3][3], sum[3][3], diff[3][3], prod[3][3];
    int i,j,k;

    // Inputting the first matrix

    printf("Enter the elements of first 3x3 matrix:\n");
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            scanf("%d",&a[i][j]);

    // Inputting the second matrix

    printf("\nEnter the elements of second 3x3 matrix:\n");
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            scanf("%d",&b[i][j]);

    // Adding the two matrices

    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            sum[i][j] = a[i][j] + b[i][j];

    // Subtracting the two matrices

    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            diff[i][j] = a[i][j] - b[i][j];

    // Multiplying the two matrices

    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        {
            prod[i][j] = 0;
            for(k=0;k<3;k++)
                prod[i][j] += a[i][k] * b[k][j];
        }

    // Displaying the results

    printf("\nSum of the two matrices:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%d ",sum[i][j]);
        printf("\n"); // New line after each row
    }

    printf("\nDifference of the two matrices:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%d ",diff[i][j]);
        printf("\n"); // New line after each row
    }

    printf("\nProduct of the two matrices:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            printf("%d ",prod[i][j]);
        printf("\n"); // New line after each row
    }

    return 0;
}