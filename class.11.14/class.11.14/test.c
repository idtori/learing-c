#include<stdio.h>

int isPrime(int x)
{
	int m = 0;
	int i = 0;
	for (i = 2; i < x; i++)
	{
		m = x % i;
		if ( m == 0)
		{
			return 0;
		}
			
	}
	return 1;//ËØÊý·µ»Ø1
}
int main()
{
	int num = 0;
	int num1 = 0;
	int a = 0;
	int b = 0;
	int i = 0;
	scanf_s("%d %d", &a, &b);
	num = a;
	for (i = a; i <= b; i++)
	{
		num1 = isPrime(num);
		if (num1 == 1)
			{
				printf("%d ", num);
			}
		num++;
	}
	return 0;
}