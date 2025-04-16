#include <stdio.h>
int main() {
    int a, i = 0;
    printf("Enter the number of Layer: ");
    scanf("%d", &a);
    while (i < a) {
        int j = 0;
        while (j < a - i - 1) {
            printf(" ");
            j++;
        }
        int k = 0;
        while (k < 2 * i + 1) {
            printf("*");
            k++;
        }
        printf("\n");
        i++;
    }
    return 0;
}