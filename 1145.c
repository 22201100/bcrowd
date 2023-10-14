#include <stdio.h>

int main()
{
    int X, Y;
    scanf("%d %d", &X, &Y);

    if (X < 1 || X >= 20 || Y <= X || Y >= 100000)
    {
        printf("Invalid input.\n");
        return 1;
    }

    int i, j;
    for (i = 1; i <= Y; i += X)
    {
        for (j = i; j < i + X && j <= Y; j++)
        {
            printf("%d", j);
            if (j < i + X - 1 && j < Y)
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

