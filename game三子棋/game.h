#pragma once
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<windows.h>
#define ROW 3
#define COL 3
//初始化棋盘
void Initboard(char board[ROW][COL], int row, int col);
//打印棋盘
void displayboard(char board[ROW][COL], int row, int col);
//玩家下棋
void playermove(char board[ROW][COL], int row, int col);
//电脑下棋
void ComputerMove(char board[ROW][COL], int row, int col);




