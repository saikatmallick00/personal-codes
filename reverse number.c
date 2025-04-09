#include <stdio.h>
int main() {
    int a,b,c,d,e,f,g,h,i,t1,t2;
    printf("enter the number");
    scanf("%d", &a);
    b=a%10, c=a/10;
    d=c%10, e=c/10;
    f=e%10, g=e/10;
    h=g%10, i=g/10;
   t1=b;
   b=i;
   i=t1;
   t2=d;
   d=h;
   h=t2;


  return 0;  
}