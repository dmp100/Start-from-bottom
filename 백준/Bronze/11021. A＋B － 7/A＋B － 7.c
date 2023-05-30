//두 정수 A와 B를 입력받고, A+B 출력
int main() 
{
	int x,y;
	scanf("%d", &x);
	for (int i = 1; i <= x; i++)
	{
		int a = 0;
		int b = 0;
		scanf("%d", &a);
		scanf("%d",&b);
		
		y = a + b;
		printf("Case #%d: %d\n",i, y);
	}
}

