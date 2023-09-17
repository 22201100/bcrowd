#include<stdio.h>
int main(){
	int ageindays;
	scanf("%d",&ageindays);
	int years = ageindays / 365;
	ageindays %= 365;
	int months = ageindays / 30;
	ageindays %= 30;
	int days = ageindays;
	printf("%d ano(s)\n %d mes(es)\n %d dia(s)\n",years ,months ,days);
return 0;
}
