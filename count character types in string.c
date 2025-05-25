#include<stdio.h>
#include<ctype.h>
int main(){
    char a[100];
    int n,i,c=0,v=0,d=0,s=0;
     printf("Enter a string: ");
    scanf("%s", a); 
    n = strlen(a);
    for(i=0;i<n;i++){
        if(isalpha(a[i])){
        char lower=tolower(a[i]);
        if(lower=='a'|| lower=='e'|| lower=='i'|| lower=='o'|| lower=='u'){
            printf("\nthe character is vowel");
            v++;
        }else{
            printf("\nthe character is consonants");
            c++;
        }
    }else if(isdigit(a[i])){
        printf("\nthe character is a digit");
        d++;
    }else{
        printf("\nthe character is a special character");
        s++;
    }
}
    printf("\nVowels: %d", v);
    printf("\nConsonants: %d", c);
    printf("\nDigits: %d", d);
    printf("\nSpecial Characters: %d\n", s);
    return 0;
}