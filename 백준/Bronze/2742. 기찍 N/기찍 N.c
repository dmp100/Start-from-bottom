int main() 
{
	int N;
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{

		printf("%d\n", N-i);


	}
	

}


//다른해답

#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	for (int i = n; i > 0; --i) //그냥 N부터 시작하게 뒤집어버림
	{
		printf("%d\n", i);
	}
	return 0;
}
