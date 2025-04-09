#include <stdio.h>
int main() {
    int a, i=1;
    printf("\nenter the number");
    scanf("%d",&a);
    while (i<=a)
    {
        printf("\n%d",i);
        i=i+2;
    }
    return 0;
}