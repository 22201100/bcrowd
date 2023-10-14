#include <stdio.h>

int main()
{
    int N;
    int factorial = 1;

    // Read the input value N
    scanf("%d", &N);

    // Check if N is within the valid range
    if (N < 0 || N >= 13)
    {
        printf("Invalid input. N should be between 0 and 12.\n");
        return 1; // Exit with an error code
    }

    // Calculate the factorial
    for (int i = 1; i <= N; i++)
    {
        factorial *= i;
    }

    // Print the result
    printf("%d\n", factorial);

    return 0; // Exit with success
}
