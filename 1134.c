#include <stdio.h>

int main() {
    int alcohol = 0, gasoline = 0, diesel = 0, code;

    while (1) {
        scanf("%d", &code);

        if (code == 4)
            break;

        switch (code) {
            case 1:
                alcohol++;
                break;
            case 2:
                gasoline++;
                break;
            case 3:
                diesel++;
                break;
            default:
                continue; // Skip invalid codes
        }
    }

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcohol);
    printf("Gasolina: %d\n", gasoline);
    printf("Diesel: %d\n", diesel);

    return 0;
}

