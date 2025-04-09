#include <stdio.h>
int main() {
    float a,b,c,sum;
    printf("Enter Your basic Salary:\n");
    scanf("%f",&a);
    b=0.40*a;
    c=0.20*a;
    sum=a+b+c;
    printf("Gross Salary:%.2f\n",sum);
    return 0;
}