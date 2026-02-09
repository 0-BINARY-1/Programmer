// Program to add two distances in inch-feet system using structure

#include <stdio.h>
struct Distance
{
    int feet;
    float inch;
};

int main()
{

    struct Distance d1, d2, sum; // declaring three variables for the structure named Distance

    printf("Enter 1st distance (feet inch): ");
    scanf("%d %f", &d1.feet, &d1.inch);

    printf("\nEnter 2nd distance (feet inch): ");
    scanf("%d %f", &d2.feet, &d2.inch);

    // Adding inches and feet separately
    sum.feet = d1.feet + d2.feet;
    sum.inch = d1.inch + d2.inch;

    // Converting inches to feet if inches are greater than or equal to 12
    if (sum.inch >= 12)
    {
        sum.feet += (int)(sum.inch / 12);
        sum.inch = (int)sum.inch % 12;
    }

    printf("\nSum of distances: %d feet %.2f inches\n", sum.feet, sum.inch);

    return 0;
}
