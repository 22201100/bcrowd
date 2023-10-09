#include <stdio.h>
int main()
{
    int i,n, h, d, g;
    scanf("%d", &n); // Read the number of test cases.
    for(i=0;i<n;i++) { // Start a for loop with i initialized to n and iterates as long as a is greater than or equal to 1, decrementing a in each iteration.
        scanf("%d %d %d", &h, &d, &g); // Read the tree's height, diameter, and branches.
        if (h >= 200 && h <= 300 ){ // Check if all conditions are met.
            if(d>=50)  // Check if all conditions are met.
            if(g>=150) { // Check if all conditions are met.
            printf("Sim\n"); // Print "Sim" if all conditions are met.
            continue ;}
        } else {
            printf("Nao\n"); // Print "Nao" if any condition is not met.
        }
    }
  return 0; // Return 0 to indicate successful program execution.(not necessary)
}
