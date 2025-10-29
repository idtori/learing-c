#include<stdio.h>

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
	int i = 0, sz = 0;
	int arr[10] = { 0 };
	for (i = 0; i < 10; i++)
	{
		scanf_s("%d", &arr[i]);
	}
	sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, sz);
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
}
