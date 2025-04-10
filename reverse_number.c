#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("\nEnter the number");
    scanf("%d", &a);
    d=a;
    b=0;
    while (a>0)
    {
        c=a%10;
        b=b*10+c;
        a/=10;
    }
    printf("\nReverse of %d is %d",d,b);
    return 0;
}