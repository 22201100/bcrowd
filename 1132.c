#include <stdio.h>

int main() {
    int X, Y;
    int sum = 0;

    // Read the input values X and Y
    scanf("%d%d", &X, &Y);

    // Ensure X is smaller than Y
    if (X > Y) {
        int temp = X;
        X = Y;
        Y = temp;
    }

    // Calculate the sum of numbers not divisible by 13
    for (int i = X; i <= Y; i++) {
        if (i % 13 != 0) {
            sum += i;
        }
    }

    // Print the result
    printf("%d\n", sum);

    return 0;
}

