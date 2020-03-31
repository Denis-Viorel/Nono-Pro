#include<stdio.h>

int main()
{
	int c, n, x, i;
	printf("C="); scanf("%d", &c);   //pozitia bitului
	printf("N="); scanf("%d", &n);   //numarul de elemente
	
	for (i = 0; i < n; i++)
	{
		printf("X="); scanf("%d", &x);   //numarul actual
		if ((1 & (x >> c)) == 1)printf("%d ", x);
	}
}