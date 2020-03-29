#include<stdio.h>
#include<stdlib.h>

void adaugare_stiva10(int x, int stiva10[8], int *nivel10)
{

	int copie;

	copie = x;

	while (copie != 0)
	{

		*(nivel10) = *(nivel10)+1;
		stiva10[*nivel10] = copie % 10;
		copie = copie / 10;

	}

}

void adaugare_stiva2(int x, int stiva2[8], int *nivel2)
{

	int copie;
	copie = x;

	while (copie != 0)
	{

		if (copie % 2 == 1) {
								*(nivel2) = *(nivel2)+1;
								stiva2[*nivel2] = 1;
							}
		else
		{
			*(nivel2)=*(nivel2)+1;
			stiva2[*nivel2] = 0;
		}

		copie = copie / 2;

	}
}

int verificare_palindrom(int stiva[8], int nivel)
{
	int i, ok = 1;
	for (i = 0; i <= nivel; i++)
		if (stiva[i] != stiva[nivel - i])ok = 0;
	if (ok == 1)return 1;
	else return 0;
}

int main()
{
	int x, stiva10[8], stiva2[8], nivel10=-1, nivel2=-1;
	do
	{
		printf("x="); scanf("%d", &x);
	} while (x > 65535);

	adaugare_stiva10(x, stiva10, &nivel10);
	adaugare_stiva2(x, stiva2, &nivel2);
	if (verificare_palindrom(stiva2, nivel2) == 1 && verificare_palindrom(stiva10, nivel10) == 1)
	{
		printf("Numarul %d este palindrom in format zecimal si binar!\n", x);
		printf("Forma binara=%d ", x);
		for (x = 0; x <= nivel2; x++)
			printf("%d ", stiva2[x]);
	}
	else printf("Numarul nu respecta criteriile!\n");
	system("pause");
	return 0;
}