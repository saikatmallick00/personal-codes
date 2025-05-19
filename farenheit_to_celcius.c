#include<stdio.h>
int celcius(int);
int main(){
    int a,re1;
    printf("\nenter the temperature in farenheit: ");
    scanf("%d",&a);
    re1=celcius(a);
    printf("\ngiven temperature in celcius is: %d",re1);
    return 0;
}
int celcius(int b){
    int c;
    c=(b-32)*(5/9);
    return c;
}