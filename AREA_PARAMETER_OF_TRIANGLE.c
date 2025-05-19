#include<stdio.h>
int area_(int,int);
int parameter_(int,int);
int s,c;
int main(){
    int a,b;
    int num1,num2,result1,result2;
    printf("\nEnter the length= ");
    scanf("%d",&a);
    printf("\nEnter the width= ");
    scanf("%d",&b);
    result1= area_(a,b);
    result2= parameter_(a,b);
    printf("\narea of the triangle is= %d\n", result1);
    printf("\nparameter of the triangle is=%d\n", result2);
    return 0;
}
int area_(int num1, int num2){
    s=num1 * num2;
    return s;
}
int parameter_(int num1, int num2){
    c=2*(num1 + num2);
    return c;
}