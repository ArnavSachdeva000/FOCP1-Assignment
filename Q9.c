#include <stdio.h>

int main()
{
    int a[100], b, i, x = 0;

    printf("Enter number of elements: ");
    scanf("%d", &b);

    printf("Enter the scores:\n");
    for (i = 0; i < b; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < b; i++)
    {
        if (a[i] == 99)
        {
            printf("First occurrence of 99 is at position %d\n", i + 1);
            x = 1;
            break;
        }
    }

    if (x == 0)
    {
        printf("Score 99 not found in the array.\n");
    }

    return 0;
}
