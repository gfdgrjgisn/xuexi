#include<stdio.h>
#include<stdarg.h>
////void minprintf(char *fmt, ...)
////{
////	va_list ap;
////	char *p, *sval;
////	int ival;
////	double dval;
////
////	va_start(ap, fmt);
////	for (p = fmt; *p; p++) {
////		if (*p != '%') {
////			putchar(*p);
////			continue;
////		}
////		switch (*++p) {
////		case 'd':
////			ival = va_arg(ap, int);
////			printf("%d", ival);
////			break;
////		case 'f':
////			dval = va_arg(ap, double);
////			printf("%f", dval);
////			break;
////		case 's':
////			for (sval = va_arg(ap, char  * £©; *sval; sval++)
////				putchar(*sval);
////				break;
////		default:
////			putchar(*p);
////				break;
////		}
////	}
////	va_end(ap);
////}
//int main(int argc, char* argv[])
//{
//	FILE* fp;
//	void filecopy(FILE *, FILE *);
//	if (argc == 1)
//		filecopy(stdin, stdout);
//	else
//		while (--argc > 0)
//			if ((fp = fopen(*++argv, "r")) == NULL) {
//				printf("cat: cant open %s\n", *argv);
//				return 1;
//			}
//			else
//			{
//				filecopy(fp, stdout);
//				fclose(fp);
//			}
//	return 0;
//}
//void filecopy(FILE* ifp, FILE* ofp)
//{
//	int c;
//	while ((c = getc(ifp)) != EOF)
//		putc(c, ofp);
//}
