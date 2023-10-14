#include <stdio.h>

int main()
{
    int age, count = 0;
    double total = 0.0;

    while (1)
    {
        scanf("%d", &age);

        // Check if the age is negative to stop input
        if (age < 0)
        {
            break;
        }

        total += age;
        count++;
    }

    if (count > 0)
    {
        double average = total / count;
        printf("%.2lf\n", average);
    }
    else
    {
        printf("No valid ages entered.\n");
    }

    return 0;
}

