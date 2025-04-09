#include<stdio.h>
int main() {
    int i,n,a=0;
    printf("\nenter the first number");
    scanf("%d", &i);
    printf("\nenter the second number");
    scanf("%d", &n);
    while (i<=n) {
        if(i%2==0){
            a+=i;
        }
         i++;   
    }
    printf("\nthe sum of the odd number is %d",a);
return 0;                          
}