#include<stdio.h>

void menu()
{
	printf("****1.Add   2.Sub*****\n");
	printf("****3.Mul   4.Div*****\n");
	printf("****0.Exit************\n");
	printf("**********************\n");
}
void Add(int x,int y)
{
	return x + y;
}
void Sub(int x, int y)
{
	return x - y;
}
void Mul(int x, int y)
{
	return x * y;
}
void Div(int x, int y)
{
	return x / y;
}
void calc(int (*com)(int, int))
{
	int ret = 0;
	int x = 0, y = 0;
	printf("请输入操作数：");
	scanf_s("%d %d", &x, &y);
	ret = com(x, y);
	printf("%d\n", ret);
}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择：");
		scanf_s("%d", &input);
		switch (input)
		{
		case 0:
			printf("退出\n");
		case 1:
			calc(Add);
			break;
		case 2:
			calc(Sub);
			break;
		case 3:
			calc(Mul);
			break; 
		case 4:
			calc(Div);
			break;
		default :
			printf("选择错误");
			break;
		}
	} while (input);
	return 0;
}