#include <stdio.h>
int main(){
    int a,i=1,b;
    while (i<=10)
    {
        printf("\nEnter %d Employee's total working hours",i);
        scanf("%d", &a);
        if (a>40)
        {
            b=(a-40)*12;
            printf("\nOvertime pay of the employee is:%d ",b);
        }else
        {
            printf("\nOvertime pay is zero ");
        }
        i++;
        
    }
return 0;  
}