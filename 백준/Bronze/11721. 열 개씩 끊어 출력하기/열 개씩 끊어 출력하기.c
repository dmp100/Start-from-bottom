#include <stdio.h>
#include <string.h>    // strlen 함수가 선언된 헤더 파일
#pragma warning(disable : 4996)
int main()
{
	char str[100] = { 0. };

	scanf("%s", str);

	printf("%c", str[0]);
	for (int i = 1; i < strlen(str); i++)
	{
		if (i % 10 == 0) printf("\n");
		printf("%c", str[i]);
	}

	return 0;
}