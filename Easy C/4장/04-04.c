

//4-05

#include <stdio.h>

int main()
{

	int x;
	const double SQMETER_PER_PYEONG = 3.3058;

	printf("���� �Է��ϼ���");
	scanf_s("%d", &x);

	double a;
	a = x * SQMETER_PER_PYEONG;

	printf("%lf������ �Դϴ�", a);

}