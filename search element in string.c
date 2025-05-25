#include<stdio.h>
int main(){
    char a[100],v;
    int n,i,j=0;
     printf("Enter a string: ");
    scanf("%s", a); 
    n = strlen(a);
    printf("\nenter the element you wanna search in string: ");
    scanf(" %c",&v);
    for(i=0;i<n;i++){
        if(a[i]==v){
           j++; 
        }
    }
    printf("the search element occured in string %d times",j);
    return 0;
}