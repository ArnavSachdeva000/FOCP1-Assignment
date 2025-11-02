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

    printf("Array before deletion:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    int x;
    printf("\nEnter position to delete (1 for front, %d for end, or middle): ", n);
    scanf("%d", &x);

    for (int i = x - 1; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }
    n--;

    printf("Array after deletion:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
