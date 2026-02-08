// Program to sort students on the basis of roll number. Structure concept used.

#include <stdio.h>
struct student
{
    int rollno;
    char name[20];
};

int main()
{
    struct student s[5], temp;  // temp to hold data for swapping during sorting
    int i, j;

    printf("Enter the roll number and name of 5 students: \n");

    printf("\nRollNo\t|\tName\n");
    printf("-------------------\n");
    for(i=0;i<5;i++)
    
        scanf("%d%s", &s[i].rollno, s[i].name);

    // Sorting the students based on roll number using bubble sort algorithm
    for(i=0;i<4;i++)
    {
        for(j=0;j<4-i;j++)
        {
            if(s[j].rollno > s[j+1].rollno)
            {
                // Swapping the students details
                temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }

    printf("\nStudents sorted by roll number:\n");
    printf("\nRollNo\t|\tName\n");
    printf("-------------------\n");
    for(i=0;i<5;i++)
        printf("\n%d\t|\t%s\n", s[i].rollno, s[i].name);

    return 0;
}
