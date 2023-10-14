#include <stdio.h>

int main() {
    int X, Y;

    // Read the input numbers X and Y
    scanf("%d%d", &X, &Y);

    // Ensure X is less than or equal to Y
    if (X > Y) {
        int temp = X;
        X = Y;
        Y = temp;
    }

    // Loop through the numbers between X and Y
    for (int i = X + 1; i < Y; i++) {
        if (i % 5 == 2 || i % 5 == 3) {
            printf("%d\n", i);
        }
    }

    return 0;
}
