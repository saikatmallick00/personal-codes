#include <stdio.h>
int main(){
    int n,r,s=0;
    printf("\nenter a numbr");
    scanf("%d", &n);
    while (n>0)
    {
        r=n%10;
        s=s+(r*r*r);
        n=n/10;
        if (s=n)
        {
            printf("%d is an amstrong number",n);
        }else
        {
            printf("%d is not an amstrong number",n);
        }
    }

return 0;
}