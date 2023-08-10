#define _CRT_SECURE_NO_WARNINGS
#pragma once
#define row 3
#define col 3
#include<stdio.h>

void initboard(char board[row][col], int ROW, int COL);
void Displayboard(char board[row][col], int ROW, int COL);

void playermove(char board[row][col], int ROW, int COL)
{
	int x = 0;
	int y = 0;
	printf("玩家行动\n");
	while (1)
	{
		printf("请输入下棋坐标");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该位置已被占用，请重新输入\n");
			}
		}
		else
		{
			printf("指令错误，请重新输入\n");
		}
	}
}