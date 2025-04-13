#include<stdio.h>
int main(){
    int z,a,b,c,n;
    printf("\nEnter a number: ");
    scanf("%d",&z);
    a=z;
    while (a>9)
    {
        c=0;
        while (a>0)
        {
            b=a%10;
            c+=b;
            a/=10;
        }
        a=c;
    }
    if (c==1)
    {
        printf("\n%d is a magic number",z);
    }else
    {
        printf("%d is not a magic number",z);
    }
    return 0;
}