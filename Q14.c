#include <stdio.h>

int main()
{
    int n;
    printf("Enter how many numbers: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter the numbers:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int c = 0;

    for (int i = 0; i < n; i++)
    {
        int x = a[i], p = 1;
        if (x <= 1)
            p = 0;
        else
        {
            for (int j = 2; j <= x / 2; j++)
            {
                if (x % j == 0)
                {
                    p = 0;
                    break;
                }
            }
        }
        if (p == 1)
            c++;
    }

    printf("Total prime numbers: %d", c);

    return 0;
}
