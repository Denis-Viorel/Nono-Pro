#include<stdio.h>
#include<math.h>

void afisare(int v[8])
{
	int i;
	for (i = 7; i >= 0; i--)
		printf("%d ", v[i]);
	printf("\n");
}

int trans10(int v[8])
{
	int i,x=0;
	for (i = 7; i >= 0; i--)
		if (v[i] == 1)x = x + pow(2, i);
	return x;
}
int main()
{
	int n, x, i, v[8], k = 0;
	printf("n="); scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		for (k = 0; k < 8; k++)
			v[k] = 0;
		printf("x="); scanf("%d", &x);
		k = 0;
		while (x != 0)
		{
			if (x % 2 == 1)v[k] = 1;
			else v[k] = 0;
			k++;
			x = x / 2;
		}
		afisare(v);
		for (x = 7; x >= 0; x--)
		{
			v[x] = v[x]^1;
		}
		afisare(v);
		printf("%d \n", trans10(v));
	}
}