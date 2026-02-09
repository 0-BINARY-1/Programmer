// Program to write and read binary data to and from file using fwrite and fread funciton in C prgramming

#include <stdio.h>
int main() {
    FILE *fp;
    int num_write, num_read;

    // Open file in binary write mode
    fp = fopen("data.bin", "wb");

    // Write an integer to the file
    printf("\nEnter a number to write to the file: ");
    scanf("%d", &num_write);

    fwrite(&num_write, sizeof(int), 1, fp);

    fclose(fp);

    // Open file in read mode
    fp = fopen("data.bin", "rb");

    // Read integer from file
    fread(&num_read, sizeof(int), 1, fp);

    // Display read value
    printf("\nResult of reading the number stored in the file: %d\n", num_read);

    fclose(fp);
    
    return 0;
}