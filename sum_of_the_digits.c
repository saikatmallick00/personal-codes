#include<stdio.h>
int sum(int);
int main(){
    int a,result1;
    printf("\nEnter the digit: ");
    scanf("%d",&a);
    result1=sum(a);
    printf("\nsum of the given digits: %d",result1);
    return 0;
}
int sum(int b){
    int c=0;
    while (b>0)
    {
        c+=b%10;
        b/=10;
    }
    return c;
}