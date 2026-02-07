// Using only two numbers for all operations.

#include<stdio.h>

int main()
{
    int a, b, choice;
    char ch, cha; // a and b are the two numbers, choice is the variable to store user's choice of operation

    again: // Label for goto statement in case user wants to perform another operation on new numbers

    printf("Enter first numbers: ");
    scanf("%d", &a);
    printf("Enter second numbers: ");
    scanf("%d", &b);

    printf("\nChoose the suitable operation you want to perform: \n"); // Displaying the options for the user to choose from

    choice:// Label for goto statement in case of invalid choice

    printf("\n1 For Addition\n");
    printf("2 For Subtraction\n");
    printf("3 For Multiplication\n");

    printf("\nYour choice: ");
    scanf("%d", &choice); // Taking input of user's choice for the operation they want to perform

    switch (choice)
    {
        case 1: // If user chooses addition
            printf("\nThe sum of %d and %d is: %d\n", a, b, a + b);
            break;

        case 2: // If user chooses subtraction
            printf("\nThe difference of %d and %d is: %d\n", a, b, a - b);
            break;

        case 3: // If user chooses multiplication
            printf("\nThe product of %d and %d is: %d\n", a, b, a * b);
            break;

        default: // If user enters an invalid choice
            printf("\nInvalid choice! Please choose 1, 2 or 3.\n");
            goto choice; // Go back to the choice input if the user enters an invalid choice
	}
    printf("\nWould you like to perform another operation? (Y/N): ");
    scanf(" %c", &ch);
    if (ch == 'Y' || ch == 'y')
    {
        printf("\nWould you like to perform operation on new numbers? (Y/N): \n");
        scanf(" %c", &cha);
        if(cha == 'Y' || cha == 'y')
            goto again;
        else
            goto choice;
    }
        
     else
        printf("\nThank you for using the calculator!\n");
}