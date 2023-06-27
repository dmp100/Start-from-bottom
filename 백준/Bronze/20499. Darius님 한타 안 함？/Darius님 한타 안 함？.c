#include<stdio.h>



int main() 
{
	int K, D, A,KING;
	scanf("%d/%d/%d", &K, &D, &A);
	
	KING = K + A;

	if (KING < D || D == 0)
		printf("hasu");
	
	else
		printf("gosu");
	
}