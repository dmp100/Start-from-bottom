#include <stdio.h>

int main()
{
	int x, y,z;

	scanf("%d", &z);

	for (y = 1; y <= z; y++)
	{
		for (x = 0; x < y; x++)
			printf("*");

		printf("\n");
	}



}