#include<stdio.h>
#include<ctype.h>
int main(){
    char a;
    printf("enter the character: ");
    scanf("%c",&a);
    if(isalpha(a)){
        char lower=tolower(a);
        if(lower=='a'|| lower=='e'|| lower=='i'|| lower=='o'|| lower=='u'){
            printf("\nthe character is vowel");
        }else{
            printf("\nthe character is consonants");
        }
    }else if(isdigit(a)){
        printf("\nthe character is a digit");
    }else{
        printf("\nthe character is a special character");
    }
    return 0;
}