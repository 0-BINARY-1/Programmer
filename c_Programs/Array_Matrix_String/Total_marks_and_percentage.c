// Assume each subject is of 100 marks, so total marks will be 500.

#include<stdio.h>

int main()
{
    int i; // Loop variable
    float M[5], total = 0, P; // M is the array to store marks of 5 subjects, total is the sum of marks, P is the percentage and i is the loop variable.

    printf("Enter the marks of 5 subjects: ");
    for(i = 1; i<=5; i++) // Loop to take input of marks for 5 subjects
    {
        scanf("%f", &M[i]);
    }
    for(i = 1; i<=5; i++) // Loop to calculate total marks
    {
         total = total + M[i];
    }
    P = (total/500)*100;  // Percentage formula = (Total marks obtained / Total marks) * 100

    printf("Total marks: %.2f\n", total); // Print total marks with 2 decimal places
    printf("Percentage: %.2f%%\n", P); // Print percentage with 2 decimal places and a percentage sign
    return 0;
}