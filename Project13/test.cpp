#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<windows.h>
#include"game.h"
void menu()
{
	printf("1.��ʼ��Ϸ\n");
	printf("0.�˳���Ϸ\n");
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
				printf("��ʼ��������Ϸ\n");
				game();
				break;
		case 0:
			    printf("�˳���������Ϸ\n");
				break;
		default:
			    printf("ָ���������������\n");
				break;
		}

	} while (input);
	return 0;
}