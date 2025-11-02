#include <stdio.h>

int main()
{
    int choice;
    printf("Type 1 for binary to decimal\nType 2 for decimal to binary\nEnter choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        int a, b = 0, c = 1, rem;
        printf("Enter binary: ");
        scanf("%d", &a);
        while (a > 0)
        {
            rem = a % 10;
            b = b + rem * c;
            a = a / 10;
            c = c * 2;
        }
        printf("Decimal = %d\n", b);
    }
    else if (choice == 2)
    {
        int a, b[20], i = 0;
        printf("Enter Decimal: ");
        scanf("%d", &a);
        while (a > 0)
        {
            b[i++] = a % 2;
            a = a / 2;
        }
        printf("Binary = ");
        for (int j = i - 1; j >= 0; j--)
            printf("%d", b[j]);
        printf("\n");
    }
    else
        printf("Invalid Choice\n");

    return 0;
}