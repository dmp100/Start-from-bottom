#include<stdio.h>

int main()
{

	//int a, b, c;
	//
	//scanf_s("%d", &a);

	//for (int i = 0; i <=a; i++)
	//{
	//	for (int j = i;j<i;j++)
	//	{
	//		printf(" ");
	//	}
	//	for (int k = i; k<i; k++)
	//	{
	//		printf("*");
	//	}
	//	printf("\n");
	//}
	int N;
	scanf("%d", &N);
	for (int i = N; i > 0; i--)
	{
		for (int j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}
	return 0;

	

}