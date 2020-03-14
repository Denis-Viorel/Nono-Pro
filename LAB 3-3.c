#include<stdio.h>

int main()
{
	int x, k=0;
	printf("X="); scanf("%d", &x);   //numarul curent

	while (k != 7)                   //testare x=0
	{
		if ((1 & (x >> k)) == 1)break;
		k++;
	}
	if (k == 7)printf("Numarul citit este 0\n");

	if ((1 & (x >> 7)) == 0  && k!=7)printf("Numar pozititv\n");              //testare x>0
	else if((1 & (x >> 7)) == 1 && k != 7) printf("Numar negativ\n");         //testare x<0
	return 0; 
}