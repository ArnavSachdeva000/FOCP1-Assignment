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

    int x = a[n - 1];

    for (int i = n - 1; i > 0; i--)
    {
        a[i] = a[i - 1];
    }

    a[0] = x;

    printf("Array after rotation: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
