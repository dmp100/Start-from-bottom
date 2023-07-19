#include<stdio.h>

int main()
{

	int N;
	int i, j;

	scanf("%d", &N);

	for (i = 1; i <= N; i++) //N번줄 및 개행 반복하기위한 for문
	{
		for (j = 1; j < i; j++) //공백을 출력하기 위한 for문
		{
			printf(" ");
		}
		for (j = N; j >= i; j--) //*을 출력하기 위한 for문
		{
			printf("*");
		}	printf("\n");
	}

}