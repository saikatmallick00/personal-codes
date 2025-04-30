#include <stdio.h>
int main() {
    int arr[25], i, search, count = 0;
    // Input 25 numbers
    printf("Enter 25 numbers:\n");
    for (i = 0; i < 25; i++) {
        scanf("%d", &arr[i]);
    }
    // Input number to search
    printf("Enter the number to search: ");
    scanf("%d", &search);
    // Search and count
    for (i = 0; i < 25; i++) {
        if (arr[i] == search) {
            count++;
        }
    }
    // Output result
    if (count > 0) {
        printf("The number %d is present %d times in the array.\n", search, count);
    } else {
        printf("The number %d is not present in the array.\n", search);
    }
    return 0;
}
