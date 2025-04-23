#include <stdio.h>
#include <stdbool.h>
int main() {
    int Arr[] = {12, 16, 17, 28, 6, 4};
    int n = sizeof(Arr) / sizeof(Arr[0]);
    int specific_no;
    printf("Please enter the no which you want to find: ");
    scanf("%d", &specific_no);
    for (int i = 0; i < n; i++) {
        if (Arr[i] == specific_no) {
            printf("%d exists at position %d\n", specific_no, i + 1);
            return 0;
        }
    }
    printf("%d doesn’t exist in the array list\n", specific_no);
    return 0;
}
