#include<stdio.h>
int main(){
    int a,n;
    printf("Enter the wanted number of multiply table:");
    scanf("%d",&a);
    printf("\nEnter the times you want to multiply:");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d X %d = %d\n",a,n,a*i);
    }
    return 0;
}