#include<stdio.h>

int main()
{
	int i = 0;
	int num = 0;
	for (i = 1; i < 100; i += 2)
	{
		
		num += i;
		
	}
	printf("%d\n", num);//奇数一加到100

	int n = 0;
	int num1 = 1;
	scanf_s("%d", &n);
	if (n > 10 || n < 0)
	{
		printf("超出计算范围\n");
	}
	else
	{
		while (n > 0)
		{
			num1 *= n;
			n--;
		}
	}
	printf("%d\n", num1);//n的阶乘



	return 0;
}