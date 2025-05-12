#include<stdio.h>
int main(){
    int a[100],n,max,min,i;
    printf("\nEnter the size of array: ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter %d element: ",i);
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    for (i = 0; i < n-1; i++)
    {
        if (a[i]>max)
        {
            max=a[i];
        }else if (min>a[i])
        {
            min=a[i];
        }
            
    }
    printf("\nThe maximum element in this array is: %d",max);
    printf("\nThe minimum element in this array is: %d",min);
    return 0;
}