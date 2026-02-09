// Program to write and read integer from a file using putw() and getw() functions

#include <stdio.h>

int main() {
    FILE *fp;
    int num_write;
    int num_read;

    // Open file in write mode
    fp = fopen("num.txt", "w");

    // Write the integer entered by the user to the file
    printf("Enter a number to write to the file.\n");
    scanf("%d", &num_write);
    putw(num_write, fp);

    // Close file
    fclose(fp);

    // Open file in read mode
    fp = fopen("num.txt", "r");

    // Read integer from file
    num_read = getw(fp);

    // Display read value
    printf("\nResult of reading the number stored in the file: %d\n", num_read);

    // Close file
    fclose(fp);
    return 0;
}
