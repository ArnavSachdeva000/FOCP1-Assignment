#include <stdio.h>

int main()
{
    int a, i, x = 0;
    printf("Enter number of students: ");
    scanf("%d", &a);

    int marks[a];
    char name[a][50];

    for (i = 0; i < a; i++)
    {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", &name[i]);
        printf("Enter marks of %s: ", name[i]);
        scanf("%d", &marks[i]);
    }

    printf("\nStudents who scored 99 are:\n");
    for (i = 0; i < a; i++)
    {
        if (marks[i] == 99)
        {
            printf("%s\n", name[i]);
            x++;
        }
    }

    printf("Total students who scored 99 = %d", x);

    return 0;
}
