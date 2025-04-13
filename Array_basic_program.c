#include <stdio.h>
int main() {
    int arr[] ={ 78, 68, 97,21};
    int i=0;
    while(i<4){
        printf("Print array element %d and position %d \n", arr[i],i);
        i++;
    }
    arr[1]=102;
    printf("After changing the 1st indices value\n");
    i=0;
    while(i<4){
        printf("Print array element %d and position %d \n", arr[i],i);
        i++;
    }
    return 0;
}