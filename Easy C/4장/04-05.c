//4-07
#include <stdio.h>

int main()
{

	double x, y;

	printf("����(kg):");
	scanf_s("%lf", &x);

	printf("�ӵ�(m/s):");
	scanf_s("%lf", &y);

	double z;
	z = 0.5 * x * y * y;

	printf("�������(J): %lf", z);
}
