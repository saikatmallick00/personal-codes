#include<stdio.h>
int main() {
    int a[100], b[100], visited[100] = {0};
    int n, n2, i, j, k;
    int isCommon, count = 0;
    printf("\nEnter the 1st array element size: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        printf("Enter element %d: ", i);
        scanf("%d", &a[i]);
    }
    printf("\nEnter the 2nd array element size: ");
    scanf("%d", &n2);
    for(k = 0; k < n2; k++) {
        printf("Enter element %d: ", k);
        scanf("%d", &b[k]);
    }
    printf("\nCommon elements:\n");
    for(i = 0; i < n; i++) {
        isCommon = 0;
        for(j = 0; j < i; j++) {
            if(a[i] == a[j]) {
                isCommon = 1;
                break;
            }
        }
        if(isCommon == 1)
            continue;
        for(k = 0; k < n2; k++) {
            if(a[i] == b[k] && visited[k] == 0){
                printf("%d\n", a[i]);
                count++;
                visited[k] = 1;
                break;
            }
        }
    }
    printf("\nTotal number of common elements: %d\n", count);
    return 0;
}
