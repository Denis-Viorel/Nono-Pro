#include<stdio.h>

int main()
{
	int n, k = 0, n1, p = 0;
	printf("n="); scanf("%d", &n);
	printf("%d^2=", n);
	n1 = n;
	while (n != 0)
	{
		if ((n & 1) == 1)p = p + (n1 << k);
		n = n >> 1;
		k++;
	}
	printf("%d", p);
	return 0;
}