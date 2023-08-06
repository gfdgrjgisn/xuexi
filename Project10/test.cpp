#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<windows.h>
void swap(int *pb, int *pa)
{
	int c = 0;
	c = *pa;
	*pa = *pb;
	*pb = c;
}
int main()
{
	int a = 10;
	int b = 20;
	swap(&a, &b);
	printf("%d\n %d\n", a, b);
	return 0;
}