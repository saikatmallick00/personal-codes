#include <stdio.h>
#include <stdlib.h>
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
    for (int i = 0; i < numsSize; i++) {
        int index = abs(nums[i]) - 1;
        if (nums[index] > 0) {
            nums[index] = -nums[index];
        }
    } 
    *returnSize = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] > 0) {
            (*returnSize)++;
        }
    } 
    int* result = (int*)malloc(*returnSize * sizeof(int));
    if (result == NULL) {
        *returnSize = 0;
        return NULL;
    } 
    int pos = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] > 0) {
            result[pos++] = i + 1;
        }
    } 
    return result;
}
void printArray(int* arr, int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}
int main() {
    int nums[] = {4, 3, 2, 7, 8, 2, 3, 1};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int returnSize; 
    int* result = findDisappearedNumbers(nums, numsSize, &returnSize);
    printf("Disappeared numbers: ");
    printArray(result, returnSize); 
    free(result); 
    return 0;
}