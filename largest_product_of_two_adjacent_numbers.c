#include <stdio.h>
int main() {
    int n, i, max_product;
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }  
    max_product = arr[0] * arr[1];   
    for(i = 1; i < n - 1; i++) {
        int product = arr[i] * arr[i + 1];
        if(product > max_product) {
            max_product = product;
        }
    }    
    printf("%d", max_product);
    return 0;
}
