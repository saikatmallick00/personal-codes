#include<stdio.h>
int main() {
    int a,b,c,d,lcm,hcf;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    if (a>b)
    {
        d=a*b;
        while(b != 0){
            c = b;
            b = a % b;
            a = c;
        }
        lcm=d/a;
        printf("%d",lcm);     
    } else if (b>a)
    {
        d=a*b;
        while(a != 0){
            c = a;
            a = b % a;
            b = c;
        }
        lcm=d/b;
    printf("%d",lcm);  
    }
    return 0;
}