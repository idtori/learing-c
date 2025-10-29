#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>//计算长度头文件
#define ADD(x,y) ((x)+(y))//宏
#include<windows.h>
#include<stdlib.h>
#include<time.h>
void test()//void无返回
{
	static int a = 1;//static修饰局部变量，不销毁输出值，放入静态区
	a++;//先赋值，后加减
	printf("%d ", a);
}
int Max (int x, int y)
{
	if (x > y)
		return x;
	else
		return y;//定义函数
}
int main()
{
	printf("hello world\n");
	printf("hello world\n");
	printf("%zu\n",sizeof(long));
    int num1 = 0;
	int num2 = 0;
	scanf_s("%d %d", &num1, &num2);
    int sum = num1 + num2;
	printf("%d\n", sum);
	char arr1[] = "asdftfkyg";
	printf("%s\n", arr1);//%s打印字符串
	printf("%d\n", strlen(arr1));
	("%c\n", '\130');//%c打印字符
	printf("大学\n");
	printf("xuema(1/0)");
	int input = 1;
	scanf_s("%d", &input);
	if (input == 1)
	{
		printf("may be success");
	}
	else
	{
		printf("must be comfortable");
	}
	int line = 0;
	while (line<2000)//while循环，if语句不能加分号阻隔
	{        
		printf("study hard %d\n", line);
		line++;
	}
	if (line >= 2000)
	{
		printf("success");
	}
	else
    {
		printf("failure");
	}
	int arr2[10] = {10,11,12,13,14,15,16,17,18,19};
	int i = 0;
	while (i < 10)
	{
		printf("%d ", arr2[i]);
		i = i + 1;
	}
	int a = 40;
	int c = 212;
	int b = (-8+22)*a-10+c/2;
	printf("%d\n", b);
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int r = Max(a, b);
	printf("%d\n", r);



	scanf("%d", &a);
	if (a < 0)
		b = -1;
	else if (a == 0)
		b = 0;
	else
		b = 1;
	printf("%d\n", b);




	float q = 7 / 2.0;
	printf("%f\n", q);
	int i = 0;
	while (i < 10)
	{
		test();
		i++;
	}
	int c = ADD(a, b);
	printf("%d\n", c);
	float* p = &q;
	*p = 20;
	printf("%f\n", q);



	scanf_s("%d %d", &a,&b);
	int c = a / b;
	int d = a % b;
	printf("%d %d", c,d);
	int num = 1;



	scanf_s("%d", &num);
	if (num%2 == 1)
	{
		printf("奇数");
	}
	else
	{
		printf("偶数");
	}


	while(num>0 && num<=100)
	{
		if (num % 2 == 1)
			printf("%d ", num);
		num++;
	}



	int ch = 0;
	while ((ch = getchar()) != EOF)
	{
		if (ch < '0' || ch>'9')
			continue;
		putchar(ch);
	}


   int arr[] = { 73, 32, 99, 97, 110, 32,100, 111, 32, 105, 116, 33 };
	int i = 0, se = sizeof(arr) / sizeof(arr[0]);
	while (se > i)
	{
		printf("%c", arr[i]);
		i++;
	}


	int year = 0, month = 0, day = 0;
	scanf_s("%4d%2d%2d", &year, &month, &day);//%4d指的是取前四位，%02指保证取两位
	printf("year=%d\n", year);
	printf("month=%02d\n", month);//%.2f指取小数点后两位
	printf("day=%02d\n", day);
    float math = 0.//0f;加f表示为float类型，初始化方式





    int arr[4] = { 0 };//建立四个变量初始化
	int i = 0;
	while (i < 4)//四次循环
	{
		scanf("%d", &arr[i]);//输入四个数字
		i++;
	}
	int max = arr[0];//假设第一个元素最大
	i = 1;//从第二个元素开始比较
	while(i < 4)
	{
		if (arr[i] > max)
		{
			max = arr[i];//谁大谁是max
		}
		i++;
	}
	printf("%d", max);





	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			printf("hehe\n");
	}



   int n = 0, i = 1, num = 1, ret = 0;
    scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
    num = num * i;
	ret = num + ret;
	}
	printf("%d", ret);
    


    #define N 15
    int left = 0, right = 0, mid = 0, flag = 0, i = 0, arr[N] = { 0 }, loca = 0, key = 0;
	char c = 0;
	printf("请输入数字  arr[i]>=arr[i-1]:\n");
	scanf_s("%d", &arr[0]);
	i = 1;
	while (i < N)
	{
		scanf_s("%d", &arr[i]);
		if (arr[i] >= arr[i - 1])
			i++;
		else
			printf("请重新输入");
	}
	printf("\n");
	for (i = 0; i < N; i++)
	{
		printf("%4d", arr[i]);
	}
	printf("\n");
	flag = 1;//判断循环结束
	while (flag)
	{
		printf("输入要查找的数据：");
		scanf_s("%d", &key);
		left = 0, right = N-1;
		loca = 0;
		if (key<arr[0] || key>arr[N-1]) 
			loca = -1;
		while (loca == 0 && left <= right)
		{
			mid = (left + right) / 2;
			if (key == arr[mid])
			{
				loca = mid;
				printf("%d的位置在%d\n", key, loca + 1);
			}
			else if (key < arr[mid])
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

	





    char arr1[] = {"hello world!!"};
	char arr2[] = { "#############" };
	int sz = strlen(arr1) - 1;
	int right = sz, left = 0;
	int i = 0;
	while (left <= right)
	{
		arr2[right] = arr1[right];
		arr2[left] = arr1[left];
		system("cls");//需要头文件stdlib.h, 清空屏幕
		printf("%s\n", arr2);
		Sleep(1000);//需要头文件windows.h
		right--; left++;
	}
    



     int i = 0;
     char password[20] = { 0 };
     for (i = 0; i < 3; i++)
	{
		printf("请输入密码:");
		scanf("%s", password);
		if (strcmp(password, "qwer") == 0)
		{
            printf("密码正确 登录成功\n");
			break;
		}
		else
			printf("密码错误，请重新输入\n");
	}
	if (i == 3)
		printf("密码错误三次，推出程序");
	return 0;
}





void menu()
{
	printf("**********************\n");
	printf("***** 猜数字游戏 *****\n");
	printf("******* 1.play *******\n");
	printf("******* 0.exit *******\n");
	printf("**********************\n");
}
void game()
{
	int guess = 0;
	int ret = rand() % 100 + 1;
	int flag = 1;
	while (flag)
	{
		printf("猜数字：");
		scanf_s("%d", &guess);
		if (ret > guess)
			printf("猜小了\n");
		else if (ret < guess)
			printf("猜大了\n");
		else
		{
            printf("恭喜你！猜中了!\n");
			flag = 0;
		}
	}
}
int main()
{
	int input = 0;
    srand((int unsigned)time(NULL));
	do
	{
		menu();
		printf("请选择：");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("请重新选择\n");
			break;
		}
	} while (input);


	return 0;
}
