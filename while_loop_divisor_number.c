#include<stdio.h>
int main() {
    int a, n, i= 1;
    printf("Enter a number\n");
    scanf("%d", &a);
    n = a;
    while (i<=n/2){
        if (n%i==0) {
            printf("%d\t", i);
            }
        i++;    
    }
return 0;
}
