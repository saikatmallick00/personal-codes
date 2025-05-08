#include<stdio.h>
int main(){
    int a,i,b;
    printf("Enter the number:");
    scanf("%d",&a);
    b=a;
    for(int i=1; b>=10; i++){
        b/=10;
    }
    printf("first digit is: %d\n", b);
    printf("last digit is: %d", a%10);
    return 0;
}