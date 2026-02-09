// Program to write and read student records in a file using fprintf and fscanf functions.

#include <stdio.h>

int main() 
{
    FILE *fp;
    int rollNo, i;
    char name[20];
    float percent;

    fp = fopen("student.txt", "w");

    // Input and write 5 student records
    printf("Enter roll, name, percentage for 5 students:\n");
    for(i = 0; i < 5; i++) 
    {
        printf("\nStudent roll number %d: ", i + 1);
        scanf("%d", &rollNo);
        printf("Student name %d: ", i + 1);
        scanf("%s", name);
        printf("Student percentage %d: ", i + 1);
        scanf("%f", &percent);

        fprintf(fp, "%d %s %f\n", rollNo, name, percent); // Write record to file all data at once using fprintf function
    }

    fclose(fp);


    fp = fopen("student.txt", "r");

    printf("\nStudent Records from File:\n");

    printf("\nRoll No.\t|\t Name\t\t|\t Percentage\n");
    
    printf("------------------------------------------");
    
    // Read and display records
    while(fscanf(fp, "%d %s %f", &rollNo, name, &percent) != EOF) // Reading the inserted data from file until end of file (EOF) is reached using fscanf function
    {
        printf("%d\t|\t %s\t|\t %.2f\n", rollNo, name, percent);
    }

    fclose(fp);

    return 0;
}
