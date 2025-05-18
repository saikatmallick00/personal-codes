#include<stdio.h>
int main(){
    int a[100],n,i,temp,j;
    printf("enter the size of array: ");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("\nenter %d element: ",i);
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < n-1; i++)
    {
       for ( j = i; j < n; j++)
       {
        if(a[i]>a[j]){
            temp=a[j];
            a[j]=a[i];
            a[i]=temp;
        }
       }
    }
    for ( i = 0; i < n; i++)
    {
        printf("%d\t",a[i]);
    }
return 0;    
}