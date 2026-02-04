// Finding the simple interest using input principal, rate and time from user
#include<stdio.h>
int main() {
    float principal, rate, time, SI; // P,T,R can be float values
    printf("Enter principal amount: ");
    scanf("%f", &principal);
    printf("Enter rate of interest: ");
    scanf("%f", &rate);
    printf("Enter time in years: ");
    scanf("%f", &time);
    SI = (principal * rate * time) / 100;
    printf("The Simple Interest is: %.2f\n", SI); // formatting to 2 decimal places
    return 0;
}
