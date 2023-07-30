#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<time.h>
//int main()
//{
//	int i = 0;
//	int j = 1;
//	int n = 1;
//	scanf("%d", &n);
//	for (i = 1;i <= n; i++)
//	{
//		j *= i;
//	}
//	printf("%d\n", j);
//	return 0;
//}
//int main()
//{
//	char arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 3;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (mid > k - 1)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标数是：%d\n", mid);
//			break;
//		}
//		if (left > right)
//		{
//			printf("输入有误");
//			break;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = { "Hello,World" };
//	char arr2[] = { "###########" };
//	int left = 0;
//	int right = strlen(arr1)-1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//睡眠一秒
//		system("cls");//清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	printf("请输入您的密码");
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%s", password);
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("密码正确");
//			break;
//		}
//		else
//		{
//			printf("密码错误，请重新输入");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码错误，退出程序");
//	}
//	return 0;
//}
void menu()
{
	printf("1.开始游戏\n");
	printf("0,退出游戏\n");
}
void game()
{
	int b = 0;
	int a = rand()%100 + 1;
	
	while(1)
	{
		printf("请进行猜测");
		scanf("%d", &b);
		if (b > a)
			printf("您猜测的数字过大\n");
		else if (b < a)
			printf("您猜测的数字过小\n");
		else
		{
			printf("恭喜您猜测正确\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("指令错误\n");
			break;
		}
	} while (input);
	return 0;
}