#include<stdio.h>
#define N 7
void bubble_sort(int arr[], int sz)//冒泡排序
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)//需要九次冒泡
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)//每一次冒泡
		{
			if (arr[j] > arr[j + 1])
			{
				int tem = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tem;//交换位置
			}
		}
	}
}
int main()
{
	int i = 0, sz = 0;//排序
	int arr[N] = { 0 };
	for (i = 0; i < N; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	for (i = 0; i < N; i++)
	{
		printf("%d ", arr[i]);
	}

	printf("\n");//查找

	int left = 0, right = 0, mid = 0, flag = 0, arr1[N] = { 0 }, loca = 0, key = 0;
	char c = 0;
	printf("请输入数字  arr[i]>=arr[i-1]:\n");
	scanf_s("%d", &arr1[0]);
	i = 1;
	while (i < N)
	{
		scanf_s("%d", &arr1[i]);
		if (arr1[i] >= arr1[i - 1])
			i++;
		else
			printf("请重新输入");
	}
	printf("\n");
	for (i = 0; i < N; i++)
	{
		printf("%4d", arr1[i]);
	}
	printf("\n");
	flag = 1;//判断循环结束
	while (flag)
	{
		printf("输入要查找的数据：");
		scanf_s("%d", &key);
		left = 0, right = N - 1;
		loca = 0;
		if (key<arr1[0] || key>arr1[N - 1])
		loca = -1;
		while (loca == 0 && left <= right)
		{
			mid = (left + right) / 2;
			if (key == arr1[mid])
			{
				loca = mid;
				printf("%d的位置在%d\n", key, loca + 1);
			}
			else if (key < arr1[mid])
				right = mid - 1;
			else
				left = mid + 1;
		}
		if (loca == -1 || loca == 0)
			printf("没有该数字\n");
		getchar();
		printf("是否继续查找Y/N\n");
		c = getchar();
		if (c == 'N')
		flag = 0;
	}
}