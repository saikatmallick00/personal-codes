#include<stdio.h>
int main() {
    int a,b,c,d,e,f=0;
    printf("\nEnter a number:");
    scanf("%d",&a);
    b=a;
    while (b!=0)
    {
        c=b%10;
        d=1;
        e=1;
        while (d<=c)
        {
            e*=d;
            d++;
        }
        f+=e;
        b/=10;
    }
    if (f==a)
    {
        printf("\nThis number is a peterson number");
    }else
    {
        printf("\nThis number is not a peterson number");
    } 
return 0;    
}