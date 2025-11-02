#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of scores: ");
    scanf("%d", &n);

    int m[n];
    printf("Enter the scores:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &m[i]);
    }

    int max = m[0];
    int min = m[0];

    for (int i = 1; i < n; i++)
    {
        if (m[i] > max)
        {
            max = m[i];
        }
        if (m[i] < min)
        {
            min = m[i];
        }
    }

    printf("\nHighest score: %d", max);
    printf("\nLowest score: %d", min);

    return 0;
}
