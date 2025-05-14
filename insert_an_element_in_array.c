#include<stdio.h>
int main(){
    int a[20],i,n,element,v;
    printf("enter the element size:");
    scanf("%d",&n);
    for(i=0;n>i;i++){
        printf("enter %d element no:",i);
        scanf("%d",&a[i]);
    }
    printf("\nGimme the element value you wanna insert: ");
    scanf("%d",&element);
    printf("\ngimme the position of array you wanna insert: ");
    scanf("%d",&v);
    for ( i = n-1; i>=v; i--)
    {
        a[i+1]=a[i];
    }
    a[i+1]=element;
    for ( i = 0; i<=n; i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}