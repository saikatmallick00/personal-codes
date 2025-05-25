#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    int n,i,j,b=1;
    printf("Enter a string: ");
    fgets(a, sizeof(a), stdin);
    n = strlen(a);
    if (a[n - 1] == '\n') {
        a[n - 1] = '\0';
        n--;
    }
    for (j=n-1,i=0;i<j;i++,j--)
    {
        if(a[j]!=a[i]){
            b=0;
            break;
        }
    }
    if(b){
        printf("palindrome string");
    }else{
        printf("not palindrome string");
    }
    return 0;
}