#include<stdio.h>
//int main()
//{
//	int a = 0;
//	printf("%d\n", !a);
//	printf("%d\n", sizeof(a));
//	return 0;
//}
//int main()
//{
//	int a = 23;
//	int b = a++;//先使用后赋值
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}
//int main()
//{
//	int a = 23;
//	int b = ++a;//先赋值后使用
//	printf("%d\n", a);
//	printf("%d\n", b);
//	return 0;
//}
//int main()
////{
////	int a = 3;
////	int b = 5;
////	/*if (a > b)
////		printf("%d\n", a);
////	else
////		printf("%d\n", b);*/
////	int max = 0;
////	max = a > b ? a : b;
////	printf("%d\n", max);
////
////	return 0;
////}
//int main()
//{
//	int d = (3+5,6+9, 6);
//	printf("%d\n", d);
//	return 0;
//}
//#define Add(a , b) ((a) + (b))
//int main()
//{
//	printf("%d\n", Add(3, 6));
//	return 0;
//
//}
//int main()
//{
//	int a = 39;
//	printf("%p\n", &a);
//	int* pa = &a;
//	*pa = 643;
//	printf("%d\n", a);
//	return 0;
//}
struct stu
{
	char name[342];
	int age;
	double score;
};
int main()
{
	struct stu a = { "呃呃", 20 , 43.0 };
	printf("%d %s %lf\n", a.age, a.name, a.score);
	return 0;
}