#include<stdio.h>
void print(unsigned int n)
{
	if (n > 9)
	{
		print(n / 10);//函数的递归
	}
	printf("%d ", n % 10);
}
int my_strlen1(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int my_strlen(char arr[])
{
	if (*arr != '\0')
		return 1 + my_strlen(arr + 1);
	else
		return 0;
}
int fac(int n)
{
	int ret = 1;
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		ret *= i;
	}
	return ret;
}
int main()
{
	//unsigned int num = 0;
	//scanf_s("%u", &num);
	///*while (num)
	//{
	//	printf("%d ", num % 10);
	//	num /= 10;
	//}*/
	//print(num);//实现将数字每一位打印出来
	char arr[] = "abc";
	int len = my_strlen(arr);
	printf("%d\n", len);
	int n = 0;
	printf("%d", fac(n));
	return 0;
}