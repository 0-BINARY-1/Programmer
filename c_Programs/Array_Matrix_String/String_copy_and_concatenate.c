// Program to copy and concatenate strings in C

#include <stdio.h>
#include <string.h>

int main() 
{
    char str1[100], str2[100], str3[200];

    // Input first string
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin); // fgets is used to read a line of text, including spaces (string1, sizeof string1, and standard input)
    
    str1[strcspn(str1, "\n")] = '\0'; // Removed newline character

    // Input second string
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin); 

    str2[strcspn(str2, "\n")] = '\0'; // strcspn is string count span which count the number of characters until the match is found.

    
    strcpy(str3, str1); // Copy str1 to str3
    strcpy(str1,str2);
    strcpy(str2,str3);
    printf("\nAfter copying the first string consist: %s\n", str1);
    printf("\nAfter copying the second string consist: %s\n", str2);

    
    strcat(str3, " ");
    strcat(str3, str1);  // Concatenate str2 to str3 as str3 already contains str1
    printf("\nConcatenated string: %s\n", str3);

    return 0;
}
