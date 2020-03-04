#include<stdio.h>

int main()
{
	int v[125], i, x=0,k;
	for (i = 0; i < 125; i++)
		v[i] = 0;
	do
	{
		printf("x="); scanf("%d", &x);

		if (x == 0)break;

		v[x / 8] = v[x / 8] | (1 << x % 8);
	}while (1);

	for (i = 0; i < 125; i++)
	{
		x = 8 * i;

		while (v[i] != 0)
		{
			if (v[i] % 2 == 1)printf("Numarul %d exista \n", x);

			v[i] = v[i]/2;

			x++;
		}

	}
	return 0;
}