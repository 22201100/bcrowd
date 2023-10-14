#include <stdio.h>

int main()
{
    int X, Z, sum = 0, count = 0;

    // Read X
    scanf("%d", &X);

    // Read Z and validate
    do
    {
        scanf("%d", &Z);
    }
    while (Z <= X);

    // Calculate the sum of integers in sequence
    while (sum <= Z)
    {
        sum += X + count;
        count++;
    }

    // Print the result
    printf("%d\n", count);

    return 0;
}

