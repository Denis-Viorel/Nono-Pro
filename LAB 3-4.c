#include<stdio.h>

int main()
{
	int n, m, p=0;
	printf("n="); scanf("%d", &n);
	printf("m="); scanf("%d", &m);
	printf("%d*%d=", n, m);
	while (m != 0)
	{
		if (m & 1) p = p + n;
		n = n << 2;
		m = m >> 2;
	}
	printf("%d", p);
	return 0;
}