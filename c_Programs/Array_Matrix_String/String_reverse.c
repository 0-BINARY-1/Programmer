// Program to take a string as input from user and display it in reverse order.

#include <stdio.h> // Include stdio.h helps to use input/output functions like printf(), scanf(), etc.
#include <string.h> // Include string.h helps to use various string functions like strlen(), strcspn(), etc.

int main() 
{
    char str[100]; // size of str is 100 characters, which means it can hold a string of up to 99 characters plus the null terminator '\0'.
    int i, len = 0;

    // not using &str because str is already an array and it represent characters, and its name represents the address of the first element.
    printf("Enter a string: ");
    scanf("%s", str);
    
    // strlen() function returns the length of the string excluding the null terminator '\0'.
    len = strlen(str); 
    printf("\nLength of the string: %d\n", len);

    // Printing the string in reverse form.

    printf("\nReversed string:  ");
    for (i = len - 1; i >= 0; i--) 
    {
        printf("%c", str[i]);
    }

    return 0;
}
