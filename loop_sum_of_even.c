#include<stdio.h>
int main() {
    int i=1,n,a=0;
    printf("\nenter the number");
    scanf("%d", &n);
    while (i<=n) {
        a+=2*i;
        i++;   
    }
    printf("\nthe sum of first %d number is %d",n,a);
return 0;                          
}