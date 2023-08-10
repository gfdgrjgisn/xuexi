#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include"game.h"
void menu()
{
	printf("1.开始游戏\n");
	printf("0.退出游戏\n");
}
void game()
{
	char board[row][col];
	initboard(board, row, col);
	Displayboard(board, row, col);
	while (1)
	{
		playermove(board, row, col);
		Displayboard(board, row, col);
	}
}
int main()
{
	int input = 0;
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
				printf("开始三子棋游戏\n");
				game();
				break;
		case 0:
			    printf("退出三子棋游戏\n");
				break;
		default:
			    printf("指令错误，请重新输入\n");
				break;
		}

	} while (input);
	return 0;
}