#include<stdio.h>

int main()
{
	int *a, *b, *s;

	a = (int*)malloc(sizeof(a));
	b = (int*)malloc(sizeof(b));
	s = (int*)malloc(sizeof(s));

	printf("a="); scanf("%d", a);
	printf("b="); scanf("%d", b);

	(*s) = (*a) + (*b);

	printf("%d+%d=%d", *a, *b, *s);

	free(a); free(b); free(s);
	return 0;
}