#include <stdio.h>
int main() {
    int a;
    printf("Enter The Year\n");
    scanf("%d",&a);
    if (a%4!=0){ 
        printf("This year has no leap day.\n");
    } else if (a%4==0, a%100!=0) {
        printf("This year has a leap day.\n");
    } else if (a%100==0, a%400!=0) {
        printf("This year has no leap day.\n");
    } else if (a%400==0) {
        printf("This year has a leap day.\n");
    } else {
        printf("invalid year.\n");
    }
    return 0;
}