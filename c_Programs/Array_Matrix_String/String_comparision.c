// Program to compare two inserted string

#include <stdio.h>
#include <string.h>

int main() 
{
    char str1[100], str2[100];
    int result;

    // Input first string
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // Removed newline character

    // Input second string
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; // Removed newline character after locating the character with str count span (strcspn function).

    // Comparing the two strings
    result = strcmp(str1, str2);

    if(result == 0) {
        printf("\nThe strings are equal so have same location in the dictonary.\n");
    } else if(result < 0) {
        printf("\n%s comes before the %s in the dictonary.\n", str1, str2);
    } else {
        printf("\n%s comes after the %s in the dictonary.\n", str1, str2);
    }

    return 0;
}

