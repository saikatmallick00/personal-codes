#include <stdio.h>
#include <math.h>
int main() {
    float a,b,c,d,first,second;
    printf("\nenter the value of A:");
    scanf("%f",&a);
    printf("\nenter the value of B:");
    scanf("%f",&b);
    printf("\nenter the value of C:");
    scanf("%f",&c);
    d = b * b - 4 * a * c;
    if(d>=0) {
        first = (-b + sqrt(d)) / (2 * a);
        printf("\nthe first answer is:%.2f",first);
        second = (-b - sqrt(d)) / (2 * a);
        printf("\nthe second answer is:%.2f",second);
    } else{
        printf("\nthe answer is imaginary");
    }
    return 0;
} 