#include<stdio.h>
int main(){
    int a[20],i,sum=0,temp=0,n;
    printf("\n enter eliment size:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\nenter element: ");
        scanf("%d",&a[i]);
}
        while(temp<3)
        {
            sum=sum+a[temp];
            temp++;
        }
        printf("sum of four digit:%d",sum);
        return 0;
}

