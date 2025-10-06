#include"game.h"

void menu()
{
	printf("******************************\n");
	printf("******* 1.play  0.exit *******\n");
	printf("******************************\n");
}

void game()
{
	char board[ROW][COL] = { 0 };//棋盘
	Initboard(board, ROW, COL);//棋盘内容初始化
	displayboard(board, ROW, COL);//打印棋盘
	while (1)//交替下棋
	{
		playermove(board, ROW, COL);
		system("cls");
		displayboard(board, ROW, COL);
		ComputerMove(board, ROW, COL);
		system("cls");
		displayboard(board, ROW, COL);
	}
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
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
			printf("选择错误,请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}