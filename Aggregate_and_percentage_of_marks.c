#include<stdio.h>
int total(int,int,int,int,int);
int percentage(int,int,int,int,int);
int s,c;
int main(){
    int a,b,c,d,e,num1,num2,num3,num4,num5,result1,result2;
    printf("\nEnter The first subject marks out of 100: ");
    scanf("%d",&a);
    printf("\nEnter The second subject marks out of 100: ");
    scanf("%d",&b);
    printf("\nEnter The third subject marks out of 100: ");
    scanf("%d",&c);
    printf("\nEnter The fourth subject marks out of 100: ");
    scanf("%d",&d);
    printf("\nEnter The fifth subject marks out of 100: ");
    scanf("%d",&e);
    result1=total(a,b,c,d,e);
    result2=percentage(a,b,c,d,e);
    printf("\nThe aggregate marks of given subjects are: %d",result1);
    printf("\nThe percentage of aggregate marks of given subjects are: %d",result2);
    return 0;
}
int total(num1,num2,num3,num4,num5){
    s=num1+num2+num3+num4+num5;
    return s;
}
int percentage(num1,num2,num3,num4,num5){
    c=s/5;
    return c;
}