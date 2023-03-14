

//4-05

#include <stdio.h>

int main()
{

	int x;
	const double SQMETER_PER_PYEONG = 3.3058;

	printf("평을 입력하세요");
	scanf_s("%d", &x);

	double a;
	a = x * SQMETER_PER_PYEONG;

	printf("%lf평방미터 입니다", a);

}