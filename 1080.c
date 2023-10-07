#include <stdio.h>
int main()
{
    int a[100];
    int max, position;
    for (int i = 0; i < 100; i++)
    {
        scanf("%d", &a[i]);
    }
    max = a[0];
    position = 1;

    for (int i = 1; i < 100; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            position = i + 1;
        }
    }

    printf("%d\n",max);
    printf("%d\n",position);
    return 0;
}


