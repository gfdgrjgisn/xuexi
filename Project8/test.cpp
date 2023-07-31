#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<Windows.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int s = a;
//		a = b;
//		b = s;
//	}
//	if (a < c)
//	{
//		int x = a;
//		a = c;
//		c = x;
//	}if (b < c)
//	{
//		int k = b;
//		b = c;
//		c = k;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}*/
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int max = 0;
//	if (a > b)
//	{
//		max = b;
//	}
//	else
//	{
//		max = a;
//	}
//	int i = 0;
//	for (i = max; i >= 0; i--)
//	{
//		if (a % i == 0 && b % i == 0)
//		{
//			printf("最大公约数为: %d\n", i);
//			break;
//		}
//	}
//
//	return 0;
//}
int main()
{
	int i = 1;
	for (i = 100; i <= 200; i++)
	{
		int j = 0;
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
				break;
		}
		if (i == j)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}