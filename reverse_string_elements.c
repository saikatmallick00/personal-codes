#include<stdio.h>
#include<string.h>
int main(){
    char a[100];
    int n,i;
    printf("Enter a string: ");
    fgets(a, sizeof(a), stdin);
    n = strlen(a);
    if (a[n - 1] == '\n') {
        a[n - 1] = '\0';
        n--;
    }
    printf("\n\nThe values stored in the string in reverse are :\n");
    for (i = n - 1; i >= 0; i--)
    {
        printf("%c", a[i]);
    }
    return 0;
}