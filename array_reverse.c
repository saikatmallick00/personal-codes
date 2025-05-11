#include<stdio.h>
int main(){
    int a[20],n,i,j,temp;
    printf("\nsize of element:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\nenter element\n");
        scanf("%d",&a[i]);
    }
    i=0;
    j=n-1;
    while (i<j)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    printf("reversed the element:");
        for(i=0;i<n;i++){
                printf("%d ",a[i]);
        }
    return 0; 
}    
    
