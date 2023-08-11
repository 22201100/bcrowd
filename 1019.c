#include<stdio.h>
int main()
{
    int s,m,h,N;
    scanf("%d",&N);
    h = N/3600;
    s = N%3600;
    m = s/60;
    s= s%60;
    printf("%d:%d:%d\n",h,m,s);
    return 0;
}
