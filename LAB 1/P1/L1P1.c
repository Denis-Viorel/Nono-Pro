#include<stdio.h>
int liniar(int v[100], int x, int n)
{
	int i;
	for (i = 0; i < n; i++)
		if (v[i] == x)return 1;
	return 0;
}
int binary(int v[100], int x, int n)
{
	int ok = 0, stanga=0, mijloc=0, dreapta=n-1;
	while (dreapta >= stanga)
	{
		mijloc = (dreapta + stanga) / 2;     // m=dr+(st-dr)/2 //
		if (v[mijloc] > x) dreapta = mijloc - 1;
			else if (v[mijloc] < x) stanga = mijloc + 1;
				else {
						ok = 1;
						break;
					 }
	}
	if (ok == 1)return 1;
		else return 0;
}
int main()
{
	int n, i, x, opt, v[100], aux = 0, j;
	printf("Numarul total de numere="); scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("v[%d]=", i+1); scanf("%d", &v[i]);
	}
	printf("1-Liniar search\n");
	printf("2-Binary search\n");
	printf("0-Exit\n");
	do
	{
		printf("Optiunea dvs. este="); scanf("%d", &opt);
		printf("Numarul cautat este="); scanf("%d", &x);
		switch (opt)
		{
		case 0: printf("Iesire!\n");
			break;
		case 1: if (liniar(v, x, n) == 1)printf("Numarul a fost gasit in sir\n");
					else printf("Numarul nu a fost gasit in sir\n");
				break;
		case 2: for(i=0;i<n-1;i++)
					for(j=i+1;j<n;j++)
						if (v[i] > v[j])
						{
							aux = v[i];
							v[i] = v[j];
							v[j] = aux;
						}
				if (binary(v, x, n) == 1)printf("Numarul a fost gasit in sir\n");
					else printf("Numarul nu a fost gasit in sir\n");
				break;
		default: printf("Optiunea nu a fost implementata! Incercati optiunile 0-2!\n");
				 break;
		}
	} while (opt != 0);
	return 0;
}