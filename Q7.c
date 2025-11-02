#include <stdio.h>

int main()
{
    int a, b, c, d, e;
    printf("Enter number of rows: ");
    scanf("%d", &a);

    for (b = 1; b <= a; b++)
    {
        for (c = 1; c <= b; c++)
        {
            printf("%d", (c + 1) % 2);
        }
        e = 2 * (a - b);
        for (d = 1; d <= e; d++)
        {
            printf(" ");
        }
        for (c = 1; c <= b; c++)
        {
            printf("%d", (c + 1) % 2);
        }
        printf("\n");
    }

    return 0;
}
