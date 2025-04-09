#include <stdio.h>
int main() {
    int a,b,c,sum;
    printf("Enter Your basic Salary");
    scanf("%d",&a);
    printf("\nEnter Your Dearness Allowance");
    scanf("%d",&b);
    printf("\nEnter Your Rent Allowance");
    scanf("%d",&c);
    sum=a+b+c;
    printf("\nGross Salary=%d",sum);
    return 0;
}