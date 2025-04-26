#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("\nenter a number:");
    scanf("%d",&a);
    b=a;
    d=1;
    while (b>0)
    {
        c=b%10;
        d*=c;
        b/=10;
    }
    printf("Products Of The Digits Of A Number is:%d",d);
return 0;    
}