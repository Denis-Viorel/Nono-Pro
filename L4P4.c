#include<stdio.h>

typedef struct numar
{

	int bit;
	struct numar* urm;

}nod;

nod* adaugare(nod* prim, int bit)
{
	nod* p, *q;

	p = (nod*)malloc(sizeof(nod));
	p->urm = NULL;
	p->bit = bit;

	if (p == NULL)
	{

		printf("Eroare la alocarea de memorie\n");
		exit(0);

	}
	if (prim == NULL) return p;
	else
	{

		q = prim;
		while (q->urm != NULL)q = q->urm;
		p->urm = q->urm;
		q->urm = p;
		return prim;

	}
}

void afisare(nod* prim)
{
	nod* q;
	int v[8], i=0, k=0;

	q = prim;

	for (i = 0; i <= 7; i++)
		v[i] = 0;

	while (q != NULL)
	{

		v[k] = q->bit;
		q = q->urm;
		k++;

	}

	for (i = k-1; i >= 0; i--)
		printf("%d ", v[i]);
}

int main()
{
	int *prim, numar, bit;

	prim = NULL;

	printf("Numarul="); scanf("%d", &numar);

	do
	{

		bit = numar % 2;
		prim = adaugare(prim, bit);
		numar = numar / 2;

	} while (numar != 0);

	afisare(prim);

	return 0;
}