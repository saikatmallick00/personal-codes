#include <stdio.h>
int main() {
    int a,i=1,b=1;
    printf("\nEnter the factorial number");
    scanf("%d",&a);
    while (i<=a)
    {
        b*=i;
        i++;
    }
   printf("\nThe factorial Value:%d",b); 
   return 0;
}