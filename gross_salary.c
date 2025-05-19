#include<stdio.h>
int gross_salary(int);
int main(){
    int ba,result1,num1;
    printf("\nMr. Ashim enter your basic salary: ");
    scanf("%d",&ba);
    result1=gross_salary(ba);
    printf("\n Ashim's gross salary is: %d",result1);
    return 0;
}
int gross_salary(num1){
    num1=num1+(num1*0.2)+(num1*0.4);
    return num1;
}