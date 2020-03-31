#include<stdio.h>

void suma(int n, int *s)
{
	*s = *s + n;
}

int main()
{
	int n, s = 0;
	do
	{

		printf("n="); scanf("%d", &n);
		suma(n, &s);

	} while (n != 0);

	printf("%d", s);

	return 0;
}