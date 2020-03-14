#include<stdio.h>

int main()
{
	int n, s=0, i, j;
	printf("N="); scanf("%d", &n);
	for (i = 1; i <= n; i++)
	for (j = 0; j <= 7; j++)
		s = s + (1 & (i >> j));
	printf("%d", s);
	return 0;
}