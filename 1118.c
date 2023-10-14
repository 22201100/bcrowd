#include <stdio.h>
int main() {
    int count = 0;
    double score, sum = 0.0;

    while (1) {
        if (count == 2) {
            double average = sum / 2.0;
            printf("media = %.2lf\n", average);

            int option;
            do {
                printf("novo calculo (1-sim 2-nao)\n");
                scanf("%d", &option);
            } while (option != 1 && option != 2);

            if (option == 2) {
                break;
            }

            count = 0;
            sum = 0.0;
        }

        scanf("%lf", &score);

        if (score < 0.0 || score > 10.0) {
            printf("nota invalida\n");
        } else {
            sum += score;
            count++;
        }
    }

    return 0;
}

