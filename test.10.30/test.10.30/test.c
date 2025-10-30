#include<stdio.h>
#include<string.h>
void reverse(char* left,char* right)//颠倒
{
	while (left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}
}
int main()
{
	//int a = 0, b = 0;
	//scanf_s("%d %d", &a, &b);
	////寻找最小公倍数
	////余数为0
	//int num = 0;
	//int max = a > b ? a : b;
	//for (num = max; num <= a * b; num++)
	//{
	//	if (num % a == 0 && num % b == 0)
	//	{
	//		printf("%d", num);
	//		break;
	//	}
	//}


	char arr[101] = {0};
	gets(arr);
	int len = strlen(arr);
	reverse(arr, arr + len - 1);//颠倒所有字符串
	char* start = arr;
	while (*start)
	{
		char* end = start;
		while (*end != ' '&&*end != '\0')
		{
			end++;
		}
		reverse(start, end - 1);//在没遇到空格之前，颠倒一个单词
		if (*end != '\0')
		{
			end++;
		}
		//跳过空格
		start = end;//再次将end赋值给start是为了让它作为下一个起点
	}
	printf("%s\n", arr);
	return 0;
}