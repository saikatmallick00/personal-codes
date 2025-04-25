#include <stdio.h>
int main() {
    char str[100];
    int i = 0, b;
    printf("Enter a string: ");
    while ((str[i] = getchar()) != '\n') {
        i++;
    }
    b = i;
    printf("Reversed: ");
    for (i = b - 1; i >= 0; i--) {
        putchar(str[i]);
    }
    return 0;
}
