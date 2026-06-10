#include <stdio.h>

struct Student
{
    char name[50];
    int roll;
};

int main()
{
    struct Student students[3];

    for(int i = 0; i < 3; i++)
    {
        printf("\nEnter details for Student %d\n", i + 1);

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Roll Number: ");
        scanf("%d", &students[i].roll);
    }

    printf("\n===== STUDENT RECORDS =====\n");

    for(int i = 0; i < 3; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].roll);
    }

    return 0;
}