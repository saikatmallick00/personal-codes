#include <stdio.h>
int main(){
    int e,a,b,i=0,r=0,s,z,x,j;
    printf("\nEnter the number:");
    scanf("%d",&e);
    b=e;
    a=e;
    while (a > 0){ 
        a/=10;
        i++;
    }
    z=e;
    while(z!=0){
        s=z%10;
        x=1;
        j=0;
        while(j<i){
            x*=s;
            j++;
        }
        r+=x;
        z/=10;
    }
    if (r==b)
    {
        printf("%d is an Armstrong number",b);
    }else
    {
        printf("%d is not an Armstrong number",b);
    }
    return 0;
}