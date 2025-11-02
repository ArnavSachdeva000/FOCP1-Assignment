#include <stdio.h>

int main()
{
    int a, b, x;
    printf("Enter two numbers:");
    scanf("%d%d", &a, &b);
    while (b != 0)
    {
        x = (~a) & b;
        a = a ^ b;
        b = x << 1;
    }
    printf("Result= %d", a);
    return 0;
}

/* This program does subtraction of two numbers using bitwise operators.
In computers, subtraction is not done directly using the minus (-) sign.
Instead, it is done using logic gates and bitwise operations.
This program shows how subtraction works inside a processor. */