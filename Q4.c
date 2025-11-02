#include <stdio.h>

int main()
{
    int a, b, temp;

    printf("Enter two numbers:");
    scanf("%d%d", &a, &b);

    printf("Original values: a=%d, b=%d\n", a, b);

    // Arithmetic
    a = a + b;
    b = a - b;
    a = a - b;
    printf("1. Using Arithmetic Method: a=%d, b=%d\n\n", a, b);

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("Original values: a=%d, b=%d\n", a, b);

    // Bitwise XOR
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("2. Using Bitwise XOR Method: a=%d, b=%d\n\n", a, b);

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("Original values: a=%d, b=%d\n", a, b);

    // Temporary Variable
    temp = a;
    a = b;
    b = temp;
    printf("3. Using Temporary Variable Method:a=%d, b=%d\n\n", a, b);

    printf("Enter two numbers:");
    scanf("%d%d", &a, &b);

    printf("Original values: a=%d, b=%d\n", a, b);

    // Pointers
    int *x = &a, *y = &b;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("4. Using Pointer Method:\na=%d, b=%d\n\n", a, b);

    return 0;
}
