#include <stdio.h>
int main() {  
    int a,b,c,max;
    printf("Enter three numbers:");
    scanf("%d %d %d", &a, &b, &c);
    if(a>=b && a>=c)  {
        printf("the max is number is=%d\n",a);
    } else if(b>=a && b>=c) { 
        printf("the max is number is=%d\n",b);
    }else if (c>=a && c>=b) {
        printf("the max is number is=%d\n",c);
    }
return 0;
}
