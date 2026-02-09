// Program to write and read successive records in a file using structure variable.

#include <stdio.h>
struct stu 
{
    int rollNo;
    char name[20];
    float percent;
};
int main() 
{
    FILE *fp;
    struct stu s[2];
    int i;

    // Open file in write mode
    fp = fopen("students.txt", "w");

    // Input and write 2 student records
    printf("Enter roll, name, percentage for 2 students:\n");

    for(i = 0; i < 2; i++) 
    {
        printf("\nStudent roll number %d: ", i + 1);
        scanf("%d", &s[i].rollNo);
        printf("Student name %d: ", i + 1);
        scanf("%s", s[i].name);
        printf("Student percentage %d: ", i + 1);
        scanf("%f", &s[i].percent);

        fprintf(fp, "%d %s %f\n", s[i].rollNo, s[i].name, s[i].percent);
    }

    fclose(fp);

    // Open file in read mode
    fp = fopen("students.txt", "r");

    printf("\nStudent Records from File:\n");

    printf("\nRoll No.\t|\t Name\t| Percentage\n");
    
    printf("------------------------------------------\n");
    
    // Read and display records
    while(fscanf(fp, "%d %s %f", &s[i].rollNo, s[i].name, &s[i].percent) != EOF) // Reading the inserted data from file until end of file (EOF) is reached using fscanf function
    {
        printf("%d\t\t|\t %s\t|\t %.2f\n", s[i].rollNo, s[i].name, s[i].percent);
    }

    fclose(fp);

    return 0;
}
