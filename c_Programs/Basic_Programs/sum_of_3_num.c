#include<stdio.h>
int main() {
    int num1, num2, num3, sum;
    
    // Asking user for input
    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    // Calculating sum
    sum = num1 + num2 + num3;
    
    // Displaying the result
    printf("The sum of %d, %d and %d is: %d\n", num1, num2, num3, sum);
    
    return 0; // Indicating successful completion and exit of the program
}