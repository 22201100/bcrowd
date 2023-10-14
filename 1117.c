#include <stdio.h>

int main() {
    double score1, score2;
    int valid_scores = 0;
    double sum = 0.0;

    while (valid_scores < 2) {
        double input_score;
        if (scanf("%lf", &input_score) != 1) {
            printf("nota invalida\n");
            continue;
        }

        if (input_score < 0.0 || input_score > 10.0) {
            printf("nota invalida\n");
        } else {
            sum += input_score;
            valid_scores++;
        }
    }

    printf("media = %.2lf\n", sum / 2.0);

    return 0;
}

