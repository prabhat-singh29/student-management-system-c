#include <stdio.h>

struct Student
{
    char name[50];
    int roll;
};

struct Student students[100];
int count = 0;

int main()
{
    int choice;

    while(1)
    {

    printf("\n===== STUDENT MANAGEMENT SYSTEM =====\n");
    printf("1. Add Student\n");
    printf("2. Display Students\n");
    printf("3. Search Student\n");
    printf("4. Exit\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    if(choice == 1)
    {
        printf("Enter Student Name: ");
        scanf("%s", students[count].name);

        printf("Enter Student Roll Number: ");
        scanf("%d", &students[count].roll);

        count++;

        printf("\nStudent Added Successfully!\n");
    }
    else if(choice == 2)
{
    if(count == 0)
    {
        printf("No Students Found!\n");
    }
    else
    {
        printf("\n===== STUDENT RECORDS =====\n");

        for(int i = 0; i < count; i++)
        {
            printf("\nStudent %d\n", i + 1);
            printf("Name: %s\n", students[i].name);
            printf("Roll Number: %d\n", students[i].roll);
        }
    }
}
   else if(choice == 3)
{
    int searchRoll;
    int found = 0;

    printf("Enter Roll Number to Search: ");
    scanf("%d", &searchRoll);

    for(int i = 0; i < count; i++)
    {
        if(students[i].roll == searchRoll)
        {
            printf("\nStudent Found!\n");
            printf("Name: %s\n", students[i].name);
            printf("Roll Number: %d\n", students[i].roll);

            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Student Not Found!\n");
    }
}
    else if(choice == 4)
    {
        printf("Exiting...\n");
        break;
    }
    else
    {
        printf("Invalid Choice\n");
    }

    }
    return 0;
}