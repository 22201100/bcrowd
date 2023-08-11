#include<stdio.h>
int main()
{
    int a,year,month,day;
    scanf("%d",&a);
    year = a/365;
    day = a%365;
    month = day/30;
    day = day%30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",year,month,day);
    return 0;
}

