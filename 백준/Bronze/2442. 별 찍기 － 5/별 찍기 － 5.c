#include<stdio.h>

int main()
{

	int N;
	int i, j;

	scanf("%d", &N);

	for (i = 1; i <= N; i++)
	{
		for (j = N - i; j > 0; j--)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * i - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}

}