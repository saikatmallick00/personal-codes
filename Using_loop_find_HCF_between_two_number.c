#include<stdio.h>
 /*int main(){
    int a,b,c=1;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    for (int i = 1; i<=a && i<=b; i++)
    {
        if (a%i==0 && b%i==0)
        {
            c=i;
        }
    }
    printf("%d",c);
    return 0;   
}*/
 // USING EUCLID METHOD
int main(){
    int a,b,c;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
    if (a>b)
    {
        while(b != 0){
            c = b;
            b = a % b;
            a = c;
        }
        printf("%d",a);     
    } else if (b>a)
    {
        while(a != 0){
            c = a;
            a = b % a;
            b = c;
        }
    printf("%d",b);  
    }
   return 0; 
 }