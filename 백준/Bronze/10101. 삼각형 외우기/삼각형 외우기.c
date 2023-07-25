#include<stdio.h>

int main()
{

	int A,B,C,SUM;
	

	scanf("%d %d %d", &A,&B,&C);
	SUM = A + B + C;
	
	if (A == 60 && B == 60 && C == 60)
	{
		printf("Equilateral");
	}else if(SUM == 180 && A == B || A == C || B == C)
	{
		printf("Isosceles");
	}
	else if (SUM == 180)
	{
		printf("Scalene");
	}
	else
	{
		printf("Error");
	}
		
	

	

}