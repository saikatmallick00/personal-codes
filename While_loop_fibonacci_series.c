#include<stdio.h>
int main(){
    int n,f0,f1,f2,i;
    printf("\nEnter a number of terms: ");
    scanf("%d",&n);
    f0=0;
    f1=1;
    printf("\n%d \n%d",f0,f1);
    i=3;
    while (i<=n)
    {
        f2=f0+f1;
        printf("\n%d",f2);
        f0=f1;
        f1=f2;
        i++;
    }
    return 0;
}