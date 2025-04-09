#include <stdio.h>
int main () {
   int a,DA,DA2,gs,gs2,gs3,gs4;
   printf("enter your basic salary\n");
   scanf("%d", &a);
   
   if (a>20000) {
    DA = 0.60 * a;
        if (DA>=24000) {
            gs=a+24000;
            printf("Gross salary:%d\n",gs);
        }else {
            gs2=a+DA;
            printf("Gross salary:%d\n",gs2);
        }
   }else {
    DA2= 0.40 * a;
        if(DA2<4800) {
            gs3=a+4800;
            printf("Gross salary:%d\n",gs3);
        }else {
            gs4=a+DA2;
            printf("Gross salary:%d\n",gs4);
        }
   }
   return 0;   
}