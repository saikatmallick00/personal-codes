#include <stdio.h>
int main(){
   float sub1,sub2,sub3,sub4,sub5, percentage, total;
   printf("\nEnter sub 1 number:");
   scanf ("%f",&sub1);
   printf("\nEnter sub 2 number:");
   scanf ("%f",&sub2);
   printf("\nEnter sub 3 number:");
   scanf ("%f",&sub3);
   printf("\nEnter sub 4 number:");
   scanf ("%f",&sub4);
   printf("\nEnter sub 5 number:");
   scanf ("%f",&sub5);
   total=sub1+sub2+sub3+sub4+sub5;
   percentage=(total*100)/500;
   printf("total Mark's obtain:%.2f\n", total);
   printf("percentage is:%.2f\n", percentage);
   return 0;
}