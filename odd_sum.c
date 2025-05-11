#include<stdio.h>
int main(){
    int a[20],i=0,n,sum=0,temp;
    printf("enter element size: ");
    scanf("%d",&n);
    temp=i;
    for(i=0;i<n;i++){
        printf("\nenter element: ");
        scanf("%d",&a[i]);
    }
    while (temp<n){
        if(a[temp]%2!=0){
            sum=sum+a[temp];
        }
        temp++;
    }
    printf("\nsum of this odd num: %d",sum);
    return 0;
}