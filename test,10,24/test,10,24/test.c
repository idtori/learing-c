#include<stdio.h>

int main()
{
	int num = 0;
	scanf_s("%d", &num);
	if (num % 2 == 1)
	{
		printf("奇数");
	}
	else
	{
		printf("偶数");
	}

	int year = 0;
	scanf_s("%d", &year);
	if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
	{
		printf("闰年");
	}
	else
	{
		printf("不是闰年");
	}
	float bonus = 0;//奖金
	int profit = 0;//利润
	scanf_s("%d", &profit);
	if (profit <= 10)
	{
		bonus = profit * 0.1;
		printf("%f", bonus);
	}
	else if (profit > 10 && profit <= 20)
	{
		bonus = 1 + (profit - 10) * 0.075;
		printf("%f", bonus);
	}
	else if (profit > 20 && profit <= 40)
	{
		bonus = 1.75 + (profit - 20) * 0.05;
		printf("%f", bonus);
	}
	else if (profit > 40 && profit <= 60)
	{
		bonus = 2.75 + (profit - 40) * 0.03;
		printf("%f", bonus);
	}
	else if (profit > 60 && profit <= 100)
	{
		bonus = 3.35 + (profit - 60) * 0.015;
		printf("%f", bonus);
	}
	else
	{
		bonus = 3.95 + (profit - 100) * 0.01;
		printf("奖金为%f", bonus);
	}
	return 0;
}