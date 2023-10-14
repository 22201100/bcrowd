#include <stdio.h>

int main()
{
    int N;
    long long fib[46];

    // Initialize the first two numbers in the Fibonacci sequence
    fib[0] = 0;
    fib[1] = 1;

    // Read the input value for N
    scanf("%d", &N);

    // Calculate and store the Fibonacci sequence up to N
    for (int i = 2; i <= N; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    // Print the first N Fibonacci numbers
    for (int i = 0; i < N; i++)
    {
        printf("%lld", fib[i]);
        if (i < N - 1)
        {
            printf(" ");
        }
    }

    printf("\n");

    return 0;
}


