#include <stdio.h>
void twoSum(int arr[], int n, int target) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                printf("Indices: %d and %d\n", i, j);
                return;
            }
        }
    }
    printf("No two numbers add up to the target.\n");
}
int main() {
    int arr[] = {2, 7, 11, 15};
    int target = 9;
    int n = sizeof(arr) / sizeof(arr[0]);
    twoSum(arr, n, target);
    return 0;
}
