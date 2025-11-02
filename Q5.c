#include <stdio.h>

int main()
{
    int x, y;

    printf("Enter coordinates (x y): ");
    scanf("%d%d", &x, &y);

    if (x > 0 && y > 0)
        printf("Point (%d,%d) lies in First Quadrant.\n", x, y);
    else if (x < 0 && y > 0)
        printf("Point (%d,%d) lies in Second Quadrant.\n", x, y);
    else if (x < 0 && y < 0)
        printf("Point (%d,%d) lies in Third Quadrant.\n", x, y);
    else if (x > 0 && y < 0)
        printf("Point (%d,%d) lies in Fourth Quadrant.\n", x, y);
    else if (x == 0 && y == 0)
        printf("Point (%d,%d) lies at Origin.\n", x, y);
    else if (x == 0)
        printf("Point (%d,%d) lies on Y-axis.\n", x, y);
    else if (y == 0)
        printf("Point (%d,%d) lies on X-axis.\n", x, y);

    return 0;
}
