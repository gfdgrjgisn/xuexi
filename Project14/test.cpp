#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int a;
//	a = getchar();
//	while (a != EOF)
//	{
//		putchar(a);
//	a = getchar();
//	}
//	return 0;
//}
//int main()
//{
//	int c = 0;
//	c = getchar() != EOF;
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	int c, nl;
//	nl = 0;
//	while ((c = getchar()) != EOF)
//		if (c == '\n')
//			nl + 1;
//		printf("%d\n", nl);
//	return 0;
//}
//int mian()
//{
//	int c, i, nwhile, nother;
//	int ndigit[10];
//
//	nwhile = nother = 0;
//	for (i = 0; i < 10; ++i)
//		ndigit[i] = 0;
//	while ((c = getchar()) != EOF)
//		if (c >= '0' && c <= '9')
//			++ndigit[c - '0'];
//		else if (c == ' ' || c == '\n' || c == '\t')
//			++nwhile;
//		else
//			++nother;
//	return 0;
//}