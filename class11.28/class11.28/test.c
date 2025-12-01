#include<stdio.h>
#include<time.h>

int main()
{
	int arr[4][6] = { 0 };
	int m = 0, n = 0;//判断最小值模拟i,j
	int r1 = 0;
	int c1 = 0;
	int r2 = 0;
	int c2 = 0;//r,c用于接收行列坐标
	srand((unsigned) time(NULL));
	int i = 0;
	int j = 0;
	for (i = 0; i < 4; i++)
	{
		int j = 0;
		for (j = 0; j < 6; j++)
		{
			arr[i][j] = rand();
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	int max = arr[0][0];
	int min = arr[0][0];
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 6; j++)
		{
			m = i;
			n = j;
			if (arr[i][j] > max)
			{
				max = arr[i][j];
				r1 = i + 1;
				c1 = j + 1;
			}
			if (arr[m][n] < min)
			{
				min = arr[m][n];
				r2 = m + 1;
				c2 = n + 1;
			}
		}
	}
	printf("最大值：%d 第%d行 第%d列\n", max,r1,c1);
	printf("最小值：%d 第%d行 第%d列", min, r2, c2);
	return 0;
}