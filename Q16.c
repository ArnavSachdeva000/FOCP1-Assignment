#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[100];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Array before insertion:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    int x, y;
    printf("\nEnter position to insert (1 for front, %d for end, or middle): ", n + 1);
    scanf("%d", &x);
    printf("Enter value to insert: ");
    scanf("%d", &y);

    for (int i = n; i >= x; i--)
    {
        a[i] = a[i - 1];
    }
    a[x - 1] = y;
    n++;

    printf("Array after insertion:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
