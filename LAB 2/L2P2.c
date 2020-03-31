#include<stdio.h>

int main()
{
	int v[100], n=-1, opt, drept, i, k;
	printf("0-Iesire!\n");
	printf("1-Setare drepturi!\n");
	printf("2-Afisare drepturi!\n");
	do
	{
		printf("Optiunea dvs. este="); scanf("%d", &opt);
		switch (opt)
		{
		case 0: break;

		case 1: n++;
				printf("Persoana numarul [%d]\n", n+1);                   //numarul persoanei
				v[n] = 0;
				printf("Drepturile:\n");
				printf("0-Iesire 1-Read 2-Write 3-Delete 4-Rename 5-Copy\n");
				do
				{

					printf("Dreptul acordat="); scanf("%d", &drept);
					v[n] = v[n] | (1 << drept);

				} while (drept != 0);
				break;

		case 2: 
			for (i = 0; i <= n; i++)
			{
				k = 0;
				printf("Dreptrile acordate persoanei [%d] sunt: ", i+1);
				drept = v[i];
			while (drept != 0)
			{
				if (drept % 2 == 1)
				{
					if (k == 0)printf("Read ");
					if (k == 1)printf("Write ");
					if (k == 2)printf("Delete ");
					if (k == 3)printf("Rename ");
					if (k == 4)printf("Copy ");
				}
				k++;
				drept = drept / 2;
			}
			printf("\n");
			}
		}
	} while (opt != 0);

	return 0;

}