#include <stdio.h>
int main()
{
    double first, second, third, fourth, last, average;
    scanf("%lf %lf %lf %lf", &first, &second, &third, &fourth);
   average = (first * 2 + second * 3 + third * 4 + fourth) / 10;
    printf("Media: %.1f\n", average);
    if (average>= 7.0){
        printf("Aluno aprovado.\n");
    }
    else if (average >= 5.0)
    {
        printf("Aluno em exame.\n");
        scanf("%lf", &last);
        printf("Nota do exame: %.1f\n", last);
        if (last + average / 2.0 > 5.0){
            printf("Aluno aprovado.\n");
        }
        else{
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", (last + average ) / 2.0);
    }
    else{
        printf("Aluno reprovado.\n");
    }
    return 0;
}

