// Program to take 3 employee details using nested structure with two sturctures named date of birth (dob) and employee.

#include <stdio.h>
struct DoB
{
    int day;
    int month;
    int year;
};
struct Employee
{
    char name[50];
    int id;
    struct DoB dob; // Nested structure
};
int main()
{
    struct Employee emp[3]; // declaring an array of structure named Employee
    int i;
    for(i=0;i<3;i++)
    {
        printf("Enter employee name %d: ", i+1);
        fgets(emp[i].name, sizeof(emp[i].name), stdin); // Read employee name

        printf("Enter employee ID: ");
        scanf("%d", &emp[i].id);

        printf("Enter employee date of birth (day month year): ");
        scanf("%d %d %d", &emp[i].dob.day, &emp[i].dob.month, &emp[i].dob.year); // Accessing nested structure members
        getchar(); // To consume the newline character left by scanf
    }
    // Displaying employee details
    for(i=0;i<3;i++)
    {
    printf("\nEmployee Details:\n");
    printf("Name of employee: %s", emp[i].name);
    printf("ID of employee: %d\n", emp[i].id);
    printf("Date of Birth of employee: %02d/%02d/%04d\n", emp[i].dob.day, emp[i].dob.month, emp[i].dob.year);
    }
    return 0;
}
