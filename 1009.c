#include<stdio.h>
int main()
{
    char Name;
    double Salary,Receive,TOTAL;
    scanf("%s",&Name);
    scanf("%lf%lf",&Salary,&Receive);
    TOTAL =  Salary+Receive*.15;
    printf("TOTAL = R$ %.2lf\n",TOTAL);
    return 0;
}
