#include<stdio.h>

int main()
{
	int n, m;
	printf("n="); scanf("%d", &n);
	printf("m="); scanf("%d", &m);
	printf("Valorile initiale: n=%d m=%d\n", n, m);
	n = n - m;
	m = n + m;
	n = m - n;
	printf("Valorile interschimbate: n=%d m=%d", n, m);
	return 0;
}