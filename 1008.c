#include<stdio.h>
int main()
{
    int NUMBER,WORKED_HOUR;
    float AMOUNT, SALARY;
    scanf("%d%d%f",&NUMBER,&WORKED_HOUR, &AMOUNT);
    SALARY = WORKED_HOUR *AMOUNT ;
    printf("NUMBER = %d\n", NUMBER);
    printf("SALARY = U$  %.2f\n", SALARY);
    return 0;
}
