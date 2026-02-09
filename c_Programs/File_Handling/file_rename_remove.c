// Program to rename and remove a file in C programming

/*  Simple way.

#include <stdio.h>
int main(){
    rename("old.txt","new.txt");
    remove("new.txt");
}

*/

#include <stdio.h>

int main() {
    int rn, rm;


    // Rename here (char.txt file should exist in the directory for the program to work.)
    rn = rename("char.txt", "newchar.txt");

    if(rn == 0)
        printf("File renamed successfully.\n");
    else
        printf("Error renaming file.\n");

    // Delete the renamed file
    rm = remove("num.txt");
    if(rm == 0)
        printf("File deleted successfully.\n");
    else
        printf("Error deleting file.\n");

    return 0;
}

