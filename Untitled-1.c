#include <stdio.h>

int main() {
    int length = 1189, width = 841;  // A0 size

    printf("Paper sizes from A0 to A8:\n");

    for (int i = 0; i <= 8; i++) {
        printf("A%d: %d mm x %d mm\n", i, length, width);

        // Next size: cut current size in half (parallel to shorter side)
        int temp = length;
        length = width;
        width = temp / 2;
    }

    return 0;
}
