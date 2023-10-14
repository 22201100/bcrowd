#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        int X, Y;
        scanf("%d %d", &X, &Y);

        if (Y == 0) {
            printf("divisao impossivel\n");
        } else {
            double result = (double)X / Y;
            printf("%.1lf\n", result);
        }
    }

    return 0;
}

