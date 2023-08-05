#include<stdio.h>
int main ()
{
    float X1, Y1, X2, Y2, Distance;
    scanf("%f%f%f%f\n",&X1,&Y1,&X2,&Y2);
    Distance = sqrt ((X2 - X1) * (X2 -X1) + (Y2 - Y1) * (Y2 - Y1));
    printf("%.4f\n",Distance);
    return 0;

}

