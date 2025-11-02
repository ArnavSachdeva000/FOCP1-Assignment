#include <stdio.h>
#include <math.h>
int main()
{
    int n, r, t, x = 0, y = 0;
    printf("Enter a number:");
    scanf("%d", &n);
    t = n;
    while (t > 0)
    {
        x++;
        t = t / 10;
    }
    t = n;
    while (t > 0)
    {
        r = t % 10;
        y = y + pow(r, x);
        t = t / 10;
    }
    if (y == n)
        printf("Armstrong number");
    else
        printf("Not an Armstrong number");
    return 0;
}
