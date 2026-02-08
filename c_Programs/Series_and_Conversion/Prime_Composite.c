// Program to check the number is prime or composite

#include <stdio.h>
int main() {
    int num, i, indicator = 0; // indicator to indicate if number is composite or prime

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("%d is neither prime nor composite.\n", num);
        return 0;
    }

    /* prime number is divisible only by 1 and itself so we check till 'num/2' i.e. num = 11 then we check from
     2 to 5 because if 11 is divisible by any number greater than 5 then it must be divisible by a number less than 5 */
    // A number can't have factors greater than its half (except itself), so we only need to check up to num/2.

    for (i = 2; i <= num / 2; ++i) 
    {
        if (num % i == 0) 
        {
            indicator = 1; // incicator set to 1 if the number is composite
            break; 
            /* break the loop if we find any factor, no need to check further cause there will 
            be more than 2 factors which is not possible for a prime number. */
        }
    }

    if (indicator == 0)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is a composite number.\n", num);

    return 0;
}