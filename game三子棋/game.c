#include"game.h"


void Initboard(char board[ROW][COL],int row,int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col;j++)
		{
			board[i][j] = ' ';
		}
	}
}



void displayboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)//打印空格和右边的竖线
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)//打印分割线
		{
			int j = 0;
			for (j = 0; j < row; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
	
}

void playermove(char board[ROW][COL], int row, int col)
{
	int x = 0, y = 0;
	printf("玩家下棋，输入坐标：");
	while (1)
	{
		scanf_s("%d %d", &x, &y);
		if (x > 0 && x <= row && y > 0 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = 'O';
				break;
			}
			else
			{
				printf("坐标被占用\n");
			}
		}
		else
			printf("坐标非法，请重新输入:");
	}
}



void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑下棋：\n");
	while (1)
	{
		int x = rand() % row, y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = 'X';
			break;
		}
	}
}

void Iswin(char board[ROW][COL], int row, int col)
{

}
