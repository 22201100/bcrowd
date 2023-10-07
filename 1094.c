#include <stdio.h>

int main()
{
    int N, amount;
    char type;
    int total = 0, totalC = 0, totalR = 0, totalS = 0;

    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d %c", &amount, &type);
        total += amount;

        if (type == 'C')
        {
            totalC += amount;
        }
        else if (type == 'R')
        {
            totalR += amount;
        }
        else if (type == 'S')
        {
            totalS += amount;
        }
    }

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", totalC);
    printf("Total de ratos: %d\n", totalR);
    printf("Total de sapos: %d\n", totalS);
    printf("Percentual de coelhos: %.2lf %%\n", (double)totalC / total * 100);
    printf("Percentual de ratos: %.2lf %%\n", (double)totalR / total * 100);
    printf("Percentual de sapos: %.2lf %%\n", (double)totalS / total * 100);

    return 0;
}

