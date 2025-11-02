#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of scores: ");
    scanf("%d", &n);

    int scores[n], even_array[n], odd_array[n];
    int a = 0, b = 0;

    printf("Enter the scores:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &scores[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (scores[i] % 2 == 0)
        {
            even_array[a] = scores[i];
            a++;
        }
        else
        {
            odd_array[b] = scores[i];
            b++;
        }
    }

    printf("\nEven numbers: ");
    for (int i = 0; i < a; i++)
    {
        printf("%d ", even_array[i]);
    }

    printf("\nOdd numbers: ");
    for (int i = 0; i < b; i++)
    {
        printf("%d ", odd_array[i]);
    }

    return 0;
}