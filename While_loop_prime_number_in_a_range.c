#include <stdio.h>
int main() {
    int a, b, i, c, d;
    printf("Enter starting range: ");
    scanf("%d", &a);
    printf("Enter ending range: ");
    scanf("%d", &b);
    i = a;
    while (i <= b) {
        if (i < 2) {
            printf("%d is Neither Prime Nor Composite\n", i);
            i++;
            continue;
        }
        c = 2;
        d = 1;
        while (c <= i / 2) {
            if (i % c == 0) {
                d = 0;
                break;
            }
            c++;
        }

        if (d)
            printf("%d is Prime\n", i);
        else
            printf("%d is Composite\n", i);

        i++;
    }
    return 0;
}
