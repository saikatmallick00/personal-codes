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
    if (b==d)
    {
        printf("\nThis number is a palindrome number");
    }else
    {
        printf("\nThis number is not a palindrome number");
    }
return 0;
}