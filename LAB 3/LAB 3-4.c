//*
#include<stdio.h>
#include <stdlib.h>
int main()
{
	int a, b, p = 0;
	printf("a= ");
	scanf("%d", &a);
	printf("b= ");
	scanf("%d", &b);
	while (b != 0)
	{
		if (b & 1)
			p = p + a;
		a = a << 1;
		b = b >> 1;
	}
	printf("%d", p);  
	system("pause");
	return 0;
}
//*