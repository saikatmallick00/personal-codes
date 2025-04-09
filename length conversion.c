#include <stdio.h>
int main() {
    float a,b,c,d,e,sum;
    printf("Distance between two cities(in km):\n");
    scanf("%f",&a);
    b=1000*a;
    printf("Distance between two cities in meters:%.2f\n",b);
    c=3280.84*a;
    printf("Distance between two cities in feet:%.2f\n",c);
    d=39370.1*a;
    printf("Distance between two cities in inches:%.2f\n",d);
    e=100000*a;
    printf("Distance between two cities in cm:%.2f\n",d);
return 0;    
}