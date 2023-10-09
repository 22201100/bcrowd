#include <stdio.h>

int main() {
    int interGoals, gremioGoals, repeat, grenais = 0, interWins = 0, gremioWins = 0, draws = 0;

    do {
        scanf("%d %d", &interGoals, &gremioGoals);

        if (interGoals > gremioGoals) {
            interWins++;
        } else if (gremioGoals > interGoals) {
            gremioWins++;
        } else {
            draws++;
        }

        grenais++;

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &repeat);

    } while (repeat == 1);

    printf("%d grenais\n", grenais);
    printf("Inter:%d\n", interWins);
    printf("Gremio:%d\n", gremioWins);
    printf("Empates:%d\n", draws);

    if (interWins > gremioWins) {
        printf("Inter venceu mais\n");
    } else if (gremioWins > interWins) {
        printf("Gremio venceu mais\n");
    } else {
        printf("Não houve vencedor\n");
    }

    return 0;
}

/*explanation:
   We start by including the necessary header file, <stdio.h> for standard input/output operations.

Inside the main function, we declare variables to keep track of various statistics:

interGoals: Number of goals scored by Inter.
gremioGoals: Number of goals scored by Gremio.
repeat: Input variable to decide whether to continue with another match (1 for yes, 2 for no).
grenais: Total number of GRENAIS.
interWins: Total number of victories by Inter.
gremioWins: Total number of victories by Gremio.
draws: Total number of draws.
We use a do-while loop to repeatedly input data for each GRENAI until the user decides to stop (input is not equal to 1).

Inside the loop, we read the number of goals scored by both teams (interGoals and gremioGoals) and update the statistics accordingly.

We increment the grenais counter with each GRENAI.

We prompt the user with "Novo grenal (1-sim 2-nao)" and read their choice into the repeat variable.

After the loop exits, we print the statistics as requested.

Finally, we determine the team that won the most GRENAIS or indicate a tie if both teams won an equal number of GRENAIS.*/


