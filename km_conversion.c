#include<stdio.h>
int meter_(int);
int feet_(int);
int inches_(int);
int centimeter_(int);
int main(){
    int a,num1,result1,result2,result3,result4;
    printf("\nEnter the distance two cities in KM= ");
    scanf("%d",&a);
    result1= meter_(a);
    result2= feet_(a);
    result3= inches_(a);
    result4= centimeter_(a);
    printf("\nThe given KM in meters is= %d",result1);
    printf("\nThe given KM in feets is= %d",result2);
    printf("\nThe given KM in inches is= %d",result3);
    printf("\nThe given KM in centimeters is= %d",result4);
    return 0;
}
int meter_(num1){
    num1=num1*1000;
    return num1;
}
int feet_(num1){
    num1=num1*3280;
    return num1;
}
int inches_(num1){
    num1=num1*39370;
    return num1;
}
int centimeter_(num1){
    num1=num1*100000;
    return num1;
}