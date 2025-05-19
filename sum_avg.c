#include<stdio.h>
int sum();
int avrg(int,int);
static int s =10;
int main(){
    int result,result1,avg;
    int num1, num2;
    printf("\nEnter the first number: ");
    scanf("%d",&num1);
    printf("\nEnter the second number: ");
    scanf("%d",&num2);
    result = sum(num1, num2);
    result1= avrg(num1,num2);
    printf("%d\n", result);
    printf("%d\n", result1);
    result = sum(num1, num2);
    printf("%d\n", result);
    return 0;
}

int sum(int a, int b){
    s= s+a+b;
    return s;
}
int avrg(int a,int b){
    int c=s/2;
    return c;
}