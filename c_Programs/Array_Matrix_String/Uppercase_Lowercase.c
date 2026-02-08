// Program to convert given string to uppercase and lowercase functions

#include <stdio.h>
#include <ctype.h> // For toupper and tolower functions
#include <string.h>

int main() {
    char str[100];
    int i;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';
    
    printf("\nIn Uppercase: ");
    for (i = 0; str[i]; i++) {
        printf("%c", toupper(str[i])); // Each letter at a time being converted to uppercase.
    }
    
    printf("\nIn lowercase: ");
    for (i = 0; str[i]; i++) {
        printf("%c", tolower(str[i])); // Each letter at a time being converted to lowercase.
    }
    printf("\n");
    
    return 0;
}
