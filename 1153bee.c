/*
Factorial of N = N * (N-1) * (N-2) * (N-3) * ... * 1.

Example:
Factorial(5)=5*4*3*2*1=120

*/
#include <stdio.h> // Include the standard input/output library.

int main() { // Define the main
    int N, a, m = 1; // Declare integer variables N, a, and m=factorial, and initialize m=factorial to 1.

    scanf("%d", &N); // Read an integer value into the variable N.

    for (a= N; a>= 1; a--) { // Start a for loop with a initialized to N and iterates as long as a is greater than or equal to 1, decrementing a in each iteration.
        m* =a; // Calculate the m=factorial by multiplying the current value of m=factorial by a.
    }

    printf("%d\n", m); // Print the final m=factorial value.

    return 0; // Return 0 to indicate successful program execution.
}
