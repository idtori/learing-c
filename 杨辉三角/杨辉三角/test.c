#include<stdio.h>

int Yang(int i, int j)
{
	if (i == 0 || j == 0)
	{
		return 1;
	}
	else
	{
		return Yang(i - 1, j) + Yang(i - 1, j - 1);
	}
}
int main()
{
	int n = 0;
	scanf_s("%d", &n);
	int i = 0;
	for (i = 0; i < n; i++)
	{
		int j = 0;
		for (j = 0; j < i + 1; j++)
		{
			printf("%d ", Yang(i, j));
		}
		printf("\n");
	}
	return 0;
}