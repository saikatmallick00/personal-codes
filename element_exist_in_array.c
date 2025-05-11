#include<stdio.h>
int main(){
    int a[20],n,b,i=0;
    printf("enter the size of the elements: ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("\nenter the elements: ");
        scanf("%d",&a[i]);
    }
    printf("\n enter the number u wanna find in array:");
    scanf("%d",&b);
    while (i<n){
        if (a[i]==b){
            printf("array present in %d position",i);
        }else{
            printf("\ndoesn't exist in array");
        }
        i++;
    }    
    return 0;
}