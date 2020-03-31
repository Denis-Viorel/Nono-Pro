int main()
{
	int n, i, nr;
	printf("n= ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("nr= ");
		scanf("%d", &nr);
		if (((nr << 31) | 0) == 0)
			printf("\n%d este par\n", nr);
		else
			printf("\n%d este impar\n", nr);
	}
	system("pause");
	return 0;

}