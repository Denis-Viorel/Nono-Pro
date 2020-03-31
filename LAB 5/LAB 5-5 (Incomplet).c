#include<stdio.h>
#include<stdlib.h>

int numar_prim(int x)
{
	int i, ok = 1;
	for (i = 2; i <= x / 2; i++)
		if (x % i == 0)ok = 0;
	return ok;
}

void adaugare_baza2(int x, int stiva2[51][8], int* nivel2)
{
	int i = -1;
	*(nivel2) = *(nivel2)+1;
	while (x != 0)
	{
		if (x % 2 == 1)
		{
			i++;
			*(nivel2) = *(nivel2)+1;
			stiva2[*nivel2][i] = 1;
		}
		else
		{
			i++;
			*(nivel2) = *(nivel2)+1;
			stiva2[*nivel2][i] = 0;
		}
	}
}

void stergere(int stiva10[51], int i, int* nivel10)
{
	int j;
	for (j = i; j <= *(nivel10); j++)
		stiva10[j] = stiva10[j + 1];
	*(nivel10) = *(nivel10)-1;
}

int main()
{
	int stiva10[51], stiva2[51][8], nivel10 = -1, nivel2 = -1;
	int i;
	for (i = 0; i <= 50; i++)
	{
		nivel10++;
		stiva10[nivel10] = i;
	}

	for (i = 0; i <= nivel10; i++)
	{
		if (numar_prim(stiva10[i]) == 1)
		{
			adaugare_baza2(stiva10[i], stiva2, &nivel2);
			stergere(stiva10, i, &nivel10);
		}
	}
	return 0;
}