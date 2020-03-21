#include<stdio.h>

int main()
{
	int a, b, *aux;

	aux = (int*)malloc(sizeof(aux));

	printf("a="); scanf("%d", &a);
	printf("b="); scanf("%d", &b);

	*aux = a;
	a = b;
	b = *aux;

	printf("a=%d b=%d", a, b);

	free(aux);
	return 0;
}