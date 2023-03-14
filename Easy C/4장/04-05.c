//4-07
#include <stdio.h>

int main()
{

	double x, y;

	printf("질량(kg):");
	scanf_s("%lf", &x);

	printf("속도(m/s):");
	scanf_s("%lf", &y);

	double z;
	z = 0.5 * x * y * y;

	printf("운동에너지(J): %lf", z);
}
