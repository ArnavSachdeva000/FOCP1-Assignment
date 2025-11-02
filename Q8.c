#include <stdio.h>

int main() {
    int a, b = 0, c = 1, d, e;
    printf("Enter number of terms: ");
    scanf("%d", &a);

    for(e = 0; e < a; e++) {
        if(e <= 1)
            d = e;
        else {
            d = b + c;
            b = c;
            c = d;
        }
        printf("%d, ", d);
    }
    printf("...");
    return 0;
}
