#include<stdio.h>

int main()
{
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		int k = 0;
		for (j = 0; j < 6 - 2 * i; j++)
		{
			printf(" ");
		}
		for (k = 0; k < 1 + 2 * i; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 0; i < 4; i++)
	{
		int j = 0;
		int k = 0;
		for (j = 0; j < i; j++)
		{
			printf(" ");
		}
		for (k = 0; k < 7 - 2 * i; k++)
		{
			printf("*");
		}
		printf("\n");
	}


	float h = 100;
	int n = 0;//»Øµ¯´ÎÊý
	float s = 0;
	for (n = 0; n < 10; n++)
	{
		s += h + h / 2;
		h /= 2;
	}
	printf("%f %f", h, s-h);
	return 0;
}