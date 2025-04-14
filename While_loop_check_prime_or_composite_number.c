#include<stdio.h>
int main(){
    int a,i;
    printf("\nEnter a number: ");
    scanf("%d",&a);
    i=2;
    while (i<=a/2)
    {
        if (a%i==0)
        {
            break;
        }
        i++;
    } 
    if (i<=a/2)
    {
        printf("\n%d is Composite",a);
    }else
    { 
        printf("\n%d is Prime",a);
    }
    return 0;
}