#include <stdio.h>
int main(){
    int a,b,i=1,n=1;
    printf("\nenter the base number:");
    scanf("%d",&a);
    printf("\nEnter the power number:");
    scanf("%d",&b);
    while (i<=b)
    {
        n*=a;
        i++;
    }
    printf("\nanswer will be:%d",n);
 return 0;
}