#include<stdio.h>
int main(){
    int a,sum=0;
    while(1){
        printf("enter the number:");
        scanf("%d",&a);
        if(a==0){
        break;
        }
        else{
            sum+=a;
        }
        
    }
    printf("sum will be:%d",sum);
    return 0;
}