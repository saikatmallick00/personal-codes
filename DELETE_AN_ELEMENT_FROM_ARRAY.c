#include<stdio.h>
int main(){
    int a[100],i,n,k;
    printf("\nEnter the element size: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\nEnter %d element: ",i);
        scanf("%d",&a[i]);
    }
    printf("\nenter the position of array element you wanna delete: ");
    scanf("%d",&k);
    for ( i =k+1; i<=n-1; i++)
    {
        a[i-1]=a[i];
    }
    n--;
    for ( i = 0; i<n; i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}