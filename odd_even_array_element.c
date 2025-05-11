#include<stdio.h>
int main(){
    int a[20],n,i;
    printf("\nsize of element:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\nenter element\n");
        scanf("%d",&a[i]);
    }
    printf("\nthe even elements are: ");
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0){
            printf("%d\t",a[i]);
        }
    }
    printf("\nthe odd elements are: ");
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0){
            printf("%d\t",a[i]);
        }
    }
return 0;
}