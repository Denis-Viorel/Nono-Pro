#include<stdio.h>

int main()
{
	int n, s=0, i, j;
	printf("N="); scanf("%d", &n);
	for (i = 1; i <= n; i++)    //numerele 1-2-3-4-5 n=5
	for (j = 0; j <= 7; j++)    //
		s = s + (1 & (i >> j));
	printf("%d", s);
	return 0;
}