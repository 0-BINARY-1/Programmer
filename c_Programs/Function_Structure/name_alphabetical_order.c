// Program to sort names in alphabetical order using structures in C.

#include <stdio.h>
#include <string.h>

// Structure to store employee name and address
struct employee 
{
    char name[20];
    char address[50];
};

int main() 
{
    struct employee emp[5], temp;
    int i, j;

    // Input: read 5 names and addresses
    printf("Enter name and address for 5 employees:\n");

    for(i = 0; i < 5; i++) 
    {
        printf("\nEmployee name %d: ", i + 1);
        scanf("%s", emp[i].name);
        printf("Employee address %d: ", i + 1);
        scanf("%s", emp[i].address);
    }

    // Sorting employees by name (alphabetical order)

    for(i = 0; i < 4; i++) {
        for(j = i + 1; j < 5; j++) 
        {
            if(strcmp(emp[i].name, emp[j].name) > 0) 
            {
                temp = emp[i];
                emp[i] = emp[j];
                emp[j] = temp;
            }
        }
    }

    // Display sorted list
    printf("\nSorted employee list:\n");
    printf("\nName\t|\tAddress\n");
    printf("---------------------\n");
    for(i = 0; i < 5; i++) 
    {
        printf("%s\t|\t%s\n", emp[i].name, emp[i].address);
    }

    return 0;
}
