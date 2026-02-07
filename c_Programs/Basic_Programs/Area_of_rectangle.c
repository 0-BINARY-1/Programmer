#include<stdio.h>

int main()
{
    int l , b , A; // l = length, b = breadth, A = area
    printf("Enter the length of the rectangle: ");
    scanf("%d", &l);
    printf("Enter the breadth of the rectangle: ");
    scanf("%d", &b);

    A = l * b; // Area of rectangle = length * breadth
    
    printf("The area of the rectangle is: %d\n", A);
    return 0;
}