#include <stdio.h>
#include <math.h> // sqrt() ke liye

int main() {
    float a, b, c;
    float d, root1, root2;

    // User se input lo
    printf("Enter a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    // Discriminant (d) = b^2 - 4ac
    d = b * b - 4 * a * c;

    // Agar roots real hain (d >= 0)
    if (d >= 0) {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);

        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    } else {
        printf("Roots are imaginary.\n");
    }

    return 0;
}
