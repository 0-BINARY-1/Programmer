// Program to list the entered strings in alphabetical order

#include <stdio.h>
#include <string.h>

int main() {
    char str[100][100], temp[100];
    int i, j, n;

    printf("Enter the number of strings: ");
    scanf("%d", &n);

    //  Entering the n strings using a loop

    printf("Enter %d strings:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%s", str[i]);
    }

    // Sorting the strings in alphabetical order by comparing them using strcmp() function and swapping them if they are in the wrong order using strcpy() function

    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++) // n - i - 1 because the last i elements are already in place
        {
            if (strcmp(str[j], str[j + 1]) > 0) 
            {
                // Swapping str[j] and str[j + 1]
                strcpy(temp, str[j]);
                strcpy(str[j], str[j + 1]);
                strcpy(str[j + 1], temp);
            }
        }
    }

    printf("\nStrings in alphabetical order:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", str[i]);
    }

    return 0;
}