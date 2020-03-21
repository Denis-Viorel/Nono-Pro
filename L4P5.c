#include<stdio.h>

int main()
{
	int n, v[10], i;
	int* vec, *nr;
	vec = &v;
	nr = &n;
	printf("n=");scanf("%d", &n);
	
	for (i = 0; i < *nr; i++)
	{
		printf("v[%d]=", i); scanf("%d", &v[i]);
	}

	(*nr)++;                                             //incrementare valoare pointer
	printf("Incrementare valoare pointer=%d\n", *nr);
			                                            // incrementare valoare al unui pointer 
	(*vec)++;  										   //care ia adresa indexului 0 dintr-un vector oarecare
	printf("Incrementare valoare pointer v[0]=%d\n", *vec);

	return 0;
}