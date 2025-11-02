#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int x = 0;
    printf("Duplicate elements: ");

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                int y = 0;
                for (int k = 0; k < i; k++)
                {
                    if (a[k] == a[i])
                    {
                        y = 1;
                        break;
                    }
                }
                if (!y)
                {
                    printf("%d ", a[i]);
                    x = 1;
                }
                break;
            }
        }
    }

    if (!x)
        printf("-1");

    return 0;
}
