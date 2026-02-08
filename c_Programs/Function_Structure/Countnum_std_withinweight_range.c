#include <stdio.h>

int main()
{
    float w[5]; // weight array is float because weight can be a decimal number i.e 55.5 kg
    int i, Co;

    printf("Enter the weights of 5 students in kg: ");
    for(i=0;i<5;i++) 
    scanf("%f",&w[i]);
    Co = check(w); /* The value in m of check function is received by check(w) and 
                    assigned to Co in main function.*/
    printf("\nThe number of students in the weight range 50-60 kg = %d", Co);
}

int check(float w[]) // Here the passed array is catched as a pointer to the first element.
{
    int i,m=0;
    for(i=0;i<5;i++)
        if(w[i]>=50 && w[i]<=60) 
        m = m + 1;
    return m;
}