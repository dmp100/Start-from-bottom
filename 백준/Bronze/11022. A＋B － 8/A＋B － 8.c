#include <stdio.h>
#include <stdlib.h>


int main()
{
	int A, B, k;
	int plus;
	
	scanf("%d", &k);
	
	for (int i = 1; i <=k; i++)
	{ 
		scanf("%d %d",&A, &B);
		plus = A + B;
		printf("Case #%d: %d + %d = %d\n",i,A,B,plus );
	}
		

}
