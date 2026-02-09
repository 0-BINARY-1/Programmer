/* Program to write and read a character from a file using putc() and getc() functions

w = write mode
r = read mode
a = append mode
r+ = read and write mode
w+ = write and read mode
a+ = append and read mode

*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char ch;

    // Open file in write mode
    fp = fopen("char.txt", "w");

    // Take a character as input from user
    printf(" Enter a character: ");

    // Reading a character from user 
    ch = getchar(); 

    // Write the character to file
    putc(ch, fp);

    // Close file after writing is done before reading
    fclose(fp);

    // Open file in read mode
    fp = fopen("char.txt", "r");

    // Read character from file using getc() function
    ch = getc(fp);

    // Display the character read
    printf("\nCharacter read from file: %c\n", ch);

    // Close file after reading
    fclose(fp);

    return 0;
}
