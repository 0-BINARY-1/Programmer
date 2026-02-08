// Program to calculate and display the value of y raised to x (z=y^x).

#include <stdio.h>
#include <math.h> // math.h is included to use the pow function for calculating the power of a number.

int main() {
    double y, x, z; // double data type is used to handle real numbers

    printf("Enter the value of y: ");
    scanf("%lf", &y); // lf stands for "long float".
    printf("Enter the value of x: ");
    scanf("%lf", &x);

    // Calculating z = y^x

    z = pow(y, x); // y is base and x is exponent. The pow function is used to calculate the power of a number.

    // Display the result
    printf("The value of y raised to x (z = y^x) is: %.2lf\n", z);

    return 0;
}