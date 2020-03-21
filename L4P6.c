#include<stdio.h>

int sum(int a, int b, int *suma)
{
	*suma = a + b;

	return (*suma);
}

int main()
{
	int a, b, *suma=0;

	suma = (int*)malloc(sizeof(suma));

	printf("a="); scanf("%d", &a);
	printf("b="); scanf("%d", &b);

	printf("Suma=%d", sum(a, b, &suma));

	return 0;
}