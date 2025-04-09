#include <stdio.h>
int main () {
    int i=0;
    while (i<=255)
    {
        printf("the ASCII value %d and the character is: %c\n", i,(char)i);
        i++;
    }
  return 0;  
}